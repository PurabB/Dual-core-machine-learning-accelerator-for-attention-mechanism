`timescale 1ns / 1ps

// Testbench to verify refactored modules (packed -> unpacked array conversion)
module refactor_tb;

  parameter int BW = 8;
  parameter int BW_PSUM = 2 * BW + 4;
  parameter int PR = 16;
  parameter int SRAM_BIT = 128;

  integer pass_count, fail_count;
  integer i, j;

  //=========================================================
  // Clock generation
  //=========================================================
  logic clk = 0;
  always #0.5 clk = ~clk;

  //=========================================================
  // 1. Test sram_w16 (memory[16] array)
  //=========================================================
  logic sram_wen, sram_cen;
  logic [SRAM_BIT-1:0] sram_d, sram_q;
  logic [3:0] sram_a;

  sram_w16 #(
      .SRAM_BIT(SRAM_BIT)
  ) uut_sram (
      .CLK(clk),
      .WEN(sram_wen),
      .CEN(sram_cen),
      .D  (sram_d),
      .A  (sram_a),
      .Q  (sram_q)
  );

  //=========================================================
  // 2. Test sram_128b_w16 (memory[16] array, async read)
  //=========================================================
  logic sram128_wen, sram128_cen;
  logic [127:0] sram128_d, sram128_q;
  logic [3:0] sram128_a;

  sram_128b_w16 uut_sram128 (
      .CLK(clk),
      .WEN(sram128_wen),
      .CEN(sram128_cen),
      .D  (sram128_d),
      .A  (sram128_a),
      .Q  (sram128_q)
  );

  //=========================================================
  // 3. Test mac_16in (product[16] array)
  //=========================================================
  logic [PR*BW-1:0] mac_a, mac_b;
  logic [BW_PSUM-1:0] mac_out;

  mac_16in #(
      .BW(BW),
      .BW_PSUM(BW_PSUM),
      .PR(PR)
  ) uut_mac16 (
      .a  (mac_a),
      .b  (mac_b),
      .out(mac_out)
  );

  //=========================================================
  // 4. Test fifo_depth16 (q[16] array)
  //=========================================================
  logic fifo_rd, fifo_wr, fifo_reset;
  logic [BW-1:0] fifo_in, fifo_out;
  logic fifo_full, fifo_empty;

  fifo_depth16 #(
      .BW  (BW),
      .SIMD(1)
  ) uut_fifo (
      .rd_clk(clk),
      .wr_clk(clk),
      .rd(fifo_rd),
      .wr(fifo_wr),
      .reset(fifo_reset),
      .in(fifo_in),
      .out(fifo_out),
      .o_full(fifo_full),
      .o_empty(fifo_empty)
  );

  //=========================================================
  // Test sequence
  //=========================================================
  initial begin
    $dumpfile("refactor_tb.vcd");
    $dumpvars(0, refactor_tb);

    pass_count = 0;
    fail_count = 0;

    // Initialize
    sram_wen = 1;
    sram_cen = 1;
    sram_d = 0;
    sram_a = 0;
    sram128_wen = 1;
    sram128_cen = 1;
    sram128_d = 0;
    sram128_a = 0;
    mac_a = 0;
    mac_b = 0;
    fifo_rd = 0;
    fifo_wr = 0;
    fifo_reset = 1;
    fifo_in = 0;

    // Wait for reset
    repeat (3) @(posedge clk);

    //-------------------------------------------------------
    // Test 1: sram_w16 - write all 16 addresses, read back
    //-------------------------------------------------------
    $display("\n===== Test 1: sram_w16 =====");

    // Write phase
    for (i = 0; i < 16; i++) begin
      @(negedge clk);
      sram_cen = 0;
      sram_wen = 0;  // write
      sram_a   = i[3:0];
      sram_d   = (i + 1) * 128'hDEAD_0001;  // unique pattern per address
      @(posedge clk);
    end

    @(negedge clk);
    sram_cen = 1;
    sram_wen = 1;
    @(posedge clk);

    // Read phase
    for (i = 0; i < 16; i++) begin
      @(negedge clk);
      sram_cen = 0;
      sram_wen = 1;  // read
      sram_a   = i[3:0];
      @(posedge clk);
      // Q is registered, available next cycle
      @(negedge clk);
      sram_cen = 1;
      @(posedge clk);
      if (sram_q == (i + 1) * 128'hDEAD_0001) begin
        pass_count++;
      end else begin
        $display("FAIL: sram_w16 addr %0d: expected %h, got %h", i, (i + 1) * 128'hDEAD_0001,
                 sram_q);
        fail_count++;
      end
    end

    $display("sram_w16: done");

    //-------------------------------------------------------
    // Test 2: sram_128b_w16 - write all, read back (async read)
    //-------------------------------------------------------
    $display("\n===== Test 2: sram_128b_w16 =====");

    // Write phase
    for (i = 0; i < 16; i++) begin
      @(negedge clk);
      sram128_cen = 0;
      sram128_wen = 0;  // write
      sram128_a   = i[3:0];
      sram128_d   = (i + 100) * 128'h0001_CAFE;
      @(posedge clk);
    end

    @(negedge clk);
    sram128_cen = 1;
    sram128_wen = 1;
    @(posedge clk);

    // Read phase (address registered, Q is combinational from add_q)
    for (i = 0; i < 16; i++) begin
      @(negedge clk);
      sram128_cen = 0;
      sram128_wen = 1;  // read
      sram128_a   = i[3:0];
      @(posedge clk);
      // add_q captured, Q updates combinationally
      #0.1;
      if (sram128_q == (i + 100) * 128'h0001_CAFE) begin
        pass_count++;
      end else begin
        $display("FAIL: sram_128b_w16 addr %0d: expected %h, got %h", i,
                 (i + 100) * 128'h0001_CAFE, sram128_q);
        fail_count++;
      end
    end

    $display("sram_128b_w16: done");

    //-------------------------------------------------------
    // Test 3: mac_16in - known dot product
    //-------------------------------------------------------
    $display("\n===== Test 3: mac_16in =====");

    // Test: all a[i]=1, all b[i]=1 => each product = 1 => sum = 16
    for (i = 0; i < PR; i++) begin
      mac_a[BW*(i+1)-1-:BW] = 8'sd1;
      mac_b[BW*(i+1)-1-:BW] = 8'sd1;
    end
    #1;
    if (mac_out == BW_PSUM'(16)) begin
      $display("PASS: mac_16in all-ones dot product = %0d", mac_out);
      pass_count++;
    end else begin
      $display("FAIL: mac_16in all-ones: expected 16, got %0d", $signed(mac_out));
      fail_count++;
    end

    // Test: a[i]=i+1, b[i]=1 => sum = 1+2+...+16 = 136
    for (i = 0; i < PR; i++) begin
      mac_a[BW*(i+1)-1-:BW] = (i + 1);
      mac_b[BW*(i+1)-1-:BW] = 8'sd1;
    end
    #1;
    if ($signed(mac_out) == 136) begin
      $display("PASS: mac_16in sequential dot product = %0d", $signed(mac_out));
      pass_count++;
    end else begin
      $display("FAIL: mac_16in sequential: expected 136, got %0d", $signed(mac_out));
      fail_count++;
    end

    // Test: negative values a[0]=-1, b[0]=1, rest 0 => out = -1
    mac_a = 0;
    mac_b = 0;
    mac_a[BW-1:0] = 8'hFF;  // -1 in 8-bit signed
    mac_b[BW-1:0] = 8'h01;  // +1
    #1;
    if ($signed(mac_out) == -1) begin
      $display("PASS: mac_16in negative = %0d", $signed(mac_out));
      pass_count++;
    end else begin
      $display("FAIL: mac_16in negative: expected -1, got %0d", $signed(mac_out));
      fail_count++;
    end

    //-------------------------------------------------------
    // Test 4: fifo_depth16 - write N values, read back in order
    //-------------------------------------------------------
    $display("\n===== Test 4: fifo_depth16 =====");

    // Release reset
    fifo_reset = 1;
    repeat (2) @(posedge clk);
    @(negedge clk);
    fifo_reset = 0;
    @(posedge clk);

    // Verify empty after reset
    if (fifo_empty == 1) begin
      $display("PASS: FIFO empty after reset");
      pass_count++;
    end else begin
      $display("FAIL: FIFO not empty after reset");
      fail_count++;
    end

    // Write 8 values
    for (i = 0; i < 8; i++) begin
      @(negedge clk);
      fifo_wr = 1;
      fifo_in = (i * 17 + 3) & 8'hFF;  // arbitrary pattern
      @(posedge clk);
    end
    @(negedge clk);
    fifo_wr = 0;
    @(posedge clk);

    // Verify not empty
    if (fifo_empty == 0) begin
      $display("PASS: FIFO not empty after writes");
      pass_count++;
    end else begin
      $display("FAIL: FIFO empty after writes");
      fail_count++;
    end

    // Read back 8 values and check FIFO order
    for (i = 0; i < 8; i++) begin
      @(negedge clk);
      fifo_rd = 1;
      // fifo_out is combinational from current rd_ptr
      if (fifo_out == ((i * 17 + 3) & 8'hFF)) begin
        pass_count++;
      end else begin
        $display("FAIL: FIFO read %0d: expected %0d, got %0d", i, (i * 17 + 3) & 8'hFF, fifo_out);
        fail_count++;
      end
      @(posedge clk);
    end
    @(negedge clk);
    fifo_rd = 0;
    @(posedge clk);

    //-------------------------------------------------------
    // Summary
    //-------------------------------------------------------
    $display("\n========================================");
    $display("  PASS: %0d  FAIL: %0d", pass_count, fail_count);
    if (fail_count == 0) $display("  ALL TESTS PASSED");
    else $display("  SOME TESTS FAILED");
    $display("========================================\n");

    $finish;
  end

endmodule
