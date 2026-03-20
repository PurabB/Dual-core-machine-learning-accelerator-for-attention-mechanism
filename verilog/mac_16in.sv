module mac_16in #(
    parameter int BW      = 8,
    parameter int BW_PSUM = 2 * BW + 6,
    parameter int PR      = 64
) (
    input  logic [  PR*BW-1:0] a,
    input  logic [  PR*BW-1:0] b,
    output logic [BW_PSUM-1:0] out
);

  logic [2*BW-1:0] product[16];

  always_comb begin
    for (int i = 0; i < 16; i++) begin
      product[i] = {{(BW){a[BW*(i+1)-1]}}, a[BW*(i+1)-1 -: BW]}
                  * {{(BW){b[BW*(i+1)-1]}}, b[BW*(i+1)-1 -: BW]};
    end

    out = '0;
    for (int i = 0; i < 16; i++) out = out + {{(4) {product[i][2*BW-1]}}, product[i]};
  end

endmodule
