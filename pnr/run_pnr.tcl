#------------------------------------------------------
# Innovus PnR Script
# Single Core - Step 1
#------------------------------------------------------

#--- Library paths ---
set lef_path "/home/linux/ieng6/ECE260B_WI26_A00/public/PDKdata/lef"

#--- Import Design ---
set init_verilog "../synthesis/outputs/core_netlist.v"
set init_design_settop 1
set init_top_cell core_col8_bw8_bw_psum20_pr16
set init_lef_file "$lef_path/tcbn65gplus_8lmT2.lef"
set init_mmmc_file "mmmc.tcl"

init_design

#--- Floorplan ---
# Aspect ratio 1.0, utilization 0.7, core-to-IO spacing 10um
floorPlan -site core -r 1.0 0.7 10 10 10 10

#--- Pin Placement (auto) ---
# Let Innovus handle pin placement automatically

#--- Power Planning ---
# Add power rings
addRing -type core_rings -nets {VDD VSS} \
    -layer {top M8 bottom M8 left M7 right M7} \
    -width 1.0 -spacing 0.5 -offset 2.0

# Add power stripes
addStripe -nets {VDD VSS} \
    -layer M7 -direction vertical \
    -width 0.8 -spacing 0.5 -set_to_set_distance 20

# Connect global nets
globalNetConnect VDD -type pgpin -pin VDD -all
globalNetConnect VSS -type pgpin -pin VSS -all

# Special route for power
sroute -connect {blockPin padPin padRing corePin} -nets {VDD VSS}

#--- Placement ---
setPlaceMode -fp false
placeDesign

#--- Pre-CTS Optimization ---
optDesign -preCTS

#--- Clock Tree Synthesis ---
ccopt_design

#--- Post-CTS Optimization ---
optDesign -postCTS

#--- Routing ---
routeDesign

# Save checkpoint after routing (in case post-route fails)
saveDesign core_postRoute.enc

# Set OCV mode for post-route SI-aware optimization
setAnalysisMode -analysisType onChipVariation
optDesign -postRoute

#--- Reports ---
report_timing > reports/timing_report.txt
report_power  > reports/power_report.txt
report_area   > reports/area_report.txt

# WNS (Worst Negative Slack)
timeDesign -postRoute -prefix postRoute > reports/wns_report.txt

#--- DRC & LVS ---
verify_drc    > reports/drc_report.txt
verifyConnectivity > reports/lvs_report.txt

#--- Save Design ---
saveDesign core_pnr.enc

puts "===== PnR Complete ====="
exit
