// Created by prof. Mingu Kang @VVIP Lab in UCSD ECE department
// Please do not spread this code without permission
module fullchip #(
    parameter col     = 8,
    parameter bw      = 8,
    parameter bw_psum = 2*bw+4,
    parameter pr      = 16
) (
    input  logic                    clk0,
    input  logic                    clk1,
    input  logic                    reset,
    input  logic [16:0]             inst0,
    input  logic [16:0]             inst1,
    input  logic [pr*bw-1:0]        mem_in0,
    input  logic [pr*bw-1:0]        mem_in1,
    output logic [bw_psum*col-1:0]  out0,
    output logic [bw_psum*col-1:0]  out1
);

// Sum exchange wires between cores
wire [bw_psum+3:0] sum_out0;  // sum from core0
wire [bw_psum+3:0] sum_out1;  // sum from core1

// Synchronized sums (cross-clock domain)
wire [bw_psum+3:0] sum0_to_core1_sync;
wire [bw_psum+3:0] sum1_to_core0_sync;

// FIFO external read signals - controlled by instruction
wire fifo_ext_rd0;  // core1 reads core0's sum FIFO
wire fifo_ext_rd1;  // core0 reads core1's sum FIFO

// Use a specific instruction bit pattern to trigger external FIFO read
// We'll reuse: fifo_ext_rd is triggered when the other core is in div mode
assign fifo_ext_rd0 = inst1[6] && !inst1[7] && inst1[1]; // core1 in div mode -> read core0's ext fifo
assign fifo_ext_rd1 = inst0[6] && !inst0[7] && inst0[1]; // core0 in div mode -> read core1's ext fifo

//--- Core 0 (clk0 domain) ---
core #(.bw(bw), .bw_psum(bw_psum), .col(col), .pr(pr)) core0 (
    .clk(clk0),
    .reset(reset),
    .inst(inst0),
    .mem_in(mem_in0),
    .sum_in(sum1_to_core0_sync),
    .fifo_ext_rd(fifo_ext_rd1),
    .sum_out(sum_out0),
    .out(out0)
);

//--- Core 1 (clk1 domain) ---
core #(.bw(bw), .bw_psum(bw_psum), .col(col), .pr(pr)) core1 (
    .clk(clk1),
    .reset(reset),
    .inst(inst1),
    .mem_in(mem_in1),
    .sum_in(sum0_to_core1_sync),
    .fifo_ext_rd(fifo_ext_rd0),
    .sum_out(sum_out1),
    .out(out1)
);

//--- Cross-clock domain synchronizers ---
// Synchronize sum_out0 (clk0) -> core1 (clk1)
genvar i;
generate
    for (i = 0; i < bw_psum+4; i = i+1) begin : sync_0to1
        sync sync_inst (
            .clk(clk1),
            .in(sum_out0[i]),
            .out(sum0_to_core1_sync[i])
        );
    end

    for (i = 0; i < bw_psum+4; i = i+1) begin : sync_1to0
        sync sync_inst (
            .clk(clk0),
            .in(sum_out1[i]),
            .out(sum1_to_core0_sync[i])
        );
    end
endgenerate

endmodule
