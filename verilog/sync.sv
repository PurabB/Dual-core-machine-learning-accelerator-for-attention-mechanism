// Created by prof. Mingu Kang @VVIP Lab in UCSD ECE department
// Please do not spread this code without permission

// ============================================================================
// 1. Two-Stage FF Synchronizer (2级触发器同步器)
// ============================================================================
// Purpose: Synchronize a single-bit asynchronous signal from one clock domain
//          to another. This is the most basic and widely used CDC (Clock Domain
//          Crossing) synchronizer.
//
// How it works:
//   - The input signal is sampled by two back-to-back flip-flops clocked by
//     the destination clock.
//   - The first FF may go metastable if the input changes near the clock edge,
//     but by the time the signal reaches the second FF, metastability has
//     (with very high probability) resolved.
//
// Limitations:
//   - Only for single-bit, level-type signals (not pulses).
//   - The input must be stable for at least one destination clock period.
//   - Adds 1~2 destination clock cycles of latency.
//
// MTBF (Mean Time Between Failures):
//   - With 2 stages, MTBF is typically thousands of years at GHz frequencies.
//   - For higher reliability, increase SYNC_STAGES to 3 or more.
// ============================================================================
module sync #(
    parameter SYNC_STAGES = 2  // Number of synchronizer stages (default: 2)
)(
    input  logic clk,   // Destination clock
    input  logic in,    // Asynchronous input (from source clock domain)
    output logic out    // Synchronized output (in destination clock domain)
);

    // Shift register chain of flip-flops
    // Each stage reduces the probability of metastability propagation
    logic [SYNC_STAGES-1:0] sync_reg;

    assign out = sync_reg[SYNC_STAGES-1];

    always_ff @(posedge clk) begin
        // Stage 0: sample the asynchronous input (may go metastable)
        sync_reg[0] <= in;
        // Stage 1..N-1: each stage resolves metastability from the previous
        for (int i = 1; i < SYNC_STAGES; i++) begin
            sync_reg[i] <= sync_reg[i-1];
        end
    end

endmodule


// ============================================================================
// 2. Synchronizer with Async Reset (带异步复位的同步器)
// ============================================================================
// Purpose: Same as the basic 2-stage synchronizer, but with an asynchronous
//          active-low reset to initialize the sync chain to a known state.
//
// When to use:
//   - When the system requires a deterministic initial state upon reset.
//   - The reset signal itself must be properly synchronized if it comes from
//     another clock domain (see Reset Synchronizer below).
// ============================================================================
module sync_with_reset #(
    parameter SYNC_STAGES = 2  // Number of synchronizer stages
)(
    input  logic clk,      // Destination clock
    input  logic rst_n,    // Active-low asynchronous reset
    input  logic in,       // Asynchronous input
    output logic out       // Synchronized output
);

    logic [SYNC_STAGES-1:0] sync_reg;

    assign out = sync_reg[SYNC_STAGES-1];

    // Asynchronous reset assertion, synchronous reset de-assertion
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            sync_reg <= '0;  // Clear all stages on reset
        end else begin
            sync_reg[0] <= in;
            for (int i = 1; i < SYNC_STAGES; i++) begin
                sync_reg[i] <= sync_reg[i-1];
            end
        end
    end

endmodule


// ============================================================================
// 3. Reset Synchronizer (复位同步器)
// ============================================================================
// Purpose: Safely synchronize an asynchronous reset signal into a clock domain.
//
// Key principle: "Asynchronous assertion, synchronous de-assertion"
//   - When rst_n goes LOW, all FFs in the chain are immediately cleared
//     (asynchronous assertion — reset takes effect instantly).
//   - When rst_n goes HIGH, the de-assertion ripples through the sync chain
//     on clock edges (synchronous de-assertion — prevents metastability).
//
// Why this matters:
//   - If reset is de-asserted asynchronously, it may violate recovery/removal
//     timing of downstream FFs, causing metastability.
//   - This module ensures the reset release is aligned to the clock edge.
//
// Usage: Feed the output (rst_out_n) to all synchronous logic in this domain.
// ============================================================================
module reset_sync #(
    parameter SYNC_STAGES = 2
)(
    input  logic clk,        // Destination clock
    input  logic rst_n,      // Asynchronous reset input (active-low)
    output logic rst_out_n   // Synchronized reset output (active-low)
);

    logic [SYNC_STAGES-1:0] sync_reg;

    assign rst_out_n = sync_reg[SYNC_STAGES-1];

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            // Asynchronous assertion: immediately drive all stages to 0
            sync_reg <= '0;
        end else begin
            // Synchronous de-assertion: 1 ripples through the chain
            sync_reg[0] <= 1'b1;
            for (int i = 1; i < SYNC_STAGES; i++) begin
                sync_reg[i] <= sync_reg[i-1];
            end
        end
    end

endmodule


// ============================================================================
// 4. Pulse Synchronizer (脉冲同步器)
// ============================================================================
// Purpose: Transfer a single-cycle pulse from a source clock domain (clk_src)
//          to the destination clock domain (clk_dst), producing a single-cycle
//          pulse in the destination domain.
//
// How it works:
//   1. The source pulse toggles a T flip-flop (toggle register) in clk_src.
//   2. The toggled level signal is synchronized to clk_dst via a 2-stage FF.
//   3. An edge detector in clk_dst produces a single-cycle pulse on each
//      transition (XOR of current and previous synchronized value).
//
// Key advantage over a simple FF synchronizer:
//   - A narrow pulse (1 clk_src cycle) might be missed by FF synchronizer
//     if clk_dst is slower. The toggle approach converts the pulse into a
//     level change, which persists until the next pulse.
//
// Limitation:
//   - The source must NOT send a new pulse until the previous one has been
//     fully transferred. Minimum spacing: ~3 clk_dst cycles between pulses.
// ============================================================================
module pulse_sync (
    // Source clock domain
    input  logic clk_src,    // Source clock
    input  logic rst_src_n,  // Source reset (active-low)
    input  logic pulse_in,   // Single-cycle pulse input (in clk_src domain)

    // Destination clock domain
    input  logic clk_dst,    // Destination clock
    input  logic rst_dst_n,  // Destination reset (active-low)
    output logic pulse_out   // Single-cycle pulse output (in clk_dst domain)
);

    // ---- Source domain: Toggle register ----
    // Each incoming pulse flips this register (0->1->0->1...)
    logic toggle_src;

    always_ff @(posedge clk_src or negedge rst_src_n) begin
        if (!rst_src_n)
            toggle_src <= 1'b0;
        else if (pulse_in)
            toggle_src <= ~toggle_src;  // Toggle on each pulse
    end

    // ---- Cross-domain: Synchronize toggle signal to clk_dst ----
    logic sync_stage1, sync_stage2;

    always_ff @(posedge clk_dst or negedge rst_dst_n) begin
        if (!rst_dst_n) begin
            sync_stage1 <= 1'b0;
            sync_stage2 <= 1'b0;
        end else begin
            sync_stage1 <= toggle_src;   // May go metastable
            sync_stage2 <= sync_stage1;  // Resolved by here
        end
    end

    // ---- Destination domain: Edge detector ----
    // Detect the toggle transition and generate a single-cycle pulse
    logic sync_prev;

    always_ff @(posedge clk_dst or negedge rst_dst_n) begin
        if (!rst_dst_n)
            sync_prev <= 1'b0;
        else
            sync_prev <= sync_stage2;  // Remember previous value
    end

    // XOR: pulse_out is HIGH for exactly 1 clk_dst cycle on each toggle edge
    assign pulse_out = sync_stage2 ^ sync_prev;

endmodule


// ============================================================================
// 5. Toggle Synchronizer (翻转同步器)
// ============================================================================
// Purpose: Transfer a single event (e.g., "data ready") from one clock domain
//          to another using toggle signaling. Unlike pulse_sync, this outputs
//          a level change rather than a pulse.
//
// How it works:
//   1. Source toggles a signal each time an event occurs.
//   2. The toggled signal is synchronized to the destination clock domain.
//   3. Destination detects the level change as the event indication.
//
// Difference from Pulse Synchronizer:
//   - Pulse sync: outputs a 1-cycle pulse in destination domain
//   - Toggle sync: outputs a level that toggles per event (useful for counters
//     or "new data available" signaling where you compare current vs previous)
// ============================================================================
module toggle_sync (
    // Source clock domain
    input  logic clk_src,
    input  logic rst_src_n,
    input  logic event_in,     // Event trigger (single clk_src cycle)

    // Destination clock domain
    input  logic clk_dst,
    input  logic rst_dst_n,
    output logic toggle_out,   // Synchronized toggle level in clk_dst domain
    output logic event_out     // Reconstructed event pulse in clk_dst domain
);

    // ---- Source domain ----
    logic toggle_reg;

    always_ff @(posedge clk_src or negedge rst_src_n) begin
        if (!rst_src_n)
            toggle_reg <= 1'b0;
        else if (event_in)
            toggle_reg <= ~toggle_reg;
    end

    // ---- Synchronize to destination ----
    logic [1:0] sync_chain;

    always_ff @(posedge clk_dst or negedge rst_dst_n) begin
        if (!rst_dst_n)
            sync_chain <= 2'b00;
        else
            sync_chain <= {sync_chain[0], toggle_reg};
    end

    assign toggle_out = sync_chain[1];

    // ---- Edge detection for event reconstruction ----
    logic prev_toggle;

    always_ff @(posedge clk_dst or negedge rst_dst_n) begin
        if (!rst_dst_n)
            prev_toggle <= 1'b0;
        else
            prev_toggle <= sync_chain[1];
    end

    assign event_out = sync_chain[1] ^ prev_toggle;

endmodule


// ============================================================================
// 6. Handshake Synchronizer (握手同步器)
// ============================================================================
// Purpose: Safely transfer a multi-bit data bus between two clock domains
//          using a request-acknowledge (REQ/ACK) handshake protocol.
//
// How it works (4-phase handshake):
//   Phase 1: Source asserts REQ and holds data stable on data_in.
//   Phase 2: Destination sees synchronized REQ, captures data, asserts ACK.
//   Phase 3: Source sees synchronized ACK, de-asserts REQ.
//   Phase 4: Destination sees REQ de-asserted, de-asserts ACK. Cycle complete.
//
// Advantages:
//   - Safe for multi-bit data (no gray coding needed).
//   - Data is guaranteed stable when sampled (held by source during handshake).
//
// Disadvantages:
//   - Slow: requires multiple round-trip synchronizations per transfer.
//   - Throughput: ~1 transfer per 4*(sync_latency) clock cycles.
//
// Best for: Infrequent multi-bit transfers (configuration, status registers).
// ============================================================================
module handshake_sync #(
    parameter DATA_WIDTH = 8
)(
    // Source clock domain
    input  logic                  clk_src,
    input  logic                  rst_src_n,
    input  logic [DATA_WIDTH-1:0] data_in,    // Data to transfer
    input  logic                  valid_in,   // Source indicates new data
    output logic                  ready_out,  // Source can accept new data

    // Destination clock domain
    input  logic                  clk_dst,
    input  logic                  rst_dst_n,
    output logic [DATA_WIDTH-1:0] data_out,   // Received data
    output logic                  valid_out   // Data valid pulse in clk_dst
);

    // ---- Source domain ----
    logic req_src;                        // Request flag
    logic [DATA_WIDTH-1:0] data_hold;     // Data held stable during handshake
    logic ack_synced;                     // ACK synchronized back to clk_src
    logic ack_dst;  // Acknowledge flag (forward declaration for DC)

    // Synchronize ACK from destination back to source (2-stage)
    logic ack_sync1, ack_sync2;
    always_ff @(posedge clk_src or negedge rst_src_n) begin
        if (!rst_src_n) begin
            ack_sync1 <= 1'b0;
            ack_sync2 <= 1'b0;
        end else begin
            ack_sync1 <= ack_dst;
            ack_sync2 <= ack_sync1;
        end
    end
    assign ack_synced = ack_sync2;

    // Source FSM: idle -> wait_ack -> wait_ack_low -> idle
    typedef enum logic [1:0] {
        SRC_IDLE     = 2'b00,
        SRC_WAIT_ACK = 2'b01,
        SRC_WAIT_LOW = 2'b10
    } src_state_t;

    src_state_t src_state;

    always_ff @(posedge clk_src or negedge rst_src_n) begin
        if (!rst_src_n) begin
            src_state <= SRC_IDLE;
            req_src   <= 1'b0;
            data_hold <= '0;
        end else begin
            case (src_state)
                SRC_IDLE: begin
                    if (valid_in) begin
                        data_hold <= data_in;   // Latch data
                        req_src   <= 1'b1;      // Assert request
                        src_state <= SRC_WAIT_ACK;
                    end
                end
                SRC_WAIT_ACK: begin
                    if (ack_synced) begin
                        req_src   <= 1'b0;      // De-assert request
                        src_state <= SRC_WAIT_LOW;
                    end
                end
                SRC_WAIT_LOW: begin
                    if (!ack_synced) begin
                        src_state <= SRC_IDLE;   // Handshake complete
                    end
                end
                default: src_state <= SRC_IDLE;
            endcase
        end
    end

    assign ready_out = (src_state == SRC_IDLE);  // Ready for new data

    // ---- Destination domain ----
    // Synchronize REQ from source to destination (2-stage)
    logic req_sync1, req_sync2;
    always_ff @(posedge clk_dst or negedge rst_dst_n) begin
        if (!rst_dst_n) begin
            req_sync1 <= 1'b0;
            req_sync2 <= 1'b0;
        end else begin
            req_sync1 <= req_src;
            req_sync2 <= req_sync1;
        end
    end

    // Destination FSM: idle -> capture -> wait_req_low -> idle
    typedef enum logic [1:0] {
        DST_IDLE     = 2'b00,
        DST_CAPTURE  = 2'b01,
        DST_WAIT_LOW = 2'b10
    } dst_state_t;

    dst_state_t dst_state;

    always_ff @(posedge clk_dst or negedge rst_dst_n) begin
        if (!rst_dst_n) begin
            dst_state <= DST_IDLE;
            ack_dst   <= 1'b0;
            data_out  <= '0;
            valid_out <= 1'b0;
        end else begin
            valid_out <= 1'b0;  // Default: pulse for 1 cycle only
            case (dst_state)
                DST_IDLE: begin
                    if (req_sync2) begin
                        data_out  <= data_hold;  // Capture data (stable)
                        valid_out <= 1'b1;       // Signal valid data
                        ack_dst   <= 1'b1;       // Assert acknowledge
                        dst_state <= DST_WAIT_LOW;
                    end
                end
                DST_WAIT_LOW: begin
                    if (!req_sync2) begin
                        ack_dst   <= 1'b0;       // De-assert acknowledge
                        dst_state <= DST_IDLE;
                    end
                end
                default: dst_state <= DST_IDLE;
            endcase
        end
    end

endmodule


// ============================================================================
// 7. Bus Synchronizer — MUX-based (多比特总线同步器 — 基于MUX)
// ============================================================================
// Purpose: Synchronize a multi-bit bus from source to destination clock domain
//          using a MUX-based qualification scheme.
//
// How it works:
//   1. Source asserts a "valid" signal when data_in is stable.
//   2. The valid signal is synchronized to clk_dst via a 2-stage FF sync.
//   3. In clk_dst, the synchronized valid qualifies a MUX that either holds
//      the previous data or captures the new data.
//
// Key requirement:
//   - data_in MUST be stable for at least 2 clk_dst cycles around the time
//     valid is asserted. The source must hold data steady.
//
// Advantage over handshake: Simpler, lower latency, no back-channel needed.
// Disadvantage: Source must guarantee data stability (no protocol enforcement).
// ============================================================================
module bus_sync #(
    parameter DATA_WIDTH = 8
)(
    input  logic                  clk_src,
    input  logic                  rst_src_n,
    input  logic [DATA_WIDTH-1:0] data_in,
    input  logic                  valid_in,   // Source asserts when data stable

    input  logic                  clk_dst,
    input  logic                  rst_dst_n,
    output logic [DATA_WIDTH-1:0] data_out,
    output logic                  valid_out
);

    // Synchronize the valid signal to destination domain
    logic valid_sync1, valid_sync2, valid_sync3;

    always_ff @(posedge clk_dst or negedge rst_dst_n) begin
        if (!rst_dst_n) begin
            valid_sync1 <= 1'b0;
            valid_sync2 <= 1'b0;
            valid_sync3 <= 1'b0;
        end else begin
            valid_sync1 <= valid_in;
            valid_sync2 <= valid_sync1;
            valid_sync3 <= valid_sync2;  // Extra stage for edge detection
        end
    end

    // Rising edge of synchronized valid = capture moment
    wire capture = valid_sync2 & ~valid_sync3;

    // MUX-qualified data capture
    always_ff @(posedge clk_dst or negedge rst_dst_n) begin
        if (!rst_dst_n) begin
            data_out  <= '0;
            valid_out <= 1'b0;
        end else begin
            valid_out <= capture;
            if (capture)
                data_out <= data_in;  // Safe: data is stable at this point
        end
    end

endmodule


// ============================================================================
// 8. Gray Code Synchronizer (格雷码同步器)
// ============================================================================
// Purpose: Synchronize a multi-bit counter (e.g., FIFO read/write pointer)
//          between clock domains using Gray code encoding.
//
// Why Gray code?
//   - In standard binary, incrementing can change multiple bits simultaneously
//     (e.g., 0111 -> 1000 changes all 4 bits). If sampled mid-transition,
//     the synchronized value could be wildly wrong.
//   - Gray code guarantees only ONE bit changes per increment, so even if
//     the sampling catches the transition, the error is at most ±1.
//
// Gray code conversion:
//   - Binary to Gray: gray = binary ^ (binary >> 1)
//   - Gray to Binary: binary[i] = XOR of gray[N-1:i]
//
// Typical use: Asynchronous FIFO pointer synchronization.
// ============================================================================
module gray_sync #(
    parameter WIDTH = 4
)(
    input  logic             clk_src,
    input  logic             rst_src_n,
    input  logic [WIDTH-1:0] binary_in,   // Binary counter from source domain

    input  logic             clk_dst,
    input  logic             rst_dst_n,
    output logic [WIDTH-1:0] binary_out,  // Recovered binary in dest domain
    output logic [WIDTH-1:0] gray_out     // Gray code in dest domain
);

    // ---- Source domain: Convert binary to Gray code ----
    logic [WIDTH-1:0] gray_src;

    // Binary-to-Gray conversion: XOR each bit with the bit above it
    assign gray_src = binary_in ^ (binary_in >> 1);

    // Register the Gray code in source domain
    logic [WIDTH-1:0] gray_src_reg;
    always_ff @(posedge clk_src or negedge rst_src_n) begin
        if (!rst_src_n)
            gray_src_reg <= '0;
        else
            gray_src_reg <= gray_src;
    end

    // ---- Cross-domain: 2-stage synchronizer for each Gray bit ----
    logic [WIDTH-1:0] gray_sync1, gray_sync2;

    always_ff @(posedge clk_dst or negedge rst_dst_n) begin
        if (!rst_dst_n) begin
            gray_sync1 <= '0;
            gray_sync2 <= '0;
        end else begin
            gray_sync1 <= gray_src_reg;  // Stage 1 (may be metastable)
            gray_sync2 <= gray_sync1;    // Stage 2 (resolved)
        end
    end

    assign gray_out = gray_sync2;

    // ---- Destination domain: Convert Gray code back to binary ----
    // gray_to_binary: binary[i] = XOR of all gray bits from MSB down to i
    always_comb begin
        binary_out[WIDTH-1] = gray_sync2[WIDTH-1];
        for (int i = WIDTH-2; i >= 0; i--) begin
            binary_out[i] = binary_out[i+1] ^ gray_sync2[i];
        end
    end

endmodule
// async_fifo is defined in separate async_fifo.sv file
