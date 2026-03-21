#------------------------------------------------------
# Innovus PnR Script - Dual Core Fullchip
# Step 4: Hierarchical PnR with core macros
#------------------------------------------------------

set lef_path "/home/linux/ieng6/ECE260B_WI26_A00/public/PDKdata/lef"

#--- Import Design ---
set init_verilog "../synthesis/outputs/fullchip_netlist.v"
set init_design_settop 1
set init_top_cell fullchip_COL8_BW8_BW_PSUM20_PR16
set init_lef_file [list \
    $lef_path/tcbn65gplus_8lmT2.lef \
    sram_64b_w16.lef \
    sram_160b_w16.lef \
]
set init_mmmc_file "mmmc_dualcore.tcl"

init_design

#--- Floorplan ---
floorPlan -site core -r 1.0 0.5 20 20 20 20

#--- Pin Placement (auto) ---

#--- Power Planning ---
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

#--- CTS ---
create_ccopt_clock_tree_spec
ccopt_design

#--- Post-CTS ---
optDesign -postCTS

#--- Routing ---
routeDesign

setAnalysisMode -analysisType onChipVariation
optDesign -postRoute

#--- Reports ---
report_timing -nworst 5 -path_type full_clock \
    > reports/dualcore_timing.txt
report_timing -nworst 5 -path_type full_clock -check_type hold \
    >> reports/dualcore_timing.txt
report_power  > reports/dualcore_power.txt
report_area   > reports/dualcore_area.txt
timeDesign -postRoute -prefix postRoute > reports/dualcore_wns.txt
timeDesign -postRoute -hold -prefix postRoute_hold \
    >> reports/dualcore_wns.txt

verify_drc    > reports/dualcore_drc.txt
verifyConnectivity > reports/dualcore_lvs.txt

#--- Save ---
saveDesign fullchip_pnr.enc

puts "===== Dual Core PnR Complete ====="
exit
