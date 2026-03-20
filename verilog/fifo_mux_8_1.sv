module fifo_mux_8_1 #(
    parameter int BW   = 4,
    parameter int SIMD = 8
) (
    input  logic [        2:0] sel,
    input  logic [SIMD*BW-1:0] in [8],
    output logic [SIMD*BW-1:0] out
);

  always_comb out = in[sel];

endmodule
