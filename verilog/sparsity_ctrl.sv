// Step 6 B1: Element-level sparsity controller (pipelined)
// Inserted between mac_array and ofifo.
// If |mac_out[i]| < threshold, gate the element to zero and suppress fifo_wr.
// 1-cycle pipeline stage to meet timing at 1GHz.
module sparsity_ctrl #(
    parameter int BW_PSUM = 20,
    parameter int COL     = 8
) (
    input  logic                   clk,
    input  logic                   rst_n,
    input  logic                   enable,
    input  logic [    BW_PSUM-1:0] threshold_elem,
    input  logic [COL*BW_PSUM-1:0] mac_out,
    input  logic [        COL-1:0] fifo_wr_in,
    output logic [        COL-1:0] gate_mask,
    output logic [COL*BW_PSUM-1:0] gated_out,
    output logic [        COL-1:0] fifo_wr_out
);

  logic [        COL-1:0] mask_comb;
  logic [COL*BW_PSUM-1:0] data_comb;

  for (genvar i = 0; i < COL; i++) begin : g_elem
    logic signed [BW_PSUM-1:0] val;
    logic        [BW_PSUM-1:0] abs_val;

    always_comb begin
      val     = mac_out[BW_PSUM*(i+1)-1 -: BW_PSUM];
      abs_val = val[BW_PSUM-1] ? BW_PSUM'(~val + 1) : val;

      mask_comb[i] = enable & (abs_val < threshold_elem);

      data_comb[BW_PSUM*(i+1)-1 -: BW_PSUM] =
          mask_comb[i] ? {BW_PSUM{1'b0}}
                       : mac_out[BW_PSUM*(i+1)-1 -: BW_PSUM];
    end
  end

  // Pipeline register
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      gate_mask   <= '0;
      gated_out   <= '0;
      fifo_wr_out <= '0;
    end else begin
      gate_mask   <= mask_comb;
      gated_out   <= data_comb;
      // Gate data to zero but keep fifo_wr intact (gating = save power,
      // not skipping cycles). FIFO depth stays symmetric.
      fifo_wr_out <= fifo_wr_in;
    end
  end

endmodule
