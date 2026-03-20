module fifo_mux_2_1 #(
    parameter int BW   = 8,
    parameter int SIMD = 4
) (
    input  logic [SIMD*BW-1:0] in [2],
    input  logic               sel,
    output logic [SIMD*BW-1:0] out
);

  always_comb out = sel ? in[1] : in[0];

endmodule
