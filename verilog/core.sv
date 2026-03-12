// Created by prof. Mingu Kang @VVIP Lab in UCSD ECE department
// Please do not spread this code without permission
module core #(
    parameter col     = 8,
    parameter bw      = 8,
    parameter bw_psum = 2*bw+4,
    parameter pr      = 16
) (
    input  logic                    clk,
    input  logic                    reset,
    input  logic [16:0]             inst,
    input  logic [pr*bw-1:0]        mem_in,
    input  logic [bw_psum+3:0]      sum_in,       // sum from other core (dual-core)
    input  logic                    fifo_ext_rd,   // external FIFO read (from other core)
    output logic [bw_psum+3:0]      sum_out,       // sum to other core (dual-core)
    output logic [bw_psum*col-1:0]  out
);

wire [bw_psum*col-1:0] pmem_out;
wire [pr*bw-1:0]       mac_in;
wire [pr*bw-1:0]       kmem_out;
wire [pr*bw-1:0]       qmem_out;
wire [bw_psum*col-1:0] pmem_in;
wire [bw_psum*col-1:0] fifo_out;
wire [bw_psum*col-1:0] sfp_out;
wire [bw_psum*col-1:0] array_out;
wire [col-1:0]         fifo_wr;
wire                   ofifo_rd;
wire [3:0]             qkmem_add;
wire [3:0]             pmem_add;

wire qmem_rd;
wire qmem_wr;
wire kmem_rd;
wire kmem_wr;
wire pmem_rd;
wire pmem_wr;

// Instruction decode
assign ofifo_rd   = inst[16];
assign qkmem_add  = inst[15:12];
assign pmem_add   = inst[11:8];

assign qmem_rd = inst[5];
assign qmem_wr = inst[4];
assign kmem_rd = inst[3];
assign kmem_wr = inst[2];
assign pmem_rd = inst[1];
assign pmem_wr = inst[0];

// SFP (Softmax/normalization) control signals from instruction
// inst[7] = execute, inst[6] = load
// We reuse inst bits for sfp control:
//   When not in execute/load mode, use inst[7] as sfp_acc, inst[6] as sfp_div
wire sfp_acc = inst[7] && !inst[6] && pmem_rd;  // accumulate when execute + pmem_rd (fetch from pmem for normalization)
wire sfp_div = inst[6] && !inst[7] && pmem_rd;  // divide when load + pmem_rd

assign mac_in  = inst[6] ? kmem_out : qmem_out;
// When sfp is writing back normalized results, use sfp_out; otherwise use fifo_out
assign pmem_in = (sfp_div) ? sfp_out : fifo_out;

mac_array #(.bw(bw), .bw_psum(bw_psum), .col(col), .pr(pr)) mac_array_instance (
        .in(mac_in),
        .clk(clk),
        .reset(reset),
        .inst(inst[7:6]),
        .fifo_wr(fifo_wr),
	.out(array_out)
);

ofifo #(.bw(bw_psum), .col(col))  ofifo_inst (
        .reset(reset),
        .clk(clk),
        .in(array_out),
        .wr(fifo_wr),
        .rd(ofifo_rd),
        .o_valid(fifo_valid),
        .out(fifo_out)
);

// SFP row - normalization module
sfp_row #(.col(col), .bw(bw), .bw_psum(bw_psum)) sfp_instance (
        .clk(clk),
        .acc(sfp_acc),
        .div(sfp_div),
        .fifo_ext_rd(fifo_ext_rd),
        .sum_in(sum_in),
        .sfp_in(pmem_out),
        .sfp_out(sfp_out),
        .sum_out(sum_out)
);

sram_w16 #(.sram_bit(pr*bw)) qmem_instance (
        .CLK(clk),
        .D(mem_in),
        .Q(qmem_out),
        .CEN(!(qmem_rd||qmem_wr)),
        .WEN(!qmem_wr),
        .A(qkmem_add)
);

sram_w16 #(.sram_bit(pr*bw)) kmem_instance (
        .CLK(clk),
        .D(mem_in),
        .Q(kmem_out),
        .CEN(!(kmem_rd||kmem_wr)),
        .WEN(!kmem_wr),
        .A(qkmem_add)
);

sram_w16 #(.sram_bit(col*bw_psum)) psum_mem_instance (
        .CLK(clk),
        .D(pmem_in),
        .Q(pmem_out),
        .CEN(!(pmem_rd||pmem_wr)),
        .WEN(!pmem_wr),
        .A(pmem_add)
);

// Expose pmem_out for verification
assign out = pmem_out;

  //////////// For printing purpose ////////////
  always @(posedge clk) begin
      if(pmem_wr)
         $display("Memory write to PSUM mem add %x %x ", pmem_add, pmem_in);
  end

endmodule
