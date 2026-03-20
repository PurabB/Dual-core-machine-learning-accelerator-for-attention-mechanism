module mac_col #(
    parameter int BW      = 8,
    parameter int BW_PSUM = 2 * BW + 6,
    parameter int PR      = 8,
    parameter int COL_ID  = 0
) (
    input  logic                      clk,
    input  logic                      reset,
    input  logic signed [  PR*BW-1:0] q_in,
    input  logic        [        1:0] i_inst,
    output logic signed [BW_PSUM-1:0] out,
    output logic signed [  PR*BW-1:0] q_out,
    output logic        [        1:0] o_inst,
    output logic                      fifo_wr
);

  logic                      load_ready_q;
  logic        [        3:0] cnt_q;
  logic        [        1:0] inst_q;
  logic        [        1:0] inst_2q;
  logic signed [  PR*BW-1:0] query_q;
  logic signed [  PR*BW-1:0] key_q;
  logic signed [BW_PSUM-1:0] psum;

  always_comb begin
    o_inst  = inst_q;
    fifo_wr = inst_2q[1];
    q_out   = query_q;
    out     = psum;
  end

  mac_16in #(
      .BW(BW),
      .BW_PSUM(BW_PSUM),
      .PR(PR)
  ) mac_16in_instance (
      .a  (query_q),
      .b  (key_q),
      .out(psum)
  );


  always_ff @(posedge clk) begin
    if (reset) begin
      cnt_q <= 0;
      load_ready_q <= 1;
      inst_q <= 0;
      inst_2q <= 0;
    end else begin
      inst_q  <= i_inst;
      inst_2q <= inst_q;
      if (inst_q[0]) begin
        query_q <= q_in;
        if (cnt_q == 9 - COL_ID) begin
          cnt_q <= 0;
          key_q <= q_in;
          load_ready_q <= 0;
        end else if (load_ready_q) cnt_q <= cnt_q + 1;
      end else if (inst_q[1]) begin
        query_q <= q_in;
      end
    end
  end

endmodule
