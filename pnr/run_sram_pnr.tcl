#------------------------------------------------------
# Innovus PnR Script - SRAM Modules
# Step 3: Hierarchical PnR
# Constraint: Top metal = M4, pin pitch = 4um
#------------------------------------------------------

set lef_path "/home/linux/ieng6/ECE260B_WI26_A00/public/PDKdata/lef"

# Helper: build pin list as a single braced string for editPin
proc make_pin_cmd {base_opts prefix n} {
    set cmd $base_opts
    append cmd " -pin \{"
    for {set i 0} {$i < $n} {incr i} {
        append cmd " ${prefix}\[${i}\]"
    }
    append cmd " \}"
    return $cmd
}

#======================================================
# SRAM 64-bit PnR (qmem, kmem)
#======================================================

set init_verilog "../synthesis/outputs/sram_64b_w16_netlist.v"
set init_design_settop 1
set init_top_cell sram_w16_SRAM_BIT64
set init_lef_file "$lef_path/tcbn65gplus_8lmT2.lef"
set init_mmmc_file "mmmc_sram64.tcl"

init_design

setMaxRouteLayer 4

# 64 pins * 4um = 256um needed per side
floorPlan -site core -d 280 280 5 5 5 5

set base_d "editPin -pinWidth 0.1 -pinDepth 0.4 -fixOverlap 1 -unit MICRON -spreadDirection clockwise -side Bottom -layer M3 -spreadType center -spacing 4.0"
set base_q "editPin -pinWidth 0.1 -pinDepth 0.4 -fixOverlap 1 -unit MICRON -spreadDirection clockwise -side Top -layer M3 -spreadType center -spacing 4.0"

eval [make_pin_cmd $base_d D 64]
eval [make_pin_cmd $base_q Q 64]
editPin -pinWidth 0.1 -pinDepth 0.4 -fixOverlap 1 -unit MICRON -spreadDirection clockwise -side Left -layer M4 -spreadType center -spacing 4.0 -pin {CLK CEN WEN A[0] A[1] A[2] A[3]}

# Power planning
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

report_timing > reports/sram_64b_timing.txt
report_power  > reports/sram_64b_power.txt
report_area   > reports/sram_64b_area.txt

saveDesign sram_64b_pnr.enc

write_lef_abstract sram_64b_w16.lef -specifyTopLayer 4 -stripePin -PGpinLayers {M3 M4}
# do_extract_model requires ETS license, skip for now

puts "===== SRAM 64b PnR Complete ====="

#======================================================
# SRAM 160-bit PnR (pmem)
#======================================================

freeDesign

set init_verilog "../synthesis/outputs/sram_160b_w16_netlist.v"
set init_design_settop 1
set init_top_cell sram_w16_SRAM_BIT160
set init_lef_file "$lef_path/tcbn65gplus_8lmT2.lef"
set init_mmmc_file "mmmc_sram160.tcl"

init_design

setMaxRouteLayer 4

# 160 pins * 4um = 640um needed per side
floorPlan -site core -d 680 680 5 5 5 5

set base_d "editPin -pinWidth 0.1 -pinDepth 0.4 -fixOverlap 1 -unit MICRON -spreadDirection clockwise -side Bottom -layer M3 -spreadType center -spacing 4.0"
set base_q "editPin -pinWidth 0.1 -pinDepth 0.4 -fixOverlap 1 -unit MICRON -spreadDirection clockwise -side Top -layer M3 -spreadType center -spacing 4.0"

eval [make_pin_cmd $base_d D 160]
eval [make_pin_cmd $base_q Q 160]
editPin -pinWidth 0.1 -pinDepth 0.4 -fixOverlap 1 -unit MICRON -spreadDirection clockwise -side Left -layer M4 -spreadType center -spacing 4.0 -pin {CLK CEN WEN A[0] A[1] A[2] A[3]}

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

write_lef_abstract sram_160b_w16.lef -specifyTopLayer 4 -stripePin -PGpinLayers {M3 M4}
# do_extract_model requires ETS license, skip for now

puts "===== SRAM 160b PnR Complete ====="
exit
