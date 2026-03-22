module async_fifo #(
    parameter int BW = 8,
    parameter int SIMD = 1,
    parameter int MEM_SIZE = 16
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

  localparam int PtrWidth = $clog2(MEM_SIZE);

  logic full, empty;

  logic [PtrWidth:0] rd_ptr;
  logic [PtrWidth:0] wr_ptr;

  logic [SIMD*BW-1:0] q[MEM_SIZE];

  always_comb begin
    empty = (wr_ptr == rd_ptr) ? 1'b1 : 1'b0;
    full = ((wr_ptr[PtrWidth-1:0] == rd_ptr[PtrWidth-1:0]) && (wr_ptr[PtrWidth] != rd_ptr[PtrWidth])) ? 1'b1 : 1'b0;
    o_full = full;
    o_empty = empty;
    out = q[rd_ptr[PtrWidth-1:0]];
  end

  always_ff @(posedge rd_clk) begin
    if (reset) rd_ptr <= '0;
    else if ((rd == 1) && (empty == 0)) rd_ptr <= rd_ptr + 1;
  end

  always_ff @(posedge wr_clk) begin
    if (reset) wr_ptr <= '0;
    else begin
      if ((wr == 1) && (full == 0)) wr_ptr <= wr_ptr + 1;
      if (wr == 1) q[wr_ptr[PtrWidth-1:0]] <= in;
    end
  end

endmodule
