// Softmax-like row normalizer: pipelined adder tree + parallel dividers
// Dataflow: pmem_out -> sfp_row -> normalized writeback to pmem
//
// Phase 1 (PIPE):  Registered adder tree — one level per cycle (TreeDepth cycles)
//                  Each stage has only ONE adder depth -> meets 1 GHz in TSMC 65nm
// Phase 2 (DIV):   COL parallel restoring dividers run simultaneously (OBW cycles)
//
// Total latency: 1 (abs latch) + TreeDepth + 1 (pipeline + sum latch) + OBW (div)
//              = TreeDepth + OBW + 2 cycles
module sfp_row #(
    parameter int COL     = 8,
    parameter int BW_PSUM = 20,
    parameter int OBW     = 10
) (
    input  logic                   clk,
    input  logic                   rst_n,
    input  logic                   start,
    input  logic [BW_PSUM+$clog2(COL)-1:0] sum_in,
    output logic [BW_PSUM+$clog2(COL)-1:0] sum_out,
    input  logic [BW_PSUM*COL-1:0] row_in,
    output logic [  OBW*COL-1:0]   row_out,
    output logic                   done
);

  localparam int TreeDepth  = $clog2(COL);
  localparam int SumBW      = BW_PSUM + TreeDepth;
  localparam int DivCntBits = $clog2(OBW);
  localparam int PipeBits   = $clog2(TreeDepth + 1);
  localparam int HalfCol    = COL / 2;

  // ── Combinational: extract signed input values ──

  logic signed [BW_PSUM-1:0] inp_val [COL];

  for (genvar i = 0; i < COL; i++) begin : g_inp
    assign inp_val[i] = $signed(row_in[BW_PSUM*(i+1)-1 -: BW_PSUM]);
  end

  // ── State machine ──

  typedef enum logic [1:0] {IDLE, PIPE, DIV} state_t;
  state_t state;

  // Registered abs values (captured in IDLE, held during PIPE+DIV)
  // Per FAQ #11: both numerator and denominator are absolute, output is unsigned
  logic [SumBW-1:0] abs_r [COL];

  // Pipelined adder tree registers (one level computed per PIPE cycle)
  /* verilator lint_off UNOPTFLAT */
  logic [SumBW-1:0] tree_r [TreeDepth][COL];
  /* verilator lint_on UNOPTFLAT */

  // Division registers
  logic [  SumBW:0] rem     [COL];
  logic [  OBW-1:0] quot    [COL];
  logic [SumBW-1:0] div_reg;

  // Counters
  logic [PipeBits-1:0]   pipe_cnt;
  logic [DivCntBits-1:0] div_step;

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      state    <= IDLE;
      done     <= 0;
      pipe_cnt <= '0;
      div_step <= '0;
      div_reg  <= '0;
      for (int i = 0; i < COL; i++) begin
        abs_r[i] <= '0;
        rem[i]   <= '0;
        quot[i]  <= '0;
        for (int s = 0; s < TreeDepth; s++)
          tree_r[s][i] <= '0;
      end
    end else begin
      done <= 0;

      case (state)
        // ── IDLE: latch absolute values and signs on start ──
        IDLE: begin
          if (start) begin
            for (int i = 0; i < COL; i++) begin
              abs_r[i] <= inp_val[i][BW_PSUM-1] ?
                  {{TreeDepth{1'b0}}, BW_PSUM'(-inp_val[i])} :
                  {{TreeDepth{1'b0}}, BW_PSUM'( inp_val[i])};
            end
            pipe_cnt <= '0;
            state    <= PIPE;
          end
        end

        // ── PIPE: one adder-tree level per cycle (1 adder depth per stage) ──
        PIPE: begin
          if (pipe_cnt < PipeBits'(TreeDepth)) begin
            for (int i = 0; i < HalfCol; i++) begin
              if (pipe_cnt == 0)
                tree_r[0][i] <= abs_r[2*i] + abs_r[2*i+1];
              else
                tree_r[pipe_cnt][i] <=
                    tree_r[pipe_cnt-1][2*i] + tree_r[pipe_cnt-1][2*i+1];
            end
            pipe_cnt <= pipe_cnt + 1;
          end else begin
            // Pipeline done: tree_r[TreeDepth-1][0] = local row_sum
            // Use combined sum (local + remote) as denominator
            if ((tree_r[TreeDepth-1][0] + sum_in) == '0) begin
              // Edge case: all-zero row
              for (int i = 0; i < COL; i++)
                quot[i] <= '0;
              done  <= 1;
              state <= IDLE;
            end else begin
              div_reg  <= tree_r[TreeDepth-1][0] + sum_in;
              div_step <= '0;
              for (int i = 0; i < COL; i++) begin
                rem[i]  <= {1'b0, abs_r[i]};
                quot[i] <= '0;
              end
              state <= DIV;
            end
          end
        end

        // ── DIV: parallel restoring division (all COL dividers simultaneous) ──
        DIV: begin
          for (int i = 0; i < COL; i++) begin
            if ((rem[i] << 1) >= {1'b0, div_reg}) begin
              quot[i] <= {quot[i][OBW-2:0], 1'b1};
              rem[i]  <= (rem[i] << 1) - {1'b0, div_reg};
            end else begin
              quot[i] <= {quot[i][OBW-2:0], 1'b0};
              rem[i]  <= rem[i] << 1;
            end
          end

          if (div_step == DivCntBits'(OBW - 1)) begin
            done  <= 1;
            state <= IDLE;
          end else begin
            div_step <= div_step + 1;
          end
        end

        default: state <= IDLE;
      endcase
    end
  end

  // ── Local sum output for dual-core exchange ──
  assign sum_out = tree_r[TreeDepth-1][0];

  // ── Output: unsigned (abs/sum is always non-negative per FAQ #11) ──

  for (genvar i = 0; i < COL; i++) begin : g_out
    assign row_out[OBW*(i+1)-1 -: OBW] = quot[i];
  end

endmodule
