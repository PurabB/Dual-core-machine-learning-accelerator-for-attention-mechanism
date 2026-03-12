#------------------------------------------------------
# Innovus PnR Script - SRAM 160-bit
# Step 3: Hierarchical PnR
#------------------------------------------------------

set lef_path "/home/linux/ieng6/ECE260B_WI26_A00/public/PDKdata/lef"

set init_verilog "../synthesis/outputs/sram_160b_w16_netlist.v"
set init_design_settop 1
set init_top_cell sram_w16_sram_bit160
set init_lef_file "$lef_path/tcbn65gplus_8lmT2.lef"
set init_mmmc_file "mmmc_sram160.tcl"

init_design

setMaxRouteLayer 4

floorPlan -site core -r 1.0 0.7 5 5 5 5

addRing -type core_rings -nets {VDD VSS} \
    -layer {top M4 bottom M4 left M3 right M3} \
    -width 0.8 -spacing 0.4 -offset 1.5

addStripe -nets {VDD VSS} \
    -layer M3 -direction vertical \
    -width 0.6 -spacing 0.4 -set_to_set_distance 15

globalNetConnect VDD -type pgpin -pin VDD -all
globalNetConnect VSS -type pgpin -pin VSS -all
sroute -connect {blockPin padPin padRing corePin} -nets {VDD VSS}

placeDesign
optDesign -preCTS
ccopt_design
optDesign -postCTS
routeDesign

setAnalysisMode -analysisType onChipVariation
optDesign -postRoute

report_timing > reports/sram_160b_timing.txt
report_power  > reports/sram_160b_power.txt
report_area   > reports/sram_160b_area.txt

saveDesign sram_160b_pnr.enc

write_lef_abstract sram_160b_w16.lef -stripePin -PGpinLayers {M3 M4}

puts "===== SRAM 160b PnR Complete ====="
exit
