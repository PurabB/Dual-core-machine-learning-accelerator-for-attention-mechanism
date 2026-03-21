#------------------------------------------------------
# Innovus PnR Script - Hierarchical Core
# Step 3: Core PnR with SRAM macros
#------------------------------------------------------

set lef_path "/home/linux/ieng6/ECE260B_WI26_A00/public/PDKdata/lef"

#--- Import Design ---
set init_verilog "../synthesis/outputs/core_hier_netlist.v"
set init_design_settop 1
set init_top_cell core_COL8_BW8_BW_PSUM20_PR8_OBW10
set init_lef_file [list \
    $lef_path/tcbn65gplus_8lmT2.lef \
    sram_64b_w16.lef \
    sram_160b_w16.lef \
]
set init_mmmc_file "mmmc_core_hier.tcl"

init_design

#--- Floorplan ---
floorPlan -site core -r 1.0 0.6 15 15 15 15

#--- Power Planning ---
addRing -type core_rings -nets {VDD VSS} \
    -layer {top M8 bottom M8 left M7 right M7} \
    -width 1.0 -spacing 0.5 -offset 2.0

addStripe -nets {VDD VSS} \
    -layer M7 -direction vertical \
    -width 0.8 -spacing 0.5 -set_to_set_distance 20

globalNetConnect VDD -type pgpin -pin VDD -all
globalNetConnect VSS -type pgpin -pin VSS -all
sroute -connect {blockPin padPin padRing corePin} -nets {VDD VSS}

#--- Placement ---
setPlaceMode -fp false
placeDesign

#--- CTS & Optimization ---
optDesign -preCTS

create_ccopt_clock_tree_spec

# SRAM macro psum_mem has no timing lib — mark CLK as stop pin
# with capacitance override for all delay corners
set_ccopt_property sink_type \
    -pin psum_mem_instance/CLK stop
set_ccopt_property capacitance_override \
    -pin psum_mem_instance/CLK \
    -delay_corner WC_corner 0.005
set_ccopt_property capacitance_override \
    -pin psum_mem_instance/CLK \
    -delay_corner BC_corner 0.005
set_ccopt_property capacitance_override \
    -pin psum_mem_instance/CLK \
    -delay_corner TC_corner 0.005

ccopt_design
optDesign -postCTS

#--- Routing ---
routeDesign

setAnalysisMode -analysisType onChipVariation
optDesign -postRoute

#--- Reports ---
report_timing > reports/core_hier_timing.txt
report_power  > reports/core_hier_power.txt
report_area   > reports/core_hier_area.txt
timeDesign -postRoute -prefix postRoute > reports/core_hier_wns.txt

verify_drc         > reports/core_hier_drc.txt
verifyConnectivity > reports/core_hier_lvs.txt

#--- Save ---
saveDesign core_hier_pnr.enc

write_lef_abstract core.lef

puts "===== Hierarchical Core PnR Complete ====="
exit
