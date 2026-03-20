module mac_64in #(
    parameter int BW      = 8,
    parameter int BW_PSUM = 2 * BW + 6,
    parameter int PR      = 64
) (
    input  logic signed [  PR*BW-1:0] a,
    input  logic signed [  PR*BW-1:0] b,
    output logic signed [BW_PSUM-1:0] out
);

  logic signed [    2*BW-1:0] product  [64];
  logic signed [(2*BW+4)-1:0] psum_tree[ 4];

  always_comb begin
    for (int i = 0; i < 64; i++) begin
      product[i] = {{(BW){a[BW*(i+1)-1]}}, a[BW*(i+1)-1 -: BW]} 
                  * {{(BW){b[BW*(i+1)-1]}}, b[BW*(i+1)-1 -: BW]};
    end

    for (int j = 0; j < 4; j++) begin
      psum_tree[j] = '0;
      for (int i = 0; i < 16; i++)
      psum_tree[j] = psum_tree[j] + {{(4) {product[j*16+i][2*BW-1]}}, product[j*16+i]};
    end

    out = {{(2){psum_tree[0][2*BW+3]}}, psum_tree[0]}
        + {{(2){psum_tree[1][2*BW+3]}}, psum_tree[1]}
        + {{(2){psum_tree[2][2*BW+3]}}, psum_tree[2]}
        + {{(2){psum_tree[3][2*BW+3]}}, psum_tree[3]};
  end

endmodule
