module mac_array #(
    parameter int COL     = 8,
    parameter int BW      = 8,
    parameter int BW_PSUM = 2 * BW + 6,
    parameter int PR      = 8
) (
    input  logic                   clk,
    input  logic                   reset,
    input  logic [            1:0] inst,
    input  logic [      PR*BW-1:0] in,
    output logic [BW_PSUM*COL-1:0] out,
    output logic [        COL-1:0] fifo_wr
);

  // Chain signals using arrays to avoid multi-driver issues
  logic [      1:0] inst_chain[COL+1];
  logic [BW*PR-1:0] q_chain   [COL+1];

  always_comb begin
    inst_chain[0] = inst;
    q_chain[0]    = in;
  end

  for (genvar i = 0; i < COL; i++) begin : col_idx
    mac_col #(
        .BW(BW),
        .BW_PSUM(BW_PSUM),
        .PR(PR),
        .COL_ID(i + 1)
    ) mac_col_inst (
        .q_in(q_chain[i]),
        .q_out(q_chain[i+1]),
        .clk(clk),
        .reset(reset),
        .fifo_wr(fifo_wr[i]),
        .i_inst(inst_chain[i]),
        .o_inst(inst_chain[i+1]),
        .out(out[BW_PSUM*(i+1)-1 : BW_PSUM*i])
    );
  end

endmodule
