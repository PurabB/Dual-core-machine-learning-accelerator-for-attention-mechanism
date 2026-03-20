module fifo_depth16 #(
    parameter int BW   = 4,
    parameter int SIMD = 1
) (
    input  logic               rd_clk,
    input  logic               wr_clk,
    input  logic               rd,
    input  logic               wr,
    input  logic               reset,
    input  logic [SIMD*BW-1:0] in,
    output logic [SIMD*BW-1:0] out,
    output logic               o_full,
    output logic               o_empty
);

  logic full, empty;

  logic [4:0] rd_ptr = 5'b00000;
  logic [4:0] wr_ptr = 5'b00000;

  logic [SIMD*BW-1:0] q[16];

  always_comb begin
    empty = (wr_ptr == rd_ptr) ? 1'b1 : 1'b0;
    full = ((wr_ptr[3:0] == rd_ptr[3:0]) && (wr_ptr[4] != rd_ptr[4])) ? 1'b1 : 1'b0;
    o_full = full;
    o_empty = empty;
  end

  fifo_mux_16_1 #(
      .BW  (BW),
      .SIMD(SIMD)
  ) fifo_mux_16_1a (
      .in (q),
      .sel(rd_ptr[3:0]),
      .out(out)
  );

  always_ff @(posedge rd_clk) begin
    if (reset) rd_ptr <= 5'b00000;
    else if ((rd == 1) && (empty == 0)) rd_ptr <= rd_ptr + 1;
  end

  always_ff @(posedge wr_clk) begin
    if (reset) wr_ptr <= 5'b00000;
    else begin
      if ((wr == 1) && (full == 0)) wr_ptr <= wr_ptr + 1;

      if (wr == 1) q[wr_ptr[3:0]] <= in;
    end
  end

endmodule
