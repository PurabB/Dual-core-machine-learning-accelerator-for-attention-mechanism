module sparsity_ctrl #(
    parameter int BW_PSUM = 20,
    parameter int COL     = 8
) (
    input  logic                   clk,
    input  logic                   reset,
    input  logic                   enable,
    input  logic [    BW_PSUM-1:0] threshold_elem,
    input  logic [COL*BW_PSUM-1:0] mac_out,
    output logic [        COL-1:0] gate_mask,
    output logic [COL*BW_PSUM-1:0] gated_out
);

  for (genvar i = 0; i < COL; i++) begin : sparsity_col

    logic signed [BW_PSUM-1:0] val;
    logic [BW_PSUM-1:0] abs_val;

    always_comb begin
      val = mac_out[BW_PSUM*(i+1)-1 : BW_PSUM*i];
      abs_val = val[BW_PSUM-1] ? (~val + 1) : val;
      gate_mask[i] = enable && (abs_val < threshold_elem);
      gated_out[BW_PSUM*(i+1)-1 : BW_PSUM*i] =
          gate_mask[i] ? {BW_PSUM{1'b0}} : mac_out[BW_PSUM*(i+1)-1 : BW_PSUM*i];
    end

  end

endmodule
