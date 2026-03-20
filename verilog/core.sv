module core #(
    parameter int COL     = 8,
    parameter int BW      = 8,
    parameter int BW_PSUM = 2 * BW + 4,
    parameter int PR      = 16
) (
    input logic clk,
    input logic reset,
    input logic [16:0] inst,
    input logic [PR*BW-1:0] mem_in,
    input logic [BW_PSUM+3:0] sum_in,  // sum from other core (dual-core)
    // external FIFO (First In First Out) read (from other core)
    input logic fifo_ext_rd,
    output logic [BW_PSUM+3:0] sum_out,  // sum to other core (dual-core)
    output logic [BW_PSUM*COL-1:0] out,
    output logic div_ready,  // division result ready (MCP - Multi-Cycle Path)
    // Element-level sparsity (Step 6 B1)
    input logic enable_elem_sparsity,
    input logic [BW_PSUM-1:0] threshold_elem,
    // Row-level sparsity (Step 6 B2)
    input logic enable_row_sparsity,
    input logic [BW_PSUM+3:0] threshold_row
);

  logic [BW_PSUM*COL-1:0] pmem_out;
  logic [      PR*BW-1:0] mac_in;
  logic [      PR*BW-1:0] kmem_out;
  logic [      PR*BW-1:0] qmem_out;
  logic [BW_PSUM*COL-1:0] pmem_in;
  logic [BW_PSUM*COL-1:0] fifo_out;
  logic [BW_PSUM*COL-1:0] sfp_out;
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

  // Instruction decode
  // SFP (Softmax/normalization) control signals from instruction
  // inst[7] = execute, inst[6] = load
  // sfp_acc: accumulate when execute=1 + pmem_rd=1 + load=0
  // sfp_div: divide when load=1 + pmem_rd=1 + execute=0
  logic                   sfp_acc;
  logic                   sfp_div;

  always_comb begin
    ofifo_rd   = inst[16];
    qkmem_add  = inst[15:12];
    pmem_add   = inst[11:8];
    qmem_rd    = inst[5];
    qmem_wr    = inst[4];
    kmem_rd    = inst[3];
    kmem_wr    = inst[2];
    pmem_rd    = inst[1];
    pmem_wr    = inst[0];

    sfp_acc = inst[7] && !inst[6] && pmem_rd;
    sfp_div = inst[6] && !inst[7] && pmem_rd;

    mac_in  = inst[6] ? kmem_out : qmem_out;
    // When sfp is writing back normalized results, use sfp_out; otherwise use fifo_out
    pmem_in = (sfp_div) ? sfp_out : fifo_out;
  end

  // Element-level sparsity (Step 6 B1)
  logic [BW_PSUM*COL-1:0] gated_array_out;
  logic [        COL-1:0] gate_mask;

  mac_array #(
      .BW(BW),
      .BW_PSUM(BW_PSUM),
      .COL(COL),
      .PR(PR)
  ) mac_array_instance (
      .in(mac_in),
      .clk(clk),
      .reset(reset),
      .inst(inst[7:6]),
      .fifo_wr(fifo_wr),
      .out(array_out)
  );

  // Element-level sparsity controller (Step 6 B1)
  // Inserted between mac_array and ofifo
  sparsity_ctrl #(
      .BW_PSUM(BW_PSUM),
      .COL(COL)
  ) sparsity_ctrl_instance (
      .clk(clk),
      .reset(reset),
      .enable(enable_elem_sparsity),
      .threshold_elem(threshold_elem),
      .mac_out(array_out),
      .gate_mask(gate_mask),
      .gated_out(gated_array_out)
  );

  // Gate FIFO write signals with sparsity mask
  logic [COL-1:0] fifo_wr_gated;
  always_comb fifo_wr_gated = enable_elem_sparsity ? (fifo_wr & ~gate_mask) : fifo_wr;

  ofifo #(
      .BW (BW_PSUM),
      .COL(COL)
  ) ofifo_inst (
      .reset(reset),
      .clk(clk),
      .in(gated_array_out),
      .wr(fifo_wr_gated),
      .rd(ofifo_rd),
      .o_valid(fifo_valid),
      .out(fifo_out)
  );

  // SFP row - normalization module with MCP support
  logic sfp_div_ready;

  sfp_row #(
      .COL(COL),
      .BW(BW),
      .BW_PSUM(BW_PSUM)
  ) sfp_instance (
      .clk(clk),
      .reset(reset),
      .acc(sfp_acc),
      .div(sfp_div),
      .fifo_ext_rd(fifo_ext_rd),
      .sum_in(sum_in),
      .sfp_in(pmem_out),
      .sfp_out(sfp_out),
      .sum_out(sum_out),
      .div_ready(sfp_div_ready),
      .enable_row_sparsity(enable_row_sparsity),
      .threshold_row(threshold_row)
  );

  always_comb div_ready = sfp_div_ready;

  // Gate pmem write during sfp_div mode:
  // Only write when division result is ready (1 cycle after MCP capture)
  // This allows the testbench to assert pmem_wr for the entire div phase
  // while the core internally gates the actual write to the correct cycle.
  logic sfp_div_ready_d;
  always_ff @(posedge clk) begin
    if (reset) sfp_div_ready_d <= 0;
    else sfp_div_ready_d <= sfp_div_ready;
  end

  logic pmem_wr_effective;
  always_comb pmem_wr_effective = sfp_div ? (pmem_wr && sfp_div_ready_d) : pmem_wr;

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
      .CEN(!(pmem_rd || pmem_wr_effective)),
      .WEN(!pmem_wr_effective),
      .A  (pmem_add)
  );

  // Expose pmem_out for verification
  always_comb out = pmem_out;

  //////////// For printing purpose ////////////
  always_ff @(posedge clk) begin
    if (pmem_wr_effective) $display("Memory write to PSUM mem add %x %x ", pmem_add, pmem_in);
  end

endmodule
