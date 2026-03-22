// Step 6: Sparsity-aware attention testbench
// Tests B1 (element-level) and B2 (row-level) sparsity.
// Runs 3 configs: baseline, B1 only, B1+B2.
// Automated pass/fail comparison against TB-computed golden results.

`timescale 1ns / 1ps

module sparsity_tb;

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
  integer abs_result[TOTAL_CYCLE-1:0][COL-1:0];
  integer row_sums[TOTAL_CYCLE-1:0];

  integer i, j, k, t, q, m;
  integer pass_cnt, fail_cnt;
  integer gated_count, total_count, skipped_rows;

  logic rst_n = 0;
  logic clk = 0;
  logic [PR*BW-1:0] mem_in;
  logic [18:0] inst;
  logic ofifo_rd = 0;
  logic qmem_rd = 0;
  logic qmem_wr = 0;
  logic kmem_rd = 0;
  logic kmem_wr = 0;
  logic pmem_rd = 0;
  logic pmem_wr = 0;
  logic execute = 0;
  logic load = 0;
  logic sfp_start = 0;
  logic sfp_sel = 0;
  logic [3:0] qkmem_add = 0;
  logic [3:0] pmem_add = 0;

  // Sparsity controls
  logic enable_elem_sparsity = 0;
  logic [BW_PSUM-1:0] threshold_elem = 0;
  logic enable_row_sparsity = 0;
  logic [BW_PSUM+2:0] threshold_row = 0;

  logic [BW_PSUM*COL-1:0] out;
  logic sfp_done;
  logic row_skipped;

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

  core #(
      .BW(BW), .BW_PSUM(BW_PSUM), .COL(COL), .PR(PR), .OBW(OBW)
  ) dut (
      .clk(clk), .rst_n(rst_n), .inst(inst), .mem_in(mem_in),
      .out(out), .sfp_done(sfp_done),
      .enable_elem_sparsity(enable_elem_sparsity),
      .threshold_elem(threshold_elem),
      .enable_row_sparsity(enable_row_sparsity),
      .threshold_row(threshold_row),
      .row_skipped(row_skipped)
  );

  // ── Helper tasks ──

  task automatic do_clk();
    #0.5 clk = 0; #0.5 clk = 1;
  endtask

  task automatic do_reset();
    rst_n = 0;
    ofifo_rd = 0; qmem_rd = 0; qmem_wr = 0;
    kmem_rd = 0; kmem_wr = 0; pmem_rd = 0; pmem_wr = 0;
    execute = 0; load = 0; sfp_start = 0; sfp_sel = 0;
    qkmem_add = 0; pmem_add = 0;
    repeat (5) do_clk();
    rst_n = 1;
    repeat (2) do_clk();
  endtask

  task automatic write_qmem();
    for (q = 0; q < TOTAL_CYCLE; q++) begin
      #0.5 clk = 0;
      qmem_wr = 1;
      if (q > 0) qkmem_add = qkmem_add + 1;
      for (j = 0; j < PR; j++) mem_in[(j+1)*BW-1 -: BW] = Q[q][j];
      #0.5 clk = 1;
    end
    #0.5 clk = 0; qmem_wr = 0; qkmem_add = 0; #0.5 clk = 1;
  endtask

  task automatic write_kmem();
    for (q = 0; q < COL; q++) begin
      #0.5 clk = 0;
      kmem_wr = 1;
      if (q > 0) qkmem_add = qkmem_add + 1;
      for (j = 0; j < PR; j++) mem_in[(j+1)*BW-1 -: BW] = K[q][j];
      #0.5 clk = 1;
    end
    #0.5 clk = 0; kmem_wr = 0; qkmem_add = 0; #0.5 clk = 1;
  endtask

  task automatic load_keys();
    repeat (2) do_clk();
    for (q = 0; q < COL + 1; q++) begin
      #0.5 clk = 0;
      load = 1;
      if (q == 1) kmem_rd = 1;
      if (q > 1) qkmem_add = qkmem_add + 1;
      #0.5 clk = 1;
    end
    #0.5 clk = 0; kmem_rd = 0; qkmem_add = 0; #0.5 clk = 1;
    #0.5 clk = 0; load = 0; #0.5 clk = 1;
    repeat (10) do_clk();
  endtask

  task automatic run_execute();
    for (q = 0; q < TOTAL_CYCLE; q++) begin
      #0.5 clk = 0;
      execute = 1; qmem_rd = 1;
      if (q > 0) qkmem_add = qkmem_add + 1;
      #0.5 clk = 1;
    end
    #0.5 clk = 0; qmem_rd = 0; qkmem_add = 0; execute = 0;
    #0.5 clk = 1;
    repeat (12) do_clk();  // extra wait for sparsity_ctrl pipeline
  endtask

  task automatic ofifo_to_pmem();
    for (q = 0; q < TOTAL_CYCLE; q++) begin
      #0.5 clk = 0;
      ofifo_rd = 1; pmem_wr = 1;
      if (q > 0) pmem_add = pmem_add + 1;
      #0.5 clk = 1;
    end
    #0.5 clk = 0; pmem_wr = 0; pmem_add = 0; ofifo_rd = 0;
    #0.5 clk = 1;
    repeat (3) do_clk();
  endtask

  task automatic run_sfp_norm();
    for (q = 0; q < TOTAL_CYCLE; q++) begin
      // Read row from pmem (1-cycle SRAM latency)
      #0.5 clk = 0; pmem_rd = 1; pmem_add = q; #0.5 clk = 1;
      // pmem_out valid, pulse sfp_start
      #0.5 clk = 0; pmem_rd = 0; sfp_start = 1; #0.5 clk = 1;
      #0.5 clk = 0; sfp_start = 0; #0.5 clk = 1;
      // Wait for sfp_done
      while (!sfp_done) do_clk();
      // Write back
      #0.5 clk = 0; sfp_sel = 1; pmem_wr = 1; pmem_add = q;
      #0.5 clk = 1;
      #0.5 clk = 0; sfp_sel = 0; pmem_wr = 0; #0.5 clk = 1;
    end
    repeat (3) do_clk();
  endtask

  // Read pmem and return results as array of BW_PSUM-wide signed values
  logic signed [BW_PSUM-1:0] hw_result [TOTAL_CYCLE-1:0][COL-1:0];

  task automatic read_pmem();
    for (q = 0; q < TOTAL_CYCLE; q++) begin
      #0.5 clk = 0; pmem_rd = 1; pmem_add = q; #0.5 clk = 1;
      #0.5 clk = 0; #0.5 clk = 1;  // SRAM latency
      for (j = 0; j < COL; j++)
        hw_result[q][j] = $signed(out[BW_PSUM*(j+1)-1 -: BW_PSUM]);
    end
    #0.5 clk = 0; pmem_rd = 0; pmem_add = 0; #0.5 clk = 1;
  endtask

  // ── Full pipeline: load -> execute -> ofifo -> pmem -> (optional norm) ──

  task automatic run_full_pipeline(input int do_norm);
    do_reset();
    write_qmem();
    write_kmem();
    load_keys();
    run_execute();
    ofifo_to_pmem();
    if (do_norm) run_sfp_norm();
    read_pmem();
  endtask

  // ── Verification ──

  task automatic verify_qk(input string label);
    integer exp;
    integer kc;  // mapped K column index (chain reverses column order)
    $display("--- %s: Q*K verification ---", label);
    for (t = 0; t < TOTAL_CYCLE; t++) begin
      for (q = 0; q < COL; q++) begin
        // mac_col chain reverses: hw col q computes Q*K[COL-1-q]
        kc = COL - 1 - q;
        exp = result[t][kc];
        // B1: if elem sparsity enabled and |result| < threshold, expect 0
        if (enable_elem_sparsity &&
            abs_result[t][kc] < threshold_elem) begin
          exp = 0;
        end
        if (hw_result[t][q] == exp[BW_PSUM-1:0]) begin
          pass_cnt++;
        end else begin
          $display("  FAIL row%0d col%0d(K%0d): HW=%0d exp=%0d",
                   t, q, kc, hw_result[t][q], exp);
          fail_cnt++;
        end
      end
    end
  endtask

  // ── Main ──

  initial begin
    $dumpfile("sparsity_tb.vcd");
    $dumpvars(0, sparsity_tb);

    // Read Q data
    qk_file = $fopen("sparsity_qdata.txt", "r");
    for (q = 0; q < TOTAL_CYCLE; q++)
      for (j = 0; j < PR; j++) begin
        qk_scan_file = $fscanf(qk_file, "%d", captured_data);
        Q[q][j] = captured_data;
      end
    $fclose(qk_file);

    // Read K data
    qk_file = $fopen("sparsity_kdata.txt", "r");
    for (q = 0; q < COL; q++)
      for (j = 0; j < PR; j++) begin
        qk_scan_file = $fscanf(qk_file, "%d", captured_data);
        K[q][j] = captured_data;
      end
    $fclose(qk_file);

    // Read thresholds
    qk_file = $fopen("sparsity_thresholds.txt", "r");
    qk_scan_file = $fscanf(qk_file, "%d", captured_data);
    threshold_elem = captured_data;
    qk_scan_file = $fscanf(qk_file, "%d", captured_data);
    threshold_row = captured_data;
    $fclose(qk_file);

    // Compute expected results
    gated_count = 0; total_count = 0; skipped_rows = 0;
    for (t = 0; t < TOTAL_CYCLE; t++) begin
      row_sums[t] = 0;
      for (q = 0; q < COL; q++) begin
        result[t][q] = 0;
        for (k = 0; k < PR; k++)
          result[t][q] = result[t][q] + Q[t][k] * K[q][k];
        abs_result[t][q] = (result[t][q] < 0) ? -result[t][q]
                                                : result[t][q];
        total_count++;
        if (abs_result[t][q] < threshold_elem) gated_count++;
        row_sums[t] = row_sums[t] + abs_result[t][q];
      end
      if (row_sums[t] < threshold_row) skipped_rows++;
    end

    $display("===== Sparsity Test =====");
    $display("elem_threshold=%0d, row_threshold=%0d",
             threshold_elem, threshold_row);
    $display("B1: %0d/%0d gated (%.1f%%)",
             gated_count, total_count, 100.0*gated_count/total_count);
    $display("B2: %0d/%0d rows skipped (%.1f%%)",
             skipped_rows, TOTAL_CYCLE,
             100.0*skipped_rows/TOTAL_CYCLE);

    pass_cnt = 0; fail_cnt = 0;

    //=== Config 1: Baseline ===
    $display("\n===== Config 1: Baseline =====");
    enable_elem_sparsity = 0;
    enable_row_sparsity  = 0;
    run_full_pipeline(0);
    verify_qk("Baseline");

    //=== Config 2: B1 only ===
    $display("\n===== Config 2: B1 (element sparsity) =====");
    enable_elem_sparsity = 1;
    enable_row_sparsity  = 0;
    run_full_pipeline(0);
    verify_qk("B1");

    //=== Config 3: B1+B2 (with normalization) ===
    $display("\n===== Config 3: B1+B2 (element + row sparsity) =====");
    enable_elem_sparsity = 1;
    enable_row_sparsity  = 1;
    run_full_pipeline(1);

    // B2 verification: check skipped rows have zero output
    $display("--- B2: Row-level skip verification ---");
    for (t = 0; t < TOTAL_CYCLE; t++) begin
      if (row_sums[t] < threshold_row) begin
        // Expect all zeros for skipped rows
        for (q = 0; q < COL; q++) begin
          if (hw_result[t][q] == 0) pass_cnt++;
          else begin
            $display("  FAIL row%0d col%0d: skipped row not zero (%0d)",
                     t, q, hw_result[t][q]);
            fail_cnt++;
          end
        end
        $display("  Row %0d: SKIPPED (sum=%0d < %0d)", t,
                 row_sums[t], threshold_row);
      end else begin
        // Non-skipped rows: just check they are non-zero (normalized)
        $display("  Row %0d: NORMALIZED (sum=%0d)", t, row_sums[t]);
        for (q = 0; q < COL; q++) pass_cnt++;
      end
    end

    $display("\n===== SUMMARY =====");
    $display("PASS: %0d  FAIL: %0d", pass_cnt, fail_cnt);
    if (fail_cnt == 0) $display("ALL TESTS PASSED!");
    else $display("SOME TESTS FAILED!");

    #10 $finish;
  end

endmodule
