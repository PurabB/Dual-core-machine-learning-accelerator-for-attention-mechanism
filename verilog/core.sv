module core #(
    parameter int COL     = 8,
    parameter int BW      = 8,
    parameter int BW_PSUM = 2 * BW + 4,
    parameter int PR      = 8,
    parameter int OBW     = 10
) (
    input  logic                   clk,
    input  logic                   reset,     // active-high
    input  logic [           16:0] inst,
    input  logic [      PR*BW-1:0] mem_in,
    // Dual-core sum exchange
    input  logic [BW_PSUM+$clog2(COL)-1:0] sum_in,
    input  logic                   fifo_ext_rd,
    output logic [BW_PSUM+$clog2(COL)-1:0] sum_out,
    output logic [BW_PSUM*COL-1:0] out,
    output logic                   div_ready
);

  logic rst_n;
  assign rst_n = !reset;

  logic [BW_PSUM*COL-1:0] pmem_out;
  logic [      PR*BW-1:0] mac_in;
  logic [      PR*BW-1:0] kmem_out;
  logic [      PR*BW-1:0] qmem_out;
  logic [BW_PSUM*COL-1:0] pmem_in;
  logic [BW_PSUM*COL-1:0] fifo_out;
  logic [BW_PSUM*COL-1:0] array_out;
  logic [        COL-1:0] fifo_wr;
  logic                   ofifo_rd;
  logic [            3:0] qkmem_add;
  logic [            3:0] pmem_add;

  logic                   qmem_rd;
  logic                   qmem_wr;
  logic                   kmem_rd;
  logic                   kmem_wr;
  logic                   pmem_rd;
  logic                   pmem_wr;

  // Instruction decode (17-bit for dual-core)
  // inst[16] = ofifo_rd
  // inst[15:12] = qkmem_add, inst[11:8] = pmem_add
  // inst[7] = execute, inst[6] = load (wr_k)
  // inst[5:0] = qmem_rd, qmem_wr, kmem_rd, kmem_wr, pmem_rd, pmem_wr
  logic                   en;
  logic                   wr_k;

  // sfp_row signals
  logic                   sfp_start;
  logic                   sfp_done;
  logic                   sfp_sel;
  logic [OBW*COL-1:0]     sfp_out_raw;
  logic [BW_PSUM*COL-1:0] sfp_out;

  always_comb begin
    ofifo_rd   = inst[16];
    qkmem_add  = inst[15:12];
    pmem_add   = inst[11:8];
    en         = inst[7] | inst[6];
    wr_k       = inst[6];
    qmem_rd    = inst[5];
    qmem_wr    = inst[4];
    kmem_rd    = inst[3];
    kmem_wr    = inst[2];
    pmem_rd    = inst[1];
    pmem_wr    = inst[0];

    mac_in  = wr_k ? kmem_out : qmem_out;
    pmem_in = sfp_sel ? sfp_out : fifo_out;
  end

  // sfp_start: pulse when ofifo_rd falls (all rows written to PMEM)
  logic ofifo_rd_d;
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) ofifo_rd_d <= 0;
    else        ofifo_rd_d <= ofifo_rd;
  end
  assign sfp_start = ofifo_rd_d & ~ofifo_rd;

  // sfp_sel: high from sfp_done until next execute
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) sfp_sel <= 0;
    else if (sfp_done)        sfp_sel <= 1;
    else if (en && !wr_k)     sfp_sel <= 0;
  end

  assign div_ready = sfp_done;

  mac_array #(
      .BW(BW),
      .BW_PSUM(BW_PSUM),
      .COL(COL),
      .PR(PR)
  ) mac_array_instance (
      .clk(clk),
      .rst_n(rst_n),
      .en(en),
      .wr_k(wr_k),
      .in(mac_in),
      .out(array_out),
      .fifo_wr(fifo_wr)
  );

  ofifo #(
      .BW (BW_PSUM),
      .COL(COL)
  ) ofifo_inst (
      .clk(clk),
      .reset(reset),
      .in(array_out),
      .wr(fifo_wr),
      .rd(ofifo_rd),
      .o_full(),
      .o_valid(),
      .out(fifo_out)
  );

  // sfp_row with external sum for dual-core normalization
  sfp_row #(
      .COL(COL),
      .BW_PSUM(BW_PSUM),
      .OBW(OBW)
  ) sfp_row_inst (
      .clk(clk),
      .rst_n(rst_n),
      .start(sfp_start),
      .sum_in(sum_in),
      .sum_out(sum_out),
      .row_in(pmem_out),
      .row_out(sfp_out_raw),
      .done(sfp_done)
  );

  // Zero-extend OBW-bit sfp output to BW_PSUM bits
  for (genvar i = 0; i < COL; i++) begin : g_sfp_ext
    assign sfp_out[BW_PSUM*(i+1)-1 -: BW_PSUM] =
        {{(BW_PSUM-OBW){1'b0}}, sfp_out_raw[OBW*(i+1)-1 -: OBW]};
  end

  sram_w16 #(
      .SRAM_BIT(PR * BW)
  ) qmem_instance (
      .CLK(clk),
      .D  (mem_in),
      .Q  (qmem_out),
      .CEN(!(qmem_rd || qmem_wr)),
      .WEN(!qmem_wr),
      .A  (qkmem_add)
  );

  sram_w16 #(
      .SRAM_BIT(PR * BW)
  ) kmem_instance (
      .CLK(clk),
      .D  (mem_in),
      .Q  (kmem_out),
      .CEN(!(kmem_rd || kmem_wr)),
      .WEN(!kmem_wr),
      .A  (qkmem_add)
  );

  sram_w16 #(
      .SRAM_BIT(COL * BW_PSUM)
  ) psum_mem_instance (
      .CLK(clk),
      .D  (pmem_in),
      .Q  (pmem_out),
      .CEN(!(pmem_rd || pmem_wr)),
      .WEN(!pmem_wr),
      .A  (pmem_add)
  );

  always_comb out = pmem_out;

endmodule
