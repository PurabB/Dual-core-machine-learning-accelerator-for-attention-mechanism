module fifo_top #(
    parameter int BW    = 4,
    parameter int WIDTH = 1
) (
    input                       clk,
    input        [WIDTH*BW-1:0] in,
    output logic [WIDTH*BW-1:0] out,
    input                       rd,
    input                       wr,
    output logic                o_full,
    input                       reset,
    output logic                o_ready
);

  logic [WIDTH-1:0] empty;
  logic [WIDTH-1:0] full;

  always_comb begin
    o_ready = !full;
    o_full  = full;
  end

  fifo_depth64 #(
      .BW(BW)
  ) fifo_instance (
      .rd_clk(clk),
      .wr_clk(clk),
      .rd(rd),
      .wr(wr),
      .o_empty(empty),
      .o_full(full),
      .in(in[BW-1:0]),
      .out(out[BW-1:0]),
      .reset(reset)
  );

endmodule
