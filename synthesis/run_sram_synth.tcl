#------------------------------------------------------
# DC Shell Synthesis Script - SRAM Modules
# Step 3: Hierarchical Synthesis
#------------------------------------------------------

#--- Library Setup ---
set search_path "/home/linux/ieng6/ECE260B_WI26_A00/public/PDKdata/db"
set target_library "tcbn65gpluswc.db"
set link_library   "* tcbn65gpluswc.db"

set rtl_path "../verilog"

#------------------------------------------------------
# Synthesize sram_w16 with 64-bit width (qmem, kmem)
#------------------------------------------------------
analyze -format sverilog $rtl_path/sram_w16.sv
elaborate sram_w16 -parameters "SRAM_BIT=64"
current_design sram_w16
link
uniquify

create_clock -name CLK -period 1 [get_ports CLK]
set_false_path -from [get_ports CEN]
set_input_delay  0.2 -clock CLK [remove_from_collection [all_inputs] [get_ports CLK]]
set_output_delay 0.2 -clock CLK [all_outputs]
set_driving_cell -lib_cell BUFFD1 [remove_from_collection [all_inputs] [get_ports CLK]]
set_load 0.05 [all_outputs]

compile_ultra

report_timing > reports/sram_64b_timing.txt
report_area   > reports/sram_64b_area.txt
report_power  > reports/sram_64b_power.txt

write -format verilog -hierarchy -output outputs/sram_64b_w16_netlist.v
write_sdc outputs/sram_64b_w16.sdc
write -format ddc -hierarchy -output outputs/sram_64b_w16.ddc

#------------------------------------------------------
# Synthesize sram_w16 with 160-bit width (pmem)
#------------------------------------------------------
remove_design -all

analyze -format sverilog $rtl_path/sram_w16.sv
elaborate sram_w16 -parameters "SRAM_BIT=160"
current_design sram_w16
link
uniquify

create_clock -name CLK -period 1 [get_ports CLK]
set_false_path -from [get_ports CEN]
set_input_delay  0.2 -clock CLK [remove_from_collection [all_inputs] [get_ports CLK]]
set_output_delay 0.2 -clock CLK [all_outputs]
set_driving_cell -lib_cell BUFFD1 [remove_from_collection [all_inputs] [get_ports CLK]]
set_load 0.05 [all_outputs]

compile_ultra

report_timing > reports/sram_160b_timing.txt
report_area   > reports/sram_160b_area.txt
report_power  > reports/sram_160b_power.txt

write -format verilog -hierarchy -output outputs/sram_160b_w16_netlist.v
write_sdc outputs/sram_160b_w16.sdc
write -format ddc -hierarchy -output outputs/sram_160b_w16.ddc

puts "===== SRAM Synthesis Complete ====="
exit
