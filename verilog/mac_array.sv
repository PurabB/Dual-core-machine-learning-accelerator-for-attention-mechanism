module mac_array #(
    parameter int COL     = 8,
    parameter int BW      = 8,
    parameter int BW_PSUM = 2 * BW + 4,
    parameter int PR      = 8
) (
    input  logic                   clk,
    input  logic                   rst_n,
    input  logic                   en,
    input  logic                   wr_k,
    input  logic [      PR*BW-1:0] in,
    output logic [BW_PSUM*COL-1:0] out,
    output logic [        COL-1:0] fifo_wr
);

  // Chain signals using arrays to avoid multi-driver issues
  logic             en_chain  [COL+1];
  logic             wr_k_chain[COL+1];
  logic [BW*PR-1:0] q_chain   [COL+1];

  always_comb begin
    en_chain[0]   = en;
    wr_k_chain[0] = wr_k;
    q_chain[0]    = in;
  end

  for (genvar i = 0; i < COL; i++) begin : g_col
    mac_col #(
        .BW(BW),
        .BW_PSUM(BW_PSUM),
        .PR(PR),
        .COL(COL),
        .COL_ID(i + 1)
    ) mac_col_inst (
        .clk(clk),
        .rst_n(rst_n),
        .q_in(q_chain[i]),
        .q_out(q_chain[i+1]),
        .i_en(en_chain[i]),
        .i_wr_k(wr_k_chain[i]),
        .o_en(en_chain[i+1]),
        .o_wr_k(wr_k_chain[i+1]),
        .fifo_wr(fifo_wr[i]),
        .out(out[BW_PSUM*(i+1)-1 : BW_PSUM*i])
    );
  end

endmodule
