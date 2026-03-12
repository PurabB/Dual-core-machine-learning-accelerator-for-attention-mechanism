#------------------------------------------------------
# Innovus PnR Script - Hierarchical Core
# Step 3: Core PnR with SRAM macros
#------------------------------------------------------

set lef_path "/home/linux/ieng6/ECE260B_WI26_A00/public/PDKdata/lef"

#--- Import Design ---
set init_verilog "../synthesis/outputs/core_hier_netlist.v"
set init_design_settop 1
set init_top_cell core_col8_bw8_bw_psum20_pr16
set init_lef_file "$lef_path/tcbn65gplus_8lmT2.lef"
set init_mmmc_file "mmmc_core_hier.tcl"

init_design

#--- Floorplan ---
floorPlan -site core -r 1.0 0.6 15 15 15 15

#--- Pin Placement (auto) ---

#--- Place SRAM macros ---
# Adjust positions based on actual SRAM sizes
# You may need to adjust coordinates after seeing actual macro sizes
# placeInstance qmem_instance  10  10 R0
# placeInstance kmem_instance  10  80 R0
# placeInstance psum_mem_instance 10 150 R0

# Use flipOrRotateObject if needed:
# flipOrRotateObject -rotate R90 -name qmem_instance
# flipOrRotateObject -flip MY -name kmem_instance

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

verify_drc    > reports/core_hier_drc.txt
verifyConnectivity > reports/core_hier_lvs.txt

#--- Save ---
saveDesign core_hier_pnr.enc

# Write LEF for use as macro in dual-core
write_lef_abstract core.lef

puts "===== Hierarchical Core PnR Complete ====="
exit
