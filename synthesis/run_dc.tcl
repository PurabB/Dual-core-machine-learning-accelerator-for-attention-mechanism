#------------------------------------------------------
# DC Shell (Design Compiler) Synthesis Script
# Single Core - Step 1
# Target: TSMC 65nm (tcbn65gplus), 1GHz
#------------------------------------------------------

#--- Library Setup ---
set search_path "/home/linux/ieng6/ECE260B_WI26_A00/public/PDKdata/db"
set target_library "tcbn65gpluswc.db"
set link_library   "* tcbn65gpluswc.db"

#--- Read RTL ---
set rtl_path "../verilog"

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
    $rtl_path/core.sv           \
]

elaborate core -parameters "col=8, bw=8, bw_psum=20, pr=16"

current_design core
link
uniquify

#--- Clock Constraints ---
# Target 1GHz -> period = 1ns
create_clock -name clk -period 1 [get_ports clk]
set_clock_uncertainty 0.05 [get_clocks clk]
set_clock_transition  0.05 [get_clocks clk]

#--- False Paths ---
set_false_path -from [get_ports reset]

#--- Input/Output Delay ---
set_input_delay  0.2 -clock clk [remove_from_collection [all_inputs] [get_ports clk]]
set_output_delay 0.2 -clock clk [all_outputs]

#--- Driving Cell and Load ---
set_driving_cell -lib_cell BUFFD1 [remove_from_collection [all_inputs] [get_ports clk]]
set_load 0.05 [all_outputs]

#--- Compile ---
compile_ultra

#--- Reports ---
report_timing -max_paths 10 > reports/timing_report.txt
report_area                 > reports/area_report.txt
report_power                > reports/power_report.txt
report_qor                  > reports/qor_report.txt

#--- Output Netlist & SDC ---
write -format verilog -hierarchy -output outputs/core_netlist.v
write_sdc outputs/core.sdc
write -format ddc -hierarchy -output outputs/core.ddc

puts "===== Synthesis Complete ====="
exit
