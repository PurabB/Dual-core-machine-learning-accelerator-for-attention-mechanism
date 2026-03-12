// Dual-core testbench for Step 4
// Two cores with different clock frequencies processing K vectors in parallel

`timescale 1ns/1ps

module fullchip_dual_tb;

parameter total_cycle = 8;
parameter bw = 8;
parameter bw_psum = 2*bw+4;
parameter pr = 16;
parameter col = 8;

integer qk_file;
integer qk_scan_file;
integer captured_data;

integer K0[col-1:0][pr-1:0];  // K data for core0
integer K1[col-1:0][pr-1:0];  // K data for core1
integer Q[total_cycle-1:0][pr-1:0];
integer result0[total_cycle-1:0][col-1:0];
integer result1[total_cycle-1:0][col-1:0];
integer sum0[total_cycle-1:0];
integer sum1[total_cycle-1:0];
integer total_sum[total_cycle-1:0];
integer norm0[total_cycle-1:0][col-1:0];
integer norm1[total_cycle-1:0][col-1:0];

integer i,j,k,t,q;

// Two clocks at different frequencies
reg clk0 = 0;
reg clk1 = 0;
reg reset = 1;

// Core0 signals
reg [pr*bw-1:0] mem_in0;
reg ofifo_rd0 = 0;
reg qmem_rd0 = 0, qmem_wr0 = 0;
reg kmem_rd0 = 0, kmem_wr0 = 0;
reg pmem_rd0 = 0, pmem_wr0 = 0;
reg execute0 = 0, load0 = 0;
reg [3:0] qkmem_add0 = 0, pmem_add0 = 0;
wire [16:0] inst0;

// Core1 signals
reg [pr*bw-1:0] mem_in1;
reg ofifo_rd1 = 0;
reg qmem_rd1 = 0, qmem_wr1 = 0;
reg kmem_rd1 = 0, kmem_wr1 = 0;
reg pmem_rd1 = 0, pmem_wr1 = 0;
reg execute1 = 0, load1 = 0;
reg [3:0] qkmem_add1 = 0, pmem_add1 = 0;
wire [16:0] inst1;

wire [bw_psum*col-1:0] out0, out1;

// Instruction encoding
assign inst0 = {ofifo_rd0, qkmem_add0, pmem_add0, execute0, load0, qmem_rd0, qmem_wr0, kmem_rd0, kmem_wr0, pmem_rd0, pmem_wr0};
assign inst1 = {ofifo_rd1, qkmem_add1, pmem_add1, execute1, load1, qmem_rd1, qmem_wr1, kmem_rd1, kmem_wr1, pmem_rd1, pmem_wr1};

// Clock generation: clk0 = 1GHz (1ns period), clk1 = 800MHz (1.25ns period)
always #0.5  clk0 = ~clk0;
always #0.625 clk1 = ~clk1;

fullchip #(.bw(bw), .bw_psum(bw_psum), .col(col), .pr(pr)) dut (
    .clk0(clk0),
    .clk1(clk1),
    .reset(reset),
    .inst0(inst0),
    .inst1(inst1),
    .mem_in0(mem_in0),
    .mem_in1(mem_in1),
    .out0(out0),
    .out1(out1)
);

// Task to write Q data to a core's qmem
task write_qmem_core0;
    integer qq;
    begin
        for (qq=0; qq<total_cycle; qq=qq+1) begin
            @(negedge clk0);
            qmem_wr0 = 1;
            if (qq>0) qkmem_add0 = qkmem_add0 + 1;
            mem_in0[1*bw-1:0*bw] = Q[qq][0];
            mem_in0[2*bw-1:1*bw] = Q[qq][1];
            mem_in0[3*bw-1:2*bw] = Q[qq][2];
            mem_in0[4*bw-1:3*bw] = Q[qq][3];
            mem_in0[5*bw-1:4*bw] = Q[qq][4];
            mem_in0[6*bw-1:5*bw] = Q[qq][5];
            mem_in0[7*bw-1:6*bw] = Q[qq][6];
            mem_in0[8*bw-1:7*bw] = Q[qq][7];
            mem_in0[9*bw-1:8*bw] = Q[qq][8];
            mem_in0[10*bw-1:9*bw] = Q[qq][9];
            mem_in0[11*bw-1:10*bw] = Q[qq][10];
            mem_in0[12*bw-1:11*bw] = Q[qq][11];
            mem_in0[13*bw-1:12*bw] = Q[qq][12];
            mem_in0[14*bw-1:13*bw] = Q[qq][13];
            mem_in0[15*bw-1:14*bw] = Q[qq][14];
            mem_in0[16*bw-1:15*bw] = Q[qq][15];
            @(posedge clk0);
        end
        @(negedge clk0);
        qmem_wr0 = 0; qkmem_add0 = 0;
        @(posedge clk0);
    end
endtask

task write_qmem_core1;
    integer qq;
    begin
        for (qq=0; qq<total_cycle; qq=qq+1) begin
            @(negedge clk1);
            qmem_wr1 = 1;
            if (qq>0) qkmem_add1 = qkmem_add1 + 1;
            mem_in1[1*bw-1:0*bw] = Q[qq][0];
            mem_in1[2*bw-1:1*bw] = Q[qq][1];
            mem_in1[3*bw-1:2*bw] = Q[qq][2];
            mem_in1[4*bw-1:3*bw] = Q[qq][3];
            mem_in1[5*bw-1:4*bw] = Q[qq][4];
            mem_in1[6*bw-1:5*bw] = Q[qq][5];
            mem_in1[7*bw-1:6*bw] = Q[qq][6];
            mem_in1[8*bw-1:7*bw] = Q[qq][7];
            mem_in1[9*bw-1:8*bw] = Q[qq][8];
            mem_in1[10*bw-1:9*bw] = Q[qq][9];
            mem_in1[11*bw-1:10*bw] = Q[qq][10];
            mem_in1[12*bw-1:11*bw] = Q[qq][11];
            mem_in1[13*bw-1:12*bw] = Q[qq][12];
            mem_in1[14*bw-1:13*bw] = Q[qq][13];
            mem_in1[15*bw-1:14*bw] = Q[qq][14];
            mem_in1[16*bw-1:15*bw] = Q[qq][15];
            @(posedge clk1);
        end
        @(negedge clk1);
        qmem_wr1 = 0; qkmem_add1 = 0;
        @(posedge clk1);
    end
endtask

initial begin
    $dumpfile("fullchip_dual_tb.vcd");
    $dumpvars(0, fullchip_dual_tb);

    ///// Read Q data /////
    $display("##### Q data reading #####");
    qk_file = $fopen("qdata.txt", "r");
    qk_scan_file = $fscanf(qk_file, "%s\n", captured_data);
    qk_scan_file = $fscanf(qk_file, "%s\n", captured_data);
    qk_scan_file = $fscanf(qk_file, "%s\n", captured_data);
    qk_scan_file = $fscanf(qk_file, "%s\n", captured_data);

    for (q=0; q<total_cycle; q=q+1)
        for (j=0; j<pr; j=j+1) begin
            qk_scan_file = $fscanf(qk_file, "%d\n", captured_data);
            Q[q][j] = captured_data;
        end

    ///// Read K data for core0 /////
    $display("##### K core0 data reading #####");
    qk_file = $fopen("kdata_core0.txt", "r");
    qk_scan_file = $fscanf(qk_file, "%s\n", captured_data);
    qk_scan_file = $fscanf(qk_file, "%s\n", captured_data);
    qk_scan_file = $fscanf(qk_file, "%s\n", captured_data);
    qk_scan_file = $fscanf(qk_file, "%s\n", captured_data);

    for (q=0; q<col; q=q+1)
        for (j=0; j<pr; j=j+1) begin
            qk_scan_file = $fscanf(qk_file, "%d\n", captured_data);
            K0[q][j] = captured_data;
        end

    ///// Read K data for core1 /////
    $display("##### K core1 data reading #####");
    qk_file = $fopen("kdata_core1.txt", "r");
    qk_scan_file = $fscanf(qk_file, "%s\n", captured_data);
    qk_scan_file = $fscanf(qk_file, "%s\n", captured_data);
    qk_scan_file = $fscanf(qk_file, "%s\n", captured_data);
    qk_scan_file = $fscanf(qk_file, "%s\n", captured_data);

    for (q=0; q<col; q=q+1)
        for (j=0; j<pr; j=j+1) begin
            qk_scan_file = $fscanf(qk_file, "%d\n", captured_data);
            K1[q][j] = captured_data;
        end

    ///// Compute expected results /////
    $display("##### Expected results #####");
    for (t=0; t<total_cycle; t=t+1) begin
        sum0[t] = 0;
        sum1[t] = 0;
        for (q=0; q<col; q=q+1) begin
            result0[t][q] = 0;
            result1[t][q] = 0;
            for (k=0; k<pr; k=k+1) begin
                result0[t][q] = result0[t][q] + Q[t][k] * K0[q][k];
                result1[t][q] = result1[t][q] + Q[t][k] * K1[q][k];
            end
            sum0[t] = sum0[t] + ((result0[t][q] < 0) ? -result0[t][q] : result0[t][q]);
            sum1[t] = sum1[t] + ((result1[t][q] < 0) ? -result1[t][q] : result1[t][q]);
        end
        total_sum[t] = sum0[t] + sum1[t];
        $display("cycle%2d: sum0=%d, sum1=%d, total=%d", t, sum0[t], sum1[t], total_sum[t]);

        for (q=0; q<col; q=q+1) begin
            if (total_sum[t] != 0) begin
                norm0[t][q] = result0[t][q] / (total_sum[t] >> 7);
                norm1[t][q] = result1[t][q] / (total_sum[t] >> 7);
            end else begin
                norm0[t][q] = 0;
                norm1[t][q] = 0;
            end
        end
        $display("norm0 @cycle%2d: %d %d %d %d %d %d %d %d", t,
            norm0[t][0], norm0[t][1], norm0[t][2], norm0[t][3],
            norm0[t][4], norm0[t][5], norm0[t][6], norm0[t][7]);
        $display("norm1 @cycle%2d: %d %d %d %d %d %d %d %d", t,
            norm1[t][0], norm1[t][1], norm1[t][2], norm1[t][3],
            norm1[t][4], norm1[t][5], norm1[t][6], norm1[t][7]);
    end

    ///// Reset /////
    repeat(12) @(posedge clk0);
    reset = 0;
    repeat(2) @(posedge clk0);

    ///// Write Q to both cores (Q is shared) /////
    $display("##### Write Q to both cores #####");
    fork
        write_qmem_core0();
        write_qmem_core1();
    join

    ///// Write K0 to core0 /////
    $display("##### Write K to core0 #####");
    for (q=0; q<col; q=q+1) begin
        @(negedge clk0);
        kmem_wr0 = 1;
        if (q>0) qkmem_add0 = qkmem_add0 + 1;
        mem_in0[1*bw-1:0*bw] = K0[q][0];
        mem_in0[2*bw-1:1*bw] = K0[q][1];
        mem_in0[3*bw-1:2*bw] = K0[q][2];
        mem_in0[4*bw-1:3*bw] = K0[q][3];
        mem_in0[5*bw-1:4*bw] = K0[q][4];
        mem_in0[6*bw-1:5*bw] = K0[q][5];
        mem_in0[7*bw-1:6*bw] = K0[q][6];
        mem_in0[8*bw-1:7*bw] = K0[q][7];
        mem_in0[9*bw-1:8*bw] = K0[q][8];
        mem_in0[10*bw-1:9*bw] = K0[q][9];
        mem_in0[11*bw-1:10*bw] = K0[q][10];
        mem_in0[12*bw-1:11*bw] = K0[q][11];
        mem_in0[13*bw-1:12*bw] = K0[q][12];
        mem_in0[14*bw-1:13*bw] = K0[q][13];
        mem_in0[15*bw-1:14*bw] = K0[q][14];
        mem_in0[16*bw-1:15*bw] = K0[q][15];
        @(posedge clk0);
    end
    @(negedge clk0); kmem_wr0 = 0; qkmem_add0 = 0; @(posedge clk0);

    ///// Write K1 to core1 /////
    $display("##### Write K to core1 #####");
    for (q=0; q<col; q=q+1) begin
        @(negedge clk1);
        kmem_wr1 = 1;
        if (q>0) qkmem_add1 = qkmem_add1 + 1;
        mem_in1[1*bw-1:0*bw] = K1[q][0];
        mem_in1[2*bw-1:1*bw] = K1[q][1];
        mem_in1[3*bw-1:2*bw] = K1[q][2];
        mem_in1[4*bw-1:3*bw] = K1[q][3];
        mem_in1[5*bw-1:4*bw] = K1[q][4];
        mem_in1[6*bw-1:5*bw] = K1[q][5];
        mem_in1[7*bw-1:6*bw] = K1[q][6];
        mem_in1[8*bw-1:7*bw] = K1[q][7];
        mem_in1[9*bw-1:8*bw] = K1[q][8];
        mem_in1[10*bw-1:9*bw] = K1[q][9];
        mem_in1[11*bw-1:10*bw] = K1[q][10];
        mem_in1[12*bw-1:11*bw] = K1[q][11];
        mem_in1[13*bw-1:12*bw] = K1[q][12];
        mem_in1[14*bw-1:13*bw] = K1[q][13];
        mem_in1[15*bw-1:14*bw] = K1[q][14];
        mem_in1[16*bw-1:15*bw] = K1[q][15];
        @(posedge clk1);
    end
    @(negedge clk1); kmem_wr1 = 0; qkmem_add1 = 0; @(posedge clk1);

    repeat(2) @(posedge clk0);

    ///// K loading for both cores /////
    $display("##### K loading #####");
    fork
        begin // Core0
            for (q=0; q<col+1; q=q+1) begin
                @(negedge clk0);
                load0 = 1;
                if (q==1) kmem_rd0 = 1;
                if (q>1) qkmem_add0 = qkmem_add0 + 1;
                @(posedge clk0);
            end
            @(negedge clk0); kmem_rd0 = 0; qkmem_add0 = 0; @(posedge clk0);
            @(negedge clk0); load0 = 0; @(posedge clk0);
        end
        begin // Core1
            for (q=0; q<col+1; q=q+1) begin
                @(negedge clk1);
                load1 = 1;
                if (q==1) kmem_rd1 = 1;
                if (q>1) qkmem_add1 = qkmem_add1 + 1;
                @(posedge clk1);
            end
            @(negedge clk1); kmem_rd1 = 0; qkmem_add1 = 0; @(posedge clk1);
            @(negedge clk1); load1 = 0; @(posedge clk1);
        end
    join

    repeat(10) @(posedge clk0);

    ///// Execute on both cores /////
    $display("##### Execute #####");
    fork
        begin // Core0
            for (q=0; q<total_cycle; q=q+1) begin
                @(negedge clk0);
                execute0 = 1; qmem_rd0 = 1;
                if (q>0) qkmem_add0 = qkmem_add0 + 1;
                @(posedge clk0);
            end
            @(negedge clk0); qmem_rd0 = 0; qkmem_add0 = 0; execute0 = 0; @(posedge clk0);
        end
        begin // Core1
            for (q=0; q<total_cycle; q=q+1) begin
                @(negedge clk1);
                execute1 = 1; qmem_rd1 = 1;
                if (q>0) qkmem_add1 = qkmem_add1 + 1;
                @(posedge clk1);
            end
            @(negedge clk1); qmem_rd1 = 0; qkmem_add1 = 0; execute1 = 0; @(posedge clk1);
        end
    join

    repeat(10) @(posedge clk0);

    ///// Move OFIFO to PMEM for both cores /////
    $display("##### Move ofifo to pmem #####");
    fork
        begin // Core0
            for (q=0; q<total_cycle; q=q+1) begin
                @(negedge clk0);
                ofifo_rd0 = 1; pmem_wr0 = 1;
                if (q>0) pmem_add0 = pmem_add0 + 1;
                @(posedge clk0);
            end
            @(negedge clk0); pmem_wr0 = 0; pmem_add0 = 0; ofifo_rd0 = 0; @(posedge clk0);
        end
        begin // Core1
            for (q=0; q<total_cycle; q=q+1) begin
                @(negedge clk1);
                ofifo_rd1 = 1; pmem_wr1 = 1;
                if (q>0) pmem_add1 = pmem_add1 + 1;
                @(posedge clk1);
            end
            @(negedge clk1); pmem_wr1 = 0; pmem_add1 = 0; ofifo_rd1 = 0; @(posedge clk1);
        end
    join

    repeat(5) @(posedge clk0);

    ///// Normalization: accumulate /////
    $display("##### Normalization: accumulate #####");
    fork
        begin // Core0
            for (q=0; q<total_cycle; q=q+1) begin
                @(negedge clk0);
                pmem_rd0 = 1; execute0 = 1; load0 = 0; pmem_add0 = q;
                @(posedge clk0);
            end
            @(negedge clk0); pmem_rd0 = 0; execute0 = 0; pmem_add0 = 0; @(posedge clk0);
        end
        begin // Core1
            for (q=0; q<total_cycle; q=q+1) begin
                @(negedge clk1);
                pmem_rd1 = 1; execute1 = 1; load1 = 0; pmem_add1 = q;
                @(posedge clk1);
            end
            @(negedge clk1); pmem_rd1 = 0; execute1 = 0; pmem_add1 = 0; @(posedge clk1);
        end
    join

    // Wait for sync to settle
    repeat(10) @(posedge clk0);

    ///// Normalization: divide & writeback /////
    $display("##### Normalization: divide & writeback #####");
    fork
        begin // Core0
            for (q=0; q<total_cycle; q=q+1) begin
                @(negedge clk0);
                pmem_rd0 = 1; pmem_wr0 = 1; load0 = 1; execute0 = 0; pmem_add0 = q;
                @(posedge clk0);
            end
            @(negedge clk0); pmem_rd0 = 0; pmem_wr0 = 0; load0 = 0; pmem_add0 = 0; @(posedge clk0);
        end
        begin // Core1
            for (q=0; q<total_cycle; q=q+1) begin
                @(negedge clk1);
                pmem_rd1 = 1; pmem_wr1 = 1; load1 = 1; execute1 = 0; pmem_add1 = q;
                @(posedge clk1);
            end
            @(negedge clk1); pmem_rd1 = 0; pmem_wr1 = 0; load1 = 0; pmem_add1 = 0; @(posedge clk1);
        end
    join

    repeat(5) @(posedge clk0);

    ///// Read results /////
    $display("##### Read normalized results #####");
    for (q=0; q<total_cycle; q=q+1) begin
        @(negedge clk0);
        pmem_rd0 = 1; pmem_add0 = q;
        @(posedge clk0);
        @(negedge clk0);
        @(posedge clk0);
        $display("HW core0 norm @cycle%2d: %40h", q, out0);
    end
    pmem_rd0 = 0; pmem_add0 = 0;

    for (q=0; q<total_cycle; q=q+1) begin
        @(negedge clk1);
        pmem_rd1 = 1; pmem_add1 = q;
        @(posedge clk1);
        @(negedge clk1);
        @(posedge clk1);
        $display("HW core1 norm @cycle%2d: %40h", q, out1);
    end
    pmem_rd1 = 0; pmem_add1 = 0;

    #20 $finish;
end

endmodule
