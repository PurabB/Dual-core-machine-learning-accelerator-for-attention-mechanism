#------------------------------------------------------
# Innovus PnR Script - Optimized Dual Core Fullchip
# Step 5: Optimized PnR with MCP + Clock Gating
#------------------------------------------------------

set lef_path "/home/linux/ieng6/ECE260B_WI26_A00/public/PDKdata/lef"

if {![file exists reports]} { exec mkdir reports }

#--- Import Design ---
set init_verilog "../synthesis/outputs/fullchip_opt_netlist.v"
set init_design_settop 1
set init_top_cell fullchip_col8_bw8_bw_psum20_pr16
set init_lef_file "$lef_path/tcbn65gplus_8lmT2.lef"
set init_mmmc_file "mmmc_dualcore_opt.tcl"

init_design

#--- Floorplan ---
floorPlan -site core -r 1.0 0.5 20 20 20 20

#--- Power Planning ---
# M7/M8 power ring (top metal is M8, no M9)
addRing -type core_rings -nets {VDD VSS} \
    -layer {top M8 bottom M8 left M7 right M7} \
    -width 1.2 -spacing 0.5 -offset 3.0

addStripe -nets {VDD VSS} \
    -layer M7 -direction vertical \
    -width 1.0 -spacing 0.5 -set_to_set_distance 25

globalNetConnect VDD -type pgpin -pin VDD -all
globalNetConnect VSS -type pgpin -pin VSS -all
sroute -connect {blockPin padPin padRing corePin} -nets {VDD VSS}

#--- Placement ---
setPlaceMode -fp false
placeDesign

#--- Pre-CTS Optimization ---
optDesign -preCTS

#--- CTS (Clock Tree Synthesis) ---
ccopt_design

#--- Post-CTS Optimization ---
optDesign -postCTS

#--- Routing ---
routeDesign

#--- Post-Route Optimization with OCV (On-Chip Variation) ---
setAnalysisMode -analysisType onChipVariation
optDesign -postRoute

#--- Timing Reports ---
# Setup timing (TYP corner - target 0 WNS)
timeDesign -postRoute -prefix postRoute_setup > reports/dualcore_opt_setup_timing.txt
# Hold timing (FAST corner - target 0 WNS)
timeDesign -postRoute -hold -prefix postRoute_hold > reports/dualcore_opt_hold_timing.txt

report_timing -max_paths 10 > reports/dualcore_opt_timing.txt
report_power  > reports/dualcore_opt_power.txt
report_area   > reports/dualcore_opt_area.txt

verify_drc    > reports/dualcore_opt_drc.txt
verifyConnectivity > reports/dualcore_opt_lvs.txt

#--- Save ---
saveDesign fullchip_opt_pnr.enc

puts "===== Optimized Dual Core PnR Complete ====="
exit
