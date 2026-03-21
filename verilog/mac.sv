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

  // Stage 0: pipelined multiplier — register products
  logic signed [2*BW-1:0] products [PR];

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      for (int i = 0; i < PR; i++)
        products[i] <= '0;
    end else begin
      for (int i = 0; i < PR; i++)
        products[i] <= $signed(a[BW*(i+1)-1-:BW])
                     * $signed(b[BW*(i+1)-1-:BW]);
    end
  end

  // Combinational adder tree (no pipeline registers)
  logic signed [BW_PSUM-1:0] tree [StageNum+1][PR];

  always_comb begin
    // Extend products to full width
    for (int i = 0; i < PR; i++)
      tree[0][i] = BW_PSUM'(products[i]);

    // Adder tree stages — all combinational
    for (int s = 1; s <= StageNum; s++)
      for (int i = 0; i < (PR >> s); i++)
        tree[s][i] = tree[s-1][2*i] + tree[s-1][2*i+1];
  end

  assign out = tree[StageNum][0];

endmodule
