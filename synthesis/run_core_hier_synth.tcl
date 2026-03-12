#------------------------------------------------------
# DC Shell Synthesis Script - Hierarchical Core
# Step 3: Core synthesis with SRAM as black-box macro
#------------------------------------------------------

#--- Library Setup ---
set search_path "/home/linux/ieng6/ECE260B_WI26_A00/public/PDKdata/db"
set target_library "tcbn65gpluswc.db"
set link_library   "* tcbn65gpluswc.db"

set rtl_path "../verilog"

#--- Read all RTL ---
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
    $rtl_path/sfp_row.sv        \
    $rtl_path/core.sv           \
]

elaborate core -parameters "col=8, bw=8, bw_psum=20, pr=16"

current_design core
link
uniquify

#--- Mark SRAMs as dont_touch (they are pre-synthesized macros) ---
# If using SRAM .db from PnR, add to link_library and set dont_touch
# For now, synthesize normally (SRAMs will be replaced during PnR)

#--- Clock Constraints ---
create_clock -name clk -period 1 [get_ports clk]
set_clock_uncertainty 0.05 [get_clocks clk]
set_clock_transition  0.05 [get_clocks clk]

set_false_path -from [get_ports reset]

set_input_delay  0.2 -clock clk [remove_from_collection [all_inputs] [get_ports clk]]
set_output_delay 0.2 -clock clk [all_outputs]

set_driving_cell -lib_cell BUFFD1 [remove_from_collection [all_inputs] [get_ports clk]]
set_load 0.05 [all_outputs]

compile_ultra

report_timing -max_paths 10 > reports/core_hier_timing.txt
report_area                 > reports/core_hier_area.txt
report_power                > reports/core_hier_power.txt

write -format verilog -hierarchy -output outputs/core_hier_netlist.v
write_sdc outputs/core_hier.sdc
write -format ddc -hierarchy -output outputs/core_hier.ddc

puts "===== Hierarchical Core Synthesis Complete ====="
exit
