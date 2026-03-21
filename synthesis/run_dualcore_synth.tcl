#------------------------------------------------------
# DC Shell Synthesis Script - Dual Core Fullchip
# Step 4: Hierarchical Synthesis
#------------------------------------------------------

#--- Library Setup ---
set search_path "/home/linux/ieng6/ECE260B_WI26_A00/public/PDKdata/db"
set target_library "tcbn65gpluswc.db"
set link_library   "* tcbn65gpluswc.db"

set rtl_path "../verilog"

#--- Read all RTL ---
analyze -format sverilog [list \
    $rtl_path/mac.sv            \
    $rtl_path/mac_col.sv        \
    $rtl_path/mac_array.sv      \
    $rtl_path/async_fifo.sv     \
    $rtl_path/ofifo.sv          \
    $rtl_path/sram_w16.sv       \
    $rtl_path/sfp_row.sv        \
    $rtl_path/sync.sv           \
    $rtl_path/core.sv           \
    $rtl_path/fullchip.sv       \
]

elaborate fullchip -parameters "COL=8, BW=8, BW_PSUM=20, PR=16"

current_design fullchip
link
uniquify

#--- Clock Constraints ---
# Two async clocks
create_clock -name clk0 -period 1 [get_ports clk0]
create_clock -name clk1 -period 1.25 [get_ports clk1]

set_clock_uncertainty 0.05 [get_clocks clk0]
set_clock_uncertainty 0.05 [get_clocks clk1]

# Async clock domains
set_clock_groups -asynchronous -group {clk0} -group {clk1}

set_false_path -from [get_ports reset]

#--- Input/Output Delay ---
set_input_delay  0.2 -clock clk0 [list inst0 mem_in0]
set_input_delay  0.2 -clock clk1 [list inst1 mem_in1]
set_input_delay  0.2 -clock clk0 [get_ports reset]
set_output_delay 0.2 -clock clk0 [get_ports out0]
set_output_delay 0.2 -clock clk1 [get_ports out1]

set_driving_cell -lib_cell BUFFD1 [remove_from_collection [all_inputs] [get_ports {clk0 clk1}]]
set_load 0.05 [all_outputs]

#--- Compile with retiming for pipelined MAC ---
compile_ultra -retime

#--- Reports ---
report_timing -max_paths 10 > reports/dualcore_timing.txt
report_area                 > reports/dualcore_area.txt
report_power                > reports/dualcore_power.txt
report_qor                  > reports/dualcore_qor.txt

#--- Output ---
write -format verilog -hierarchy -output outputs/fullchip_netlist.v
write_sdc outputs/fullchip.sdc
write -format ddc -hierarchy -output outputs/fullchip.ddc

puts "===== Dual Core Synthesis Complete ====="
exit
