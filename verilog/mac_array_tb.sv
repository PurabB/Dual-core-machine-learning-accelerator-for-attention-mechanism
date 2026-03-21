module mac_array_tb;

  parameter int COL     = 8;
  parameter int BW      = 8;
  parameter int BW_PSUM = 2 * BW + 6;
  parameter int PR      = 8;

  logic                   clk;
  logic                   rst_n;
  logic                   en;
  logic                   wr_k;
  logic [      PR*BW-1:0] in;
  logic [BW_PSUM*COL-1:0] out;
  logic [        COL-1:0] fifo_wr;

  mac_array #(
      .COL(COL),
      .BW(BW),
      .BW_PSUM(BW_PSUM),
      .PR(PR)
  ) dut (
      .clk(clk),
      .rst_n(rst_n),
      .en(en),
      .wr_k(wr_k),
      .in(in),
      .out(out),
      .fifo_wr(fifo_wr)
  );

  always #5 clk = ~clk;

  // Build a flat vector where every byte-lane = val
  task automatic make_uniform_vec(
      input  logic signed [BW-1:0]      val,
      output logic        [PR*BW-1:0]   vec
  );
    integer i;
    for (i = 0; i < PR; i++)
      vec[BW*i +: BW] = val;
  endtask

  // Extract psum output for column c
  function automatic logic signed [BW_PSUM-1:0] get_out(input int c);
    get_out = out[BW_PSUM*c +: BW_PSUM];
  endfunction

  logic [PR*BW-1:0] key_vec  [0:COL-1];
  logic [PR*BW-1:0] query_vec;

  int expected;
  int pass_cnt;
  int fail_cnt;
  integer c, cyc;

  // Capture last non-zero output seen while fifo_wr was high
  logic signed [BW_PSUM-1:0] captured [0:COL-1];
  logic                      col_seen [0:COL-1];

  initial begin
    $dumpfile("mac_array_tb.vcd");
    $dumpvars(0, mac_array_tb);

    clk = 0; rst_n = 0; en = 0; wr_k = 0; in = 0;
    pass_cnt = 0; fail_cnt = 0;
    for (c = 0; c < COL; c++) begin
      captured[c] = 0;
      col_seen[c] = 0;
    end

    // ------- Reset -------
    repeat (3) @(posedge clk);
    rst_n = 1;
    @(posedge clk);

    // ------- Prepare test data -------
    // Key for column c: every element = (c + 1)
    // Query: every element = 1
    // Expected dot(query, key[c]) = PR * (c+1)
    for (c = 0; c < COL; c++)
      make_uniform_vec(c + 1, key_vec[c]);
    make_uniform_vec(1, query_vec);

    // ------- Phase 1: Load keys (en=1, wr_k=1) -------
    $display("\n===== Phase 1: Loading Keys =====");

    for (cyc = 0; cyc < 10; cyc++) begin
      @(negedge clk);
      en   = 1;
      wr_k = 1;
      if (cyc >= 2 && cyc <= 9) begin
        in = key_vec[9 - cyc];
        $display("  Cycle %0d: feeding key[%0d] (val=%0d)",
                 cyc, 9 - cyc, 9 - cyc + 1);
      end else begin
        in = {(PR*BW){1'b0}};
        $display("  Cycle %0d: feeding zeros", cyc);
      end
    end

    // Deassert
    @(negedge clk);
    en = 0; wr_k = 0; in = 0;
    repeat (5) @(posedge clk);

    // ------- Phase 2: Compute (en=1, wr_k=0) -------
    $display("\n===== Phase 2: Computing Q * K =====");
    $display("  Query: all elements = 1");
    $display("  Expected: col[c] = PR*(c+1) = 8*(c+1)");

    @(negedge clk);
    en   = 1;
    wr_k = 0;
    in   = query_vec;

    // Hold long enough for all columns to receive via chain
    repeat (COL + 1) @(negedge clk);
    en = 0; in = 0;

    // Wait for MAC pipeline to flush
    repeat (15) @(posedge clk);

    // ------- Check captured results -------
    $display("\n===== Results (captured at fifo_wr) =====");
    for (c = 0; c < COL; c++) begin
      expected = PR * (c + 1);
      if (col_seen[c] && captured[c] == expected[BW_PSUM-1:0]) begin
        $display("  Column %0d: out = %0d  PASS", c, captured[c]);
        pass_cnt = pass_cnt + 1;
      end else begin
        $display("  Column %0d: out = %0d (expected %0d, seen=%0b)  FAIL",
                 c, captured[c], expected, col_seen[c]);
        fail_cnt = fail_cnt + 1;
      end
    end

    $display("\n===== Summary =====");
    $display("  PASS: %0d / %0d", pass_cnt, pass_cnt + fail_cnt);
    if (fail_cnt > 0)
      $display("  FAIL: %0d — check waveform for details", fail_cnt);
    else
      $display("  All tests passed!");

    repeat (5) @(posedge clk);
    $finish;
  end

  // Capture outputs when fifo_wr asserts
  always @(posedge clk) begin
    for (integer i = 0; i < COL; i = i + 1) begin
      if (fifo_wr[i]) begin
        $display("  T=%0t: fifo_wr[%0d] high, out[%0d] = %0d",
                 $time, i, i, get_out(i));
        if (get_out(i) != 0) begin
          captured[i] = get_out(i);
          col_seen[i] = 1;
        end
      end
    end
  end

endmodule
