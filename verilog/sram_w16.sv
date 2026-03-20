module sram_w16 #(
    parameter int SRAM_BIT = 128
) (
    input  logic                CLK,
    input  logic                WEN,
    input  logic                CEN,
    input  logic [SRAM_BIT-1:0] D,
    input  logic [         3:0] A,
    output logic [SRAM_BIT-1:0] Q
);

  logic [SRAM_BIT-1:0] memory[16];

  always_ff @(posedge CLK) begin
    if (!CEN && WEN)  // read
      Q <= memory[A];
    else if (!CEN && !WEN)  // write
      memory[A] <= D;
  end

endmodule
