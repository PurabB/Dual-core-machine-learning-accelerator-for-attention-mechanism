module normalization (
    input clk,
    input reset,
    input [col*bw_psum-1:0] in,
    input norm_start,
    output reg [col*bw_psum-1:0] out,
    output reg norm_done
);

    parameter col = 8;
    parameter bw_psum = 20;

    reg [bw_psum-1:0] abs_val [0:col-1];
    reg [bw_psum+3:0] sum;
    integer i;

    reg [2:0] state;
    
    always @(posedge clk or posedge reset) begin
        if (reset) begin
            state <= 0;
            norm_done <= 0;
            sum <= 0;
            for (i=0; i<col; i=i+1) abs_val[i] <= 0;
            out <= 0;
        end else begin
            if (norm_start) begin
                // Cycle 1: Compute absolute values
                for (i=0; i<col; i=i+1) begin
                    if (in[bw_psum*i + bw_psum-1]) // signed check 
                        abs_val[i] <= -in[bw_psum*i +: bw_psum];
                    else
                        abs_val[i] <= in[bw_psum*i +: bw_psum];
                end
                state <= 1;
                norm_done <= 0;
            end else if (state == 1) begin
                // Cycle 2: Sum the absolute values
                sum <= abs_val[0] + abs_val[1] + abs_val[2] + abs_val[3] + 
                       abs_val[4] + abs_val[5] + abs_val[6] + abs_val[7];
                state <= 2;
            end else if (state == 2) begin
                // Cycle 3: Divide (scaled by 2^8 for fractional precision)
                for (i=0; i<col; i=i+1) begin
                    if (sum != 0) 
                        out[bw_psum*i +: bw_psum] <= (abs_val[i] << 8) / sum;
                    else
                        out[bw_psum*i +: bw_psum] <= 0;
                end
                state <= 0;
                norm_done <= 1;
            end else begin
                norm_done <= 0;
            end
        end
    end

endmodule
