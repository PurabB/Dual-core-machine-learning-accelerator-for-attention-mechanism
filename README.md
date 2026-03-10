# Step 1: Single Core RTL & Functional Verification

In this step, the matrix multiplier was modified to process $8 \times 8$ dot products ($Q \times K$) where each vector has 8 elements.

### Key Modifications:
- **MAC Core**: Created `mac_8in.v` to implement an 8-input signed MAC unit (replacing the 16-input template). Output precision is set to 20 bits (`2*bw + 4`).
- **Systolic Array Integration**: 
    - Updated `mac_col.v`, `mac_array.v`, `core.v`, and `fullchip.v` to standardize on `pr = 8`.
    - **Systolic Loading Fix**: Corrected the key loading logic in `mac_col.v`. The load condition was changed to `cnt_q == col_id` to account for SRAM latency and ensure each column "grabs" its respective key vector ($K_0 \dots K_7$) at the correct cycle.
- **Top-Level Connectivity**: Connected the Partial Sum Memory (`pmem`) output to the `fullchip` top-level ports to enable verification and satisfy Step 1 requirements.
- **Verification Environment**:
    - Enhanced `fullchip_tb.v` to read `pmem` contents and automatically compare them against expected results calculated from `qdata.txt` and `kdata.txt`.
    - Fixed Verilog compilation issues (e.g., non-constant part-selects) to support variable indexing during verification.

### Results:
- **Functional Correctness**: Achieved 100% success rate in behavioral simulation. All $8 \times 8$ product results in `pmem` match the estimated results.

# Step 2

# Step 3

# Step 4

