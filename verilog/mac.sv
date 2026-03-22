module mac #(
    parameter int BW      = 8,
    parameter int PR      = 8,
    parameter int BW_PSUM = 2 * BW + $clog2(PR)
) (
    input clk,
    input rst_n,

    input  logic signed [  PR*BW-1:0] a,
    input  logic signed [  PR*BW-1:0] b,
    output logic signed [BW_PSUM-1:0] out
);

  localparam int StageNum = $clog2(PR);
  localparam int HalfBW   = BW / 2;

  // === 2-stage pipelined multiplier ===
  // Stage 1: two half-width multiplies per element
  //   partial_lo = a_lo(unsigned) * b(signed)
  //   partial_hi = a_hi(signed)  * b(signed)
  logic signed [BW+HalfBW-1:0] partial_lo [PR];
  logic signed [BW+HalfBW-1:0] partial_hi [PR];

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      for (int i = 0; i < PR; i++) begin
        partial_lo[i] <= '0;
        partial_hi[i] <= '0;
      end
    end else begin
      for (int i = 0; i < PR; i++) begin
        partial_lo[i] <=
            $signed({1'b0, a[BW*i +: HalfBW]})
          * $signed(b[BW*(i+1)-1 -: BW]);
        partial_hi[i] <=
            $signed(a[BW*i+HalfBW +: HalfBW])
          * $signed(b[BW*(i+1)-1 -: BW]);
      end
    end
  end

  // Stage 2: combine partials into full product, register
  logic signed [2*BW-1:0] products [PR];

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      for (int i = 0; i < PR; i++)
        products[i] <= '0;
    end else begin
      for (int i = 0; i < PR; i++)
        products[i] <=
            $signed(partial_lo[i])
          + ($signed(partial_hi[i]) <<< HalfBW);
    end
  end

  // === Pipelined adder tree (unchanged) ===
  logic signed [BW_PSUM-1:0] stage_data [StageNum+1][PR];

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      for (int i = 0; i <= StageNum; i++)
        for (int j = 0; j < PR; j++)
          stage_data[i][j] <= '0;
    end else begin
      // Sign-extend products into adder tree
      for (int i = 0; i < PR; i++)
        stage_data[0][i] <= BW_PSUM'(products[i]);

      for (int s = 1; s <= StageNum; s++)
        for (int i = 0; i < (PR >> s); i++)
          stage_data[s][i] <=
              stage_data[s-1][2*i] + stage_data[s-1][2*i+1];
    end
  end

  assign out = stage_data[StageNum][0];

endmodule
