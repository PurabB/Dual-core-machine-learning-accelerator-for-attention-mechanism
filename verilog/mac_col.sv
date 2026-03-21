module mac_col #(
    parameter int BW      = 8,
    parameter int BW_PSUM = 2 * BW + 4,
    parameter int PR      = 8,
    parameter int COL     = 8,
    parameter int COL_ID  = 0
) (
    input  logic                      clk,
    input  logic                      rst_n,
    input  logic signed [  PR*BW-1:0] q_in,
    input  logic                      i_en,
    input  logic                      i_wr_k,
    output logic signed [BW_PSUM-1:0] out,
    output logic signed [  PR*BW-1:0] q_out,
    output logic                      o_en,
    output logic                      o_wr_k,
    output logic                      fifo_wr
);

  // MAC pipeline: 2 (pipelined multiply) + 1 (extend) + $clog2(PR) (adder tree)
  // query_q non-blocking adds 1 more cycle
  localparam int MAC_LATENCY = $clog2(PR) + 3;

  logic                      load_ready_q;
  logic        [        3:0] cnt_q;
  logic                      en_q;
  logic                      wr_k_q;
  logic                      compute_pipe [0:MAC_LATENCY];
  logic signed [  PR*BW-1:0] query_q;
  logic signed [  PR*BW-1:0] key_q;
  logic signed [BW_PSUM-1:0] psum;

  always_comb begin
    o_en    = en_q;
    o_wr_k  = wr_k_q;
    fifo_wr = compute_pipe[MAC_LATENCY];
    q_out   = query_q;
    out     = psum;
  end

  mac #(
      .BW(BW),
      .BW_PSUM(BW_PSUM),
      .PR(PR)
  ) mac_inst (
      .clk(clk),
      .rst_n(rst_n),
      .a(query_q),
      .b(key_q),
      .out(psum)
  );

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      cnt_q        <= 0;
      load_ready_q <= 1;
      en_q         <= 0;
      wr_k_q       <= 0;
      for (int i = 0; i <= MAC_LATENCY; i++)
        compute_pipe[i] <= 0;
    end else begin
      en_q   <= i_en;
      wr_k_q <= i_wr_k;

      // Shift register: en & ~wr_k (compute mode) delayed
      // to align fifo_wr with MAC output
      compute_pipe[0] <= en_q & ~wr_k_q;
      for (int i = 1; i <= MAC_LATENCY; i++)
        compute_pipe[i] <= compute_pipe[i-1];

      if (en_q) begin
        query_q <= q_in;
        if (wr_k_q) begin
          if (cnt_q == COL + 1 - COL_ID) begin
            cnt_q        <= 0;
            key_q        <= q_in;
            load_ready_q <= 0;
          end else if (load_ready_q) begin
            cnt_q <= cnt_q + 1;
          end
        end
      end
    end
  end

endmodule
