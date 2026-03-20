#------------------------------------------------------
# DC Shell Synthesis Script - Optimized Dual Core
# Step 5: MCP (Multi-Cycle Path) + Clock Gating optimization
# Following HW7 normalizer exact synthesis flow:
#   1. Elaborate  2. Ungroup/Flatten  3. Read SDC  4. Compile
#------------------------------------------------------

#--- Library Setup ---
set search_path "/home/linux/ieng6/ECE260B_WI26_A00/public/PDKdata/db"
set target_library "tcbn65gpluswc.db"
set link_library   "* tcbn65gpluswc.db"

set rtl_path "../verilog"

if {![file exists reports]} { exec mkdir reports }
if {![file exists outputs]} { exec mkdir outputs }

#--- Read all RTL (including divider_mcp) ---
analyze -format sverilog [list \
    $rtl_path/fifo_mux_2_1.sv   \
    $rtl_path/fifo_mux_8_1.sv   \
    $rtl_path/fifo_mux_16_1.sv  \
    $rtl_path/fifo_depth16.sv   \
    $rtl_path/ofifo.sv          \
    $rtl_path/mac_16in.sv       \
    $rtl_path/mac_col.sv        \
    $rtl_path/mac_array.sv      \
    $rtl_path/sram_w16.sv       \
    $rtl_path/divider_mcp.sv    \
    $rtl_path/sfp_row.sv        \
    $rtl_path/sparsity_ctrl.sv  \
    $rtl_path/sync.sv           \
    $rtl_path/core.sv           \
    $rtl_path/fullchip.sv       \
]

elaborate fullchip -parameters "col=8, bw=8, bw_psum=20, pr=16"

current_design fullchip
link
uniquify

#--- Flatten hierarchy FIRST (HW7 run_dc.tcl line 82) ---
# This makes all cell names simple (no hierarchy), so SDC get_cells works
ungroup -all -flatten

#------------------------------------------------------
# SDC Constraints (read AFTER flatten, same as HW7 line 85)
#------------------------------------------------------

#--- Clock Constraints ---
create_clock -name clk0 -period 1 [get_ports clk0]
create_clock -name clk1 -period 1.25 [get_ports clk1]

set_clock_uncertainty 0.05 [get_clocks clk0]
set_clock_uncertainty 0.05 [get_clocks clk1]
set_clock_transition  0.05 [get_clocks clk0]
set_clock_transition  0.05 [get_clocks clk1]

# Async clock domains
set_clock_groups -asynchronous -group {clk0} -group {clk1}

# Reset is asynchronous - no timing
set_false_path -from [get_ports reset]

#--- Input/Output Delay ---
set_input_delay  0.2 -clock clk0 [remove_from_collection [all_inputs] [get_ports {clk0 clk1}]]
set_output_delay 0.2 -clock clk0 [get_ports out0]
set_output_delay 0.2 -clock clk1 [get_ports out1]

set_driving_cell -lib_cell BUFFD1 [remove_from_collection [all_inputs] [get_ports {clk0 clk1}]]
set_load 0.05 [all_outputs]

#------------------------------------------------------
# Multi-Cycle Path (MCP) Constraints for divider_mcp
# Same pattern as HW7 normalizer.sdc (lines 22-48):
#   -from source regs (numer/denom inputs) -to capture regs (out_reg)
# After flatten, divider_mcp regs have names like:
#   *div_inst*u_div*out_reg*     (capture registers)
#   *div_inst*u_div*mcp_cnt_reg* (counter registers)
#------------------------------------------------------
set mcp_cycles 4

# Path TO divider output capture registers (out_reg)
# Covers all paths: from psum_mem data, FIFO data, sum_q → through divider → out_reg
set_multicycle_path -setup $mcp_cycles \
    -to [get_cells *u_div*out_reg*]

set_multicycle_path -hold [expr {$mcp_cycles - 1}] \
    -to [get_cells *u_div*out_reg*]

propagate_constraints
set_fix_hold [all_clocks]

#--- Clock Gating ---
set_clock_gating_style -sequential_cell latch
compile_ultra -gate_clock -no_autoungroup

#--- Reports ---
report_timing -max_paths 10 > reports/dualcore_opt_timing.txt
report_area                 > reports/dualcore_opt_area.txt
report_power                > reports/dualcore_opt_power.txt
report_qor                  > reports/dualcore_opt_qor.txt

# Report MCP paths specifically
report_timing -to [get_cells *u_div*out_reg*] \
    -max_paths 5 > reports/dualcore_opt_mcp_timing.txt

#--- Output ---
change_names -rules verilog -hierarchy
write -format verilog -hierarchy -output outputs/fullchip_opt_netlist.v
write_sdc outputs/fullchip_opt.sdc
write -format ddc -hierarchy -output outputs/fullchip_opt.ddc

puts "===== Optimized Dual Core Synthesis Complete ====="
puts "MCP cycles = $mcp_cycles"
puts "Clock gating enabled"
exit
