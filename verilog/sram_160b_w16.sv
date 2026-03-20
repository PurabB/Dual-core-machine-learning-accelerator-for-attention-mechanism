module sram_160b_w16 (
    input  logic         CLK,
    input  logic         WEN,
    input  logic         CEN,
    input  logic [159:0] D,
    input  logic [  3:0] A,
    output logic [159:0] Q
);

  logic [159:0] memory[16];
  logic [  3:0] add_q;

  always_comb Q = memory[add_q];

  always_ff @(posedge CLK) begin
    if (!CEN && WEN)  // read
      add_q <= A;
    if (!CEN && !WEN)  // write
      memory[A] <= D;
  end

endmodule
