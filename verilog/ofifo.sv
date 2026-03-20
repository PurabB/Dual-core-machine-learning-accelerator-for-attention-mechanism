module ofifo #(
    parameter int COL  = 16,
    parameter int SIMD = 1,
    parameter int BW   = 24
) (
    input  logic                   clk,
    input  logic                   reset,
    input  logic                   rd,
    input  logic [        COL-1:0] wr,
    input  logic [SIMD*COL*BW-1:0] in,
    output logic [SIMD*COL*BW-1:0] out,
    output logic                   o_full,
    output logic                   o_valid
);

  logic [COL-1:0] full;
  logic [COL-1:0] empty;

  always_comb begin
    o_full = full[7];
    o_valid = !empty[0] && !empty[1] && !empty[2]
           && !empty[3] && !empty[4] && !empty[5]
           && !empty[6] && !empty[7];
  end

  for (genvar i = 0; i < COL; i++) begin : col_idx
    fifo_depth16 #(
        .BW  (BW),
        .SIMD(SIMD)
    ) fifo_instance (
        .rd_clk(clk),
        .wr_clk(clk),
        .rd(rd),
        .wr(wr[i]),
        .in(in[BW*SIMD*(i+1)-1:BW*SIMD*i]),
        .out(out[BW*SIMD*(i+1)-1:BW*SIMD*i]),
        .o_full(full[i]),
        .o_empty(empty[i]),
        .reset(reset)
    );
  end

endmodule
