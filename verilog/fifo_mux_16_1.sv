module fifo_mux_16_1 #(
    parameter int BW   = 4,
    parameter int SIMD = 8
) (
    input  logic [        3:0] sel,
    input  logic [SIMD*BW-1:0] in [16],
    output logic [SIMD*BW-1:0] out
);

  always_comb out = in[sel];

endmodule
