module normalizer #(
    parameter int BW  = 4,
    parameter int OBW = 10,  // Output bit width (fixed-point fractional bits)
    parameter int MCP = 4    // Multi-Cycle Path: number of cycles for division
) (
    input  logic           clk,
    input  logic [ BW-1:0] in,
    input  logic           wr,
    input  logic           rd,
    input  logic           reset,
    output logic [OBW-1:0] out,
    output logic           o_full,
    output logic           o_ready
);

  // Internal signals
  logic [    BW-1:0] fifo_out;  // Combinational output from FIFO
  logic              fifo_full;
  logic              fifo_ready;
  logic              fifo_rd;  // Actual read signal sent to FIFO

  // Registers
  logic [       9:0] sum_q = 0;  // Accumulator for sum (max 64*15 = 960, fits in 10 bits)
  logic [   OBW-1:0] out_q = 0;  // Registered output (captures division result)
  logic [      31:0] mcp_cnt = 0;  // MCP counter (counts 0 to MCP-1)
  logic              rd_phase = 0;  // Tracks whether we are in the read phase
  logic              prev_wr = 0;  // Previous cycle write signal for edge detection

  // Division: shift fifo_out left by OBW bits, then divide by sum_q
  // This produces a fixed-point result with OBW fractional bits
  logic [BW+OBW-1:0] shifted;
  logic [   OBW-1:0] out_temp;

  // Output and combinational logic
  always_comb begin
    out = out_q;
    o_full = fifo_full;
    o_ready = fifo_ready;

    fifo_rd = rd && (mcp_cnt == MCP - 1);

    shifted = {{OBW{1'b0}}, fifo_out} << OBW;  // fifo_out << OBW
    out_temp = (sum_q != 0) ? shifted / sum_q : {OBW{1'b0}};
  end

  // Instantiate FIFO
  fifo_top #(
      .BW(BW),
      .WIDTH(1)
  ) fifo_inst (
      .clk(clk),
      .in(in),
      .out(fifo_out),
      .rd(fifo_rd),
      .wr(wr),
      .o_full(fifo_full),
      .reset(reset),
      .o_ready(fifo_ready)
  );

  // Sequential logic
  always_ff @(posedge clk) begin
    if (reset) begin
      sum_q    <= 10'd0;
      out_q    <= {OBW{1'b0}};
      mcp_cnt  <= 0;
      rd_phase <= 1'b0;
      prev_wr  <= 1'b0;
    end else begin
      prev_wr <= wr;

      // Sum accumulator: add input value during write phase
      if (wr) begin
        sum_q <= sum_q + {{(10 - BW) {1'b0}}, in};
      end

      // Reset sum_q when transitioning from read phase back to write phase
      // This occurs when rd was active (rd_phase=1) and now wr starts a new batch
      if (wr && !prev_wr && rd_phase) begin
        sum_q    <= {{(10-BW){1'b0}}, in};  // Start fresh with current input
        rd_phase <= 1'b0;
      end

      // Read phase: MCP counter and output capture
      if (rd) begin
        rd_phase <= 1'b1;

        // Capture output at the last cycle of MCP period
        if (mcp_cnt == MCP - 1) begin
          out_q   <= out_temp;
          mcp_cnt <= 0;
        end else begin
          mcp_cnt <= mcp_cnt + 1;
        end
      end else begin
        mcp_cnt <= 0;
      end
    end
  end

endmodule
