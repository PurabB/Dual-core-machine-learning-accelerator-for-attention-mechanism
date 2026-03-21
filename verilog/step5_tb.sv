// Step 5 testbench: verify pipelined MAC with single core
// Uses new core interface (17-bit inst, active-high reset, sum_in/sum_out)
`timescale 1ns / 1ps

module step5_tb;

  parameter int TOTAL_CYCLE = 8;
  parameter int BW = 8;
  parameter int BW_PSUM = 2 * BW + 4;
  parameter int PR = 8;
  parameter int COL = 8;
  parameter int OBW = 10;
  localparam int SumBW = BW_PSUM + $clog2(COL);

  integer qk_file, qk_scan_file, captured_data;
  integer K[COL-1:0][PR-1:0];
  integer Q[TOTAL_CYCLE-1:0][PR-1:0];
  integer result[TOTAL_CYCLE-1:0][COL-1:0];
  integer j, k, t, q;

  logic reset = 1;
  logic clk = 0;
  logic [PR*BW-1:0] mem_in;

  // 17-bit instruction
  logic ofifo_rd = 0;
  logic qmem_rd = 0, qmem_wr = 0;
  logic kmem_rd = 0, kmem_wr = 0;
  logic pmem_rd = 0, pmem_wr = 0;
  logic execute = 0, load = 0;
  logic [3:0] qkmem_add = 0, pmem_add = 0;
  logic [16:0] inst;

  logic [BW_PSUM*COL-1:0] out;
  logic div_ready;
  logic [SumBW-1:0] sum_out;

  always_comb begin
    inst = {
      ofifo_rd,
      qkmem_add,
      pmem_add,
      execute,
      load,
      qmem_rd,
      qmem_wr,
      kmem_rd,
      kmem_wr,
      pmem_rd,
      pmem_wr
    };
  end

  logic [BW_PSUM-1:0] temp5b;
  logic [BW_PSUM*COL-1:0] temp16b;

  core #(
      .BW(BW),
      .BW_PSUM(BW_PSUM),
      .COL(COL),
      .PR(PR),
      .OBW(OBW)
  ) dut (
      .clk(clk),
      .reset(reset),
      .inst(inst),
      .mem_in(mem_in),
      .sum_in({SumBW{1'b0}}),
      .fifo_ext_rd(1'b0),
      .sum_out(sum_out),
      .out(out),
      .div_ready(div_ready)
  );

  // Clock generation
  always #0.5 clk = ~clk;

  integer err_cnt;

  initial begin
    $dumpfile("step5_tb.vcd");
    $dumpvars(0, step5_tb);
    err_cnt = 0;

    ///// Q data reading /////
    $display("##### Q data reading #####");
    qk_file = $fopen("qdata.txt", "r");
    for (q = 0; q < TOTAL_CYCLE; q++)
      for (j = 0; j < PR; j++) begin
        qk_scan_file = $fscanf(qk_file, "%d", captured_data);
        Q[q][j] = captured_data;
      end
    $fclose(qk_file);

    ///// K data reading /////
    $display("##### K data reading #####");
    qk_file = $fopen("kdata.txt", "r");
    for (q = 0; q < COL; q++)
      for (j = 0; j < PR; j++) begin
        qk_scan_file = $fscanf(qk_file, "%d", captured_data);
        K[q][j] = captured_data;
      end
    $fclose(qk_file);

    ///// Expected result /////
    $display("##### Expected multiplication result #####");
    for (t = 0; t < TOTAL_CYCLE; t++) begin
      for (q = 0; q < COL; q++) begin
        result[t][q] = 0;
        for (k = 0; k < PR; k++)
          result[t][q] = result[t][q] + Q[t][k] * K[q][k];
        temp5b  = result[t][q];
        temp16b = {temp16b[BW_PSUM*(COL-1)-1:0], temp5b};
      end
      $display("prd @cycle%2d: %40h", t, temp16b);
    end

    // Reset
    repeat (12) @(posedge clk);
    reset = 0;
    repeat (2) @(posedge clk);

    ///// Qmem writing /////
    $display("##### Qmem writing #####");
    for (q = 0; q < TOTAL_CYCLE; q++) begin
      @(negedge clk);
      qmem_wr = 1;
      if (q > 0) qkmem_add = qkmem_add + 1;
      for (j = 0; j < PR; j++)
        mem_in[(j+1)*BW-1 -: BW] = Q[q][j];
      @(posedge clk);
    end
    @(negedge clk); qmem_wr = 0; qkmem_add = 0; @(posedge clk);

    ///// Kmem writing /////
    $display("##### Kmem writing #####");
    for (q = 0; q < COL; q++) begin
      @(negedge clk);
      kmem_wr = 1;
      if (q > 0) qkmem_add = qkmem_add + 1;
      for (j = 0; j < PR; j++)
        mem_in[(j+1)*BW-1 -: BW] = K[q][j];
      @(posedge clk);
    end
    @(negedge clk); kmem_wr = 0; qkmem_add = 0; @(posedge clk);

    repeat (2) @(posedge clk);

    ///// K data loading to mac_col /////
    $display("##### K loading to processor #####");
    for (q = 0; q < COL + 1; q++) begin
      @(negedge clk);
      load = 1;
      if (q == 1) kmem_rd = 1;
      if (q > 1) qkmem_add = qkmem_add + 1;
      @(posedge clk);
    end
    @(negedge clk); kmem_rd = 0; qkmem_add = 0; @(posedge clk);
    @(negedge clk); load = 0; @(posedge clk);

    repeat (10) @(posedge clk);

    ///// Execution /////
    $display("##### Execute #####");
    for (q = 0; q < TOTAL_CYCLE; q++) begin
      @(negedge clk);
      execute = 1;
      qmem_rd = 1;
      if (q > 0) qkmem_add = qkmem_add + 1;
      @(posedge clk);
    end
    @(negedge clk); qmem_rd = 0; qkmem_add = 0; execute = 0; @(posedge clk);

    // Extra wait for pipelined MAC (1 extra cycle latency)
    repeat (15) @(posedge clk);

    ///// OFIFO read & write to pmem /////
    $display("##### Move OFIFO to PMEM #####");
    for (q = 0; q < TOTAL_CYCLE; q++) begin
      @(negedge clk);
      ofifo_rd = 1;
      pmem_wr  = 1;
      if (q > 0) pmem_add = pmem_add + 1;
      @(posedge clk);
    end
    @(negedge clk); pmem_wr = 0; pmem_add = 0; ofifo_rd = 0; @(posedge clk);

    repeat (5) @(posedge clk);

    ///// Read back results for verification /////
    $display("##### Read results from PMEM #####");
    for (q = 0; q < TOTAL_CYCLE; q++) begin
      @(negedge clk);
      pmem_rd  = 1;
      pmem_add = q;
      @(posedge clk);
      @(negedge clk); @(posedge clk);  // 1 cycle SRAM latency

      // Check each column individually
      begin
        integer col_ok;
        col_ok = 1;
        for (j = 0; j < COL; j++) begin
          temp5b = out[BW_PSUM*(j+1)-1 -: BW_PSUM];
          if ($signed(temp5b) !== result[q][COL-1-j]) col_ok = 0;
        end
        if (!col_ok) begin
          $display("FAIL @cycle%2d: got %40h", q, out);
          for (j = 0; j < COL; j++)
            $display("  col%0d: got %0d, exp %0d",
              j, $signed(out[BW_PSUM*(j+1)-1 -: BW_PSUM]), result[q][COL-1-j]);
          err_cnt = err_cnt + 1;
        end else begin
          $display("PASS @cycle%2d: %40h", q, out);
        end
      end
    end
    @(negedge clk); pmem_rd = 0; pmem_add = 0; @(posedge clk);

    repeat (5) @(posedge clk);

    if (err_cnt == 0)
      $display("===== ALL TESTS PASSED =====");
    else
      $display("===== %0d TESTS FAILED =====", err_cnt);

    #10 $finish;
  end

endmodule
