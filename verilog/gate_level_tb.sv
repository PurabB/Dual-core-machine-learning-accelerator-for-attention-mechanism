// Gate-level testbench for Step 3
// Uses synthesized netlist module name
`timescale 1ns / 1ps

module gate_level_tb;

  parameter int TOTAL_CYCLE = 8;
  parameter int BW = 8;
  parameter int BW_PSUM = 2 * BW + 4;
  parameter int PR = 8;
  parameter int COL = 8;
  parameter int OBW = 10;

  integer qk_file, qk_scan_file, captured_data;
  integer K[COL-1:0][PR-1:0];
  integer Q[TOTAL_CYCLE-1:0][PR-1:0];
  integer result[TOTAL_CYCLE-1:0][COL-1:0];
  integer i, j, k, t, p, q, s;

  logic rst_n = 0;
  logic clk = 0;
  logic [PR*BW-1:0] mem_in;
  logic ofifo_rd = 0;
  logic [18:0] inst;
  logic qmem_rd = 0, qmem_wr = 0;
  logic kmem_rd = 0, kmem_wr = 0;
  logic pmem_rd = 0, pmem_wr = 0;
  logic execute = 0, load = 0;
  logic sfp_start = 0, sfp_sel = 0;
  logic [3:0] qkmem_add = 0, pmem_add = 0;

  logic [BW_PSUM*COL-1:0] out;
  logic sfp_done;

  always_comb begin
    inst[18]    = sfp_sel;
    inst[17]    = sfp_start;
    inst[16]    = ofifo_rd;
    inst[15:12] = qkmem_add;
    inst[11:8]  = pmem_add;
    inst[7]     = execute;
    inst[6]     = load;
    inst[5]     = qmem_rd;
    inst[4]     = qmem_wr;
    inst[3]     = kmem_rd;
    inst[2]     = kmem_wr;
    inst[1]     = pmem_rd;
    inst[0]     = pmem_wr;
  end

  logic [BW_PSUM-1:0] temp5b;
  logic [BW_PSUM*COL-1:0] temp16b;

  // Instantiate gate-level netlist (no parameters needed)
  core_COL8_BW8_BW_PSUM20_PR8_OBW10 core_instance (
      .rst_n(rst_n),
      .clk(clk),
      .mem_in(mem_in),
      .inst(inst),
      .out(out),
      .sfp_done(sfp_done)
  );

  initial begin
    $dumpfile("gate_level_tb.vcd");
    $dumpvars(0, gate_level_tb);

    ///// Q data reading /////
    $display("##### Q data reading #####");
    qk_file = $fopen("qdata.txt", "r");
    for (q = 0; q < TOTAL_CYCLE; q++) begin
      for (j = 0; j < PR; j++) begin
        qk_scan_file = $fscanf(qk_file, "%d", captured_data);
        Q[q][j] = captured_data;
      end
    end
    $fclose(qk_file);

    ///// K data reading /////
    $display("##### K data reading #####");
    qk_file = $fopen("kdata.txt", "r");
    for (q = 0; q < COL; q++) begin
      for (j = 0; j < PR; j++) begin
        qk_scan_file = $fscanf(qk_file, "%d", captured_data);
        K[q][j] = captured_data;
      end
    end
    $fclose(qk_file);

    /////////////// Expected result /////////////////
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
    repeat (2) begin #0.5 clk = 0; #0.5 clk = 1; end
    repeat (10) begin #0.5 clk = 0; #0.5 clk = 1; end
    rst_n = 1;

    ///// Qmem writing /////
    $display("##### Qmem writing #####");
    for (q = 0; q < TOTAL_CYCLE; q++) begin
      #0.5 clk = 0;
      qmem_wr = 1;
      if (q > 0) qkmem_add = qkmem_add + 1;
      for (j = 0; j < PR; j++)
        mem_in[(j+1)*BW-1 -: BW] = Q[q][j];
      #0.5 clk = 1;
    end
    #0.5 clk = 0; qmem_wr = 0; qkmem_add = 0; #0.5 clk = 1;

    ///// Kmem writing /////
    $display("##### Kmem writing #####");
    for (q = 0; q < COL; q++) begin
      #0.5 clk = 0;
      kmem_wr = 1;
      if (q > 0) qkmem_add = qkmem_add + 1;
      for (j = 0; j < PR; j++)
        mem_in[(j+1)*BW-1 -: BW] = K[q][j];
      #0.5 clk = 1;
    end
    #0.5 clk = 0; kmem_wr = 0; qkmem_add = 0; #0.5 clk = 1;

    repeat (2) begin #0.5 clk = 0; #0.5 clk = 1; end

    ///// K data loading to mac_col /////
    $display("##### K loading to processor #####");
    for (q = 0; q < COL + 1; q++) begin
      #0.5 clk = 0;
      load = 1;
      if (q == 1) kmem_rd = 1;
      if (q > 1) qkmem_add = qkmem_add + 1;
      #0.5 clk = 1;
    end
    #0.5 clk = 0; kmem_rd = 0; qkmem_add = 0; #0.5 clk = 1;
    #0.5 clk = 0; load = 0; #0.5 clk = 1;

    repeat (10) begin #0.5 clk = 0; #0.5 clk = 1; end

    ///// Execution /////
    $display("##### Execute #####");
    for (q = 0; q < TOTAL_CYCLE; q++) begin
      #0.5 clk = 0;
      execute = 1;
      qmem_rd = 1;
      if (q > 0) qkmem_add = qkmem_add + 1;
      #0.5 clk = 1;
    end
    #0.5 clk = 0; qmem_rd = 0; qkmem_add = 0; execute = 0; #0.5 clk = 1;

    repeat (10) begin #0.5 clk = 0; #0.5 clk = 1; end

    ///// OFIFO read & write to pmem /////
    $display("##### Move OFIFO to PMEM #####");
    for (q = 0; q < TOTAL_CYCLE; q++) begin
      #0.5 clk = 0;
      ofifo_rd = 1;
      pmem_wr  = 1;
      if (q > 0) pmem_add = pmem_add + 1;
      #0.5 clk = 1;
    end
    #0.5 clk = 0; pmem_wr = 0; pmem_add = 0; ofifo_rd = 0; #0.5 clk = 1;

    repeat (5) begin #0.5 clk = 0; #0.5 clk = 1; end

    ///// Read back results for verification /////
    $display("##### Read results from PMEM #####");
    for (q = 0; q < TOTAL_CYCLE; q++) begin
      #0.5 clk = 0;
      pmem_rd  = 1;
      pmem_add = q;
      #0.5 clk = 1;
      #0.5 clk = 0; #0.5 clk = 1;
      $display("HW prd @cycle%2d: %40h", q, out);
    end
    #0.5 clk = 0; pmem_rd = 0; pmem_add = 0; #0.5 clk = 1;

    repeat (5) begin #0.5 clk = 0; #0.5 clk = 1; end

    ///// sfp_row normalization /////
    $display("##### SFP Row Normalization #####");
    for (q = 0; q < TOTAL_CYCLE; q++) begin
      #0.5 clk = 0;
      pmem_rd  = 1;
      pmem_add = q;
      #0.5 clk = 1;

      #0.5 clk = 0;
      pmem_rd   = 0;
      sfp_start = 1;
      #0.5 clk = 1;
      #0.5 clk = 0;
      sfp_start = 0;
      #0.5 clk = 1;

      while (!sfp_done) begin
        #0.5 clk = 0; #0.5 clk = 1;
      end

      #0.5 clk = 0;
      sfp_sel  = 1;
      pmem_wr  = 1;
      pmem_add = q;
      #0.5 clk = 1;
      #0.5 clk = 0;
      sfp_sel  = 0;
      pmem_wr  = 0;
      #0.5 clk = 1;

      $display("sfp_row normalized row %0d (done)", q);
    end

    repeat (5) begin #0.5 clk = 0; #0.5 clk = 1; end

    ///// Read normalized results from PMEM /////
    $display("##### Read Normalized Results #####");
    for (q = 0; q < TOTAL_CYCLE; q++) begin
      #0.5 clk = 0;
      pmem_rd  = 1;
      pmem_add = q;
      #0.5 clk = 1;
      #0.5 clk = 0; #0.5 clk = 1;
      $display("norm @row%2d: %40h", q, out);
    end
    #0.5 clk = 0; pmem_rd = 0; pmem_add = 0; #0.5 clk = 1;

    #10 $finish;
  end

endmodule
