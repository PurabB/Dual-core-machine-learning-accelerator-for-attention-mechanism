module normalizer_tb;

  parameter int BW = 4;
  parameter int OBW = 10;  // Output bit width (fixed-point fractional bits)
  parameter int MCP = 1;  // Multi-Cycle Path parameter
  parameter int TOTAL_CYCLE = 64;  // FIFO depth / batch size

  logic clk = 0;
  logic rd = 0;
  logic wr = 0;
  logic reset = 0;
  logic [BW-1:0] in;
  logic [OBW-1:0] out;
  logic full, ready;

  integer          w_file;  // File handler
  integer          w_scan_file;  // Scan file return value
  integer          captured_data;
  integer          i;
  integer          j;

  // Storage for input values (signed integers from file)
  integer          w                                      [TOTAL_CYCLE-1:0];

  // Storage for converted 4-bit unsigned values (what actually enters the FIFO)
  logic   [BW-1:0] w_bin_vals                             [TOTAL_CYCLE-1:0];

  integer          expected_sum;
  integer          expected_out;
  integer          actual_out;
  integer          error_count;

  // Convert signed integer to 4-bit binary (2's complement)
  // Same function as in fifo_tb.sv
  function [3:0] w_bin;
    input integer weight;
    begin
      if (weight > -1) w_bin[3] = 0;
      else begin
        w_bin[3] = 1;
        weight   = weight + 8;
      end

      if (weight > 3) begin
        w_bin[2] = 1;
        weight   = weight - 4;
      end else w_bin[2] = 0;

      if (weight > 1) begin
        w_bin[1] = 1;
        weight   = weight - 2;
      end else w_bin[1] = 0;

      if (weight > 0) w_bin[0] = 1;
      else w_bin[0] = 0;
    end
  endfunction

  // Instantiate the normalizer (Device Under Test)
  normalizer #(
      .BW (BW),
      .OBW(OBW),
      .MCP(MCP)
  ) dut (
      .clk(clk),
      .in(in),
      .out(out),
      .wr(wr),
      .rd(rd),
      .o_full(full),
      .reset(reset),
      .o_ready(ready)
  );

  initial begin

    w_file = $fopen("b_data.txt", "r");

    $dumpfile("normalizer_tb.vcd");
    $dumpvars(0, normalizer_tb);

    // Reset
    #1 clk = 1'b0;
    reset = 1;
    #1 clk = 1'b1;
    reset = 0;
    #1 clk = 1'b0;

    // ============================================================
    // 1st Computation (1st batch of 64 values)
    // ============================================================
    $display("-------------------- 1st Computation start --------------------");

    // Write phase: load 64 values into the FIFO
    expected_sum = 0;
    wr = 1;
    for (i = 0; i < TOTAL_CYCLE; i = i + 1) begin
      w_scan_file   = $fscanf(w_file, "%d", captured_data);
      w[i]          = captured_data;
      in            = w_bin(w[i]);
      w_bin_vals[i] = in;  // Save the 4-bit value for verification
      expected_sum  = expected_sum + in;  // Accumulate sum of unsigned 4-bit values
      #1 clk = 1'b1;
      #1 clk = 1'b0;
    end

    wr = 0;
    #1 clk = 1'b1;
    #1 clk = 1'b0;

    $display("  Expected sum_q = %0d", expected_sum);

    // Read phase: read normalized values from normalizer
    rd = 1;
    error_count = 0;

    for (i = 0; i < TOTAL_CYCLE; i = i + 1) begin
      // For MCP>1, hold rd for MCP cycles per value
      for (j = 0; j < MCP; j = j + 1) begin
        #1 clk = 1'b1;
        #1 clk = 1'b0;
      end

      // After MCP cycles, out_q has captured the result for value[i]
      actual_out   = out;
      expected_out = (w_bin_vals[i] << OBW) / expected_sum;
      if (actual_out !== expected_out) begin
        $display("  [MISMATCH] i=%0d: in=%0d (signed=%0d), expected=%0d, actual=%0d", i,
                 w_bin_vals[i], w[i], expected_out, actual_out);
        error_count = error_count + 1;
      end else begin
        $display("  [OK] i=%0d: in=%0d (signed=%0d), normalized=%0d", i, w_bin_vals[i], w[i],
                 actual_out);
      end
    end

    rd = 0;

    if (error_count == 0) $display("  1st Computation: ALL PASSED");
    else $display("  1st Computation: %0d MISMATCHES", error_count);

    $display("-------------------- 1st Computation completed --------------------");

    // ============================================================
    // 2nd Computation (2nd batch of 64 values)
    // ============================================================
    $display("-------------------- 2nd Computation start --------------------");

    // Write phase
    expected_sum = 0;
    wr = 1;
    for (i = 0; i < TOTAL_CYCLE; i = i + 1) begin
      w_scan_file = $fscanf(w_file, "%d", captured_data);
      w[i] = captured_data;
      in = w_bin(w[i]);
      w_bin_vals[i] = in;
      expected_sum = expected_sum + in;
      #1 clk = 1'b1;
      #1 clk = 1'b0;
    end

    wr = 0;
    #1 clk = 1'b1;
    #1 clk = 1'b0;

    $display("  Expected sum_q = %0d", expected_sum);

    // Read phase
    rd = 1;
    error_count = 0;

    for (i = 0; i < TOTAL_CYCLE; i = i + 1) begin
      for (j = 0; j < MCP; j = j + 1) begin
        #1 clk = 1'b1;
        #1 clk = 1'b0;
      end

      actual_out   = out;
      expected_out = (w_bin_vals[i] << OBW) / expected_sum;
      if (actual_out !== expected_out) begin
        $display("  [MISMATCH] i=%0d: in=%0d (signed=%0d), expected=%0d, actual=%0d", i,
                 w_bin_vals[i], w[i], expected_out, actual_out);
        error_count = error_count + 1;
      end else begin
        $display("  [OK] i=%0d: in=%0d (signed=%0d), normalized=%0d", i, w_bin_vals[i], w[i],
                 actual_out);
      end
    end

    rd = 0;

    if (error_count == 0) $display("  2nd Computation: ALL PASSED");
    else $display("  2nd Computation: %0d MISMATCHES", error_count);

    $display("-------------------- 2nd Computation completed --------------------");

    $fclose(w_file);
    #10 $finish;

  end

endmodule
