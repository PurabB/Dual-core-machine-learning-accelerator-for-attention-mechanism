module fullchip #(
    parameter int COL     = 8,
    parameter int BW      = 8,
    parameter int BW_PSUM = 2 * BW + 4,
    parameter int PR      = 16
) (
    input  logic                   clk0,
    input  logic                   clk1,
    input  logic                   reset,
    input  logic [           16:0] inst0,
    input  logic [           16:0] inst1,
    input  logic [      PR*BW-1:0] mem_in0,
    input  logic [      PR*BW-1:0] mem_in1,
    output logic [BW_PSUM*COL-1:0] out0,
    output logic [BW_PSUM*COL-1:0] out1
);

  localparam int SumBW = BW_PSUM + $clog2(COL);

  // Sum exchange between cores
  logic [SumBW-1:0] sum_out0;
  logic [SumBW-1:0] sum_out1;

  // Synchronized sums (cross-clock domain)
  logic [SumBW-1:0] sum0_to_core1_sync;
  logic [SumBW-1:0] sum1_to_core0_sync;

  // Division ready signals from each core
  logic div_ready0, div_ready1;

  // Toggle-based CDC for div_ready pulses across clock domains
  logic div_ready0_toggle;
  always_ff @(posedge clk0) begin
    if (reset) div_ready0_toggle <= 0;
    else if (div_ready0) div_ready0_toggle <= ~div_ready0_toggle;
  end

  logic div_ready1_toggle;
  always_ff @(posedge clk1) begin
    if (reset) div_ready1_toggle <= 0;
    else if (div_ready1) div_ready1_toggle <= ~div_ready1_toggle;
  end

  // Sync toggles across clock domains
  logic div_ready0_toggle_sync;
  logic div_ready1_toggle_sync;

  sync sync_dr0_toggle (
      .clk(clk1),
      .in (div_ready0_toggle),
      .out(div_ready0_toggle_sync)
  );
  sync sync_dr1_toggle (
      .clk(clk0),
      .in (div_ready1_toggle),
      .out(div_ready1_toggle_sync)
  );

  // Edge detection in destination domain
  logic div_ready0_toggle_sync_d;
  always_ff @(posedge clk1) begin
    if (reset) div_ready0_toggle_sync_d <= 0;
    else div_ready0_toggle_sync_d <= div_ready0_toggle_sync;
  end

  logic div_ready1_toggle_sync_d;
  always_ff @(posedge clk0) begin
    if (reset) div_ready1_toggle_sync_d <= 0;
    else div_ready1_toggle_sync_d <= div_ready1_toggle_sync;
  end

  // External FIFO read: pulse when other core captures div result
  logic fifo_ext_rd0;
  logic fifo_ext_rd1;

  always_comb begin
    fifo_ext_rd0 = div_ready1_toggle_sync ^ div_ready1_toggle_sync_d;
    fifo_ext_rd1 = div_ready0_toggle_sync ^ div_ready0_toggle_sync_d;
  end

  //--- Core 0 (clk0 domain) ---
  core #(
      .BW(BW),
      .BW_PSUM(BW_PSUM),
      .COL(COL),
      .PR(PR)
  ) core0 (
      .clk(clk0),
      .reset(reset),
      .inst(inst0),
      .mem_in(mem_in0),
      .sum_in(sum1_to_core0_sync),
      .fifo_ext_rd(fifo_ext_rd1),
      .sum_out(sum_out0),
      .out(out0),
      .div_ready(div_ready0)
  );

  //--- Core 1 (clk1 domain) ---
  core #(
      .BW(BW),
      .BW_PSUM(BW_PSUM),
      .COL(COL),
      .PR(PR)
  ) core1 (
      .clk(clk1),
      .reset(reset),
      .inst(inst1),
      .mem_in(mem_in1),
      .sum_in(sum0_to_core1_sync),
      .fifo_ext_rd(fifo_ext_rd0),
      .sum_out(sum_out1),
      .out(out1),
      .div_ready(div_ready1)
  );

  //--- Cross-clock domain synchronizers for sum exchange ---
  for (genvar i = 0; i < SumBW; i++) begin : sync_0to1
    sync sync_inst (
        .clk(clk1),
        .in (sum_out0[i]),
        .out(sum0_to_core1_sync[i])
    );
  end

  for (genvar i = 0; i < SumBW; i++) begin : sync_1to0
    sync sync_inst (
        .clk(clk0),
        .in (sum_out1[i]),
        .out(sum1_to_core0_sync[i])
    );
  end

endmodule
