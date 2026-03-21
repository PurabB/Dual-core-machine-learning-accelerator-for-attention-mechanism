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

  // Stage 0: register inputs for retiming (lets DC push logic across)
  logic signed [BW-1:0] a_reg [PR];
  logic signed [BW-1:0] b_reg [PR];

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      for (int i = 0; i < PR; i++) begin
        a_reg[i] <= '0;
        b_reg[i] <= '0;
      end
    end else begin
      for (int i = 0; i < PR; i++) begin
        a_reg[i] <= $signed(a[BW*(i+1)-1-:BW]);
        b_reg[i] <= $signed(b[BW*(i+1)-1-:BW]);
      end
    end
  end

  // Stage 1: multiply from registered inputs
  // Stage 2+: pipelined adder tree
  logic signed [BW_PSUM-1:0] stage_data[StageNum+1][PR];

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      for (int i = 0; i <= StageNum; i++)
        for (int j = 0; j < PR; j++)
          stage_data[i][j] <= '0;
    end else begin
      for (int i = 0; i < PR; i++)
        stage_data[0][i] <= a_reg[i] * b_reg[i];

      for (int s = 1; s <= StageNum; s++)
        for (int i = 0; i < (PR >> s); i++)
          stage_data[s][i] <=
              stage_data[s-1][2*i] + stage_data[s-1][2*i+1];
    end
  end

  assign out = stage_data[StageNum][0];

endmodule
