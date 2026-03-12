#######################################################
#                                                     
#  Innovus Command Logging File                     
#  Created on Wed Mar 11 05:49:29 2026                
#                                                     
#######################################################

#@(#)CDS: Innovus v15.23-s045_1 (64bit) 04/22/2016 12:32 (Linux 2.6.18-194.el5)
#@(#)CDS: NanoRoute 15.23-s045_1 NR160414-1105/15_23-UB (database version 2.30, 317.6.1) {superthreading v1.26}
#@(#)CDS: AAE 15.23-s014 (64bit) 04/22/2016 (Linux 2.6.18-194.el5)
#@(#)CDS: CTE 15.23-s022_1 () Apr 22 2016 09:38:45 ( )
#@(#)CDS: SYNTECH 15.23-s008_1 () Apr 12 2016 21:52:59 ( )
#@(#)CDS: CPE v15.23-s045
#@(#)CDS: IQRC/TQRC 15.1.4-s213 (64bit) Tue Feb  9 17:31:28 PST 2016 (Linux 2.6.18-194.el5)

set_global _enable_mmmc_by_default_flow      $CTE::mmmc_default
suppressMessage ENCEXT-2799
getDrawView
loadWorkspace -name Physical
win
set init_pwr_net VDD
set init_gnd_net VSS
set init_verilog ./verilog/fullchip.v
set init_design_netlisttype Verilog
set init_design_settop 1
set init_top_cell fullchip
set init_lef_file /home/linux/ieng6/ECE260B_WI26_A00/public/PDKdata/lef/tcbn65gplus_8lmT2.lef
create_library_set -name WC_LIB -timing $worst_timing_lib
create_library_set -name BC_LIB -timing $best_timing_lib
create_rc_corner -name Cmax -cap_table $worst_captbl -T 125
create_rc_corner -name Cmin -cap_table $best_captbl -T -40
create_delay_corner -name WC -library_set WC_LIB -rc_corner Cmax
create_delay_corner -name BC -library_set BC_LIB -rc_corner Cmin
create_constraint_mode -name CON -sdc_file [list $sdc]
create_analysis_view -name WC_VIEW -delay_corner WC -constraint_mode CON
create_analysis_view -name BC_VIEW -delay_corner BC -constraint_mode CON
init_design -setup WC_VIEW -hold BC_VIEW
set_interactive_constraint_modes {CON}
setDesignMode -process 65
floorPlan -site core -r 1 0.50 10.0 10.0 10.0 10.0
timeDesign -preplace -prefix preplace
globalNetConnect VDD -type pgpin -pin VDD -inst * -verbose
globalNetConnect VSS -type pgpin -pin VSS -inst * -verbose
addRing -spacing {top 2 bottom 2 left 2 right 2} -width {top 3 bottom 3 left 3 right 3} -layer {top M1 bottom M1 left M2 right M2} -center 1 -type core_rings -nets {VSS  VDD}
setAddStripeMode -break_at block_ring
addStripe -number_of_sets 2 -spacing 6 -layer M4 -width 2 -nets { VSS VDD }
sroute
saveDesign floorplan.enc
setPlaceMode -timingDriven true -reorderScan false -congEffort medium -modulePlan false
setOptMode -effort high -powerEffort high -leakageToDynamicRatio 0.5 -fixFanoutLoad true -restruct true -verbose true
place_opt_design
addFiller -cell {DCAP DCAP4 DCAP8 DCAP16 DCAP32} -merge true
saveDesign placement.enc
setPinAssignMode -pinEditInBatch true
editPin -pinWidth 0.1 -pinDepth 0.5 -fixOverlap 1 -unit MICRON -spreadDirection clockwise -side Left -layer 3 -spreadType center -spacing 0.2 -pin {clk reset {inst[0]} {inst[1]} {inst[2]} {inst[3]} {inst[4]} {inst[5]} {inst[6]} {inst[7]} {inst[8]} {inst[9]} {inst[10]} {inst[11]} {inst[12]} {inst[13]} {inst[14]} {inst[15]} {inst[16]} {mem_in[0]} {mem_in[1]} {mem_in[2]} {mem_in[3]} {mem_in[4]} {mem_in[5]} {mem_in[6]} {mem_in[7]} {mem_in[8]} {mem_in[9]} {mem_in[10]} {mem_in[11]} {mem_in[12]} {mem_in[13]} {mem_in[14]} {mem_in[15]} {mem_in[16]} {mem_in[17]} {mem_in[18]} {mem_in[19]} {mem_in[20]} {mem_in[21]} {mem_in[22]} {mem_in[23]} {mem_in[24]} {mem_in[25]} {mem_in[26]} {mem_in[27]} {mem_in[28]} {mem_in[29]} {mem_in[30]} {mem_in[31]} {mem_in[32]} {mem_in[33]} {mem_in[34]} {mem_in[35]} {mem_in[36]} {mem_in[37]} {mem_in[38]} {mem_in[39]} {mem_in[40]} {mem_in[41]} {mem_in[42]} {mem_in[43]} {mem_in[44]} {mem_in[45]} {mem_in[46]} {mem_in[47]} {mem_in[48]} {mem_in[49]} {mem_in[50]} {mem_in[51]} {mem_in[52]} {mem_in[53]} {mem_in[54]} {mem_in[55]} {mem_in[56]} {mem_in[57]} {mem_in[58]} {mem_in[59]} {mem_in[60]} {mem_in[61]} {mem_in[62]} {mem_in[63]}}
editPin -pinWidth 0.1 -pinDepth 0.5 -fixOverlap 1 -unit MICRON -spreadDirection clockwise -side Bottom -layer 2 -spreadType center -spacing 0.2 -pin {{out[0]} {out[1]} {out[2]} {out[3]} {out[4]} {out[5]} {out[6]} {out[7]} {out[8]} {out[9]} {out[10]} {out[11]} {out[12]} {out[13]} {out[14]} {out[15]} {out[16]} {out[17]} {out[18]} {out[19]} {out[20]} {out[21]} {out[22]} {out[23]} {out[24]} {out[25]} {out[26]} {out[27]} {out[28]} {out[29]} {out[30]} {out[31]} {out[32]} {out[33]} {out[34]} {out[35]} {out[36]} {out[37]} {out[38]} {out[39]} {out[40]} {out[41]} {out[42]} {out[43]} {out[44]} {out[45]} {out[46]} {out[47]} {out[48]} {out[49]} {out[50]} {out[51]} {out[52]} {out[53]} {out[54]} {out[55]} {out[56]} {out[57]} {out[58]} {out[59]} {out[60]} {out[61]} {out[62]} {out[63]} {out[64]} {out[65]} {out[66]} {out[67]} {out[68]} {out[69]} {out[70]} {out[71]} {out[72]} {out[73]} {out[74]} {out[75]} {out[76]} {out[77]} {out[78]} {out[79]} {out[80]} {out[81]} {out[82]} {out[83]} {out[84]} {out[85]} {out[86]} {out[87]} {out[88]} {out[89]} {out[90]} {out[91]} {out[92]} {out[93]} {out[94]} {out[95]} {out[96]} {out[97]} {out[98]} {out[99]} {out[100]} {out[101]} {out[102]} {out[103]} {out[104]} {out[105]} {out[106]} {out[107]} {out[108]} {out[109]} {out[110]} {out[111]} {out[112]} {out[113]} {out[114]} {out[115]} {out[116]} {out[117]} {out[118]} {out[119]} {out[120]} {out[121]} {out[122]} {out[123]} {out[124]} {out[125]} {out[126]} {out[127]} {out[128]} {out[129]} {out[130]} {out[131]} {out[132]} {out[133]} {out[134]} {out[135]} {out[136]} {out[137]} {out[138]} {out[139]} {out[140]} {out[141]} {out[142]} {out[143]} {out[144]} {out[145]} {out[146]} {out[147]} {out[148]} {out[149]} {out[150]} {out[151]} {out[152]} {out[153]} {out[154]} {out[155]} {out[156]} {out[157]} {out[158]} {out[159]}}
setPinAssignMode -pinEditInBatch false
set_ccopt_property -update_io_latency false
create_ccopt_clock_tree_spec -file ./verilog/constraints/fullchip.ccopt
ccopt_design
set_propagated_clock [all_clocks]
optDesign -postCTS -hold
saveDesign cts.enc
setNanoRouteMode -quiet -drouteAllowMergedWireAtPin false
setNanoRouteMode -quiet -drouteFixAntenna true
setNanoRouteMode -quiet -routeWithTimingDriven true
setNanoRouteMode -quiet -routeWithSiDriven true
setNanoRouteMode -quiet -routeSiEffort medium
setNanoRouteMode -quiet -routeWithSiPostRouteFix false
setNanoRouteMode -quiet -drouteAutoStop true
setNanoRouteMode -quiet -routeSelectedNetOnly false
setNanoRouteMode -quiet -drouteStartIteration default
routeDesign
setExtractRCMode -engine postRoute
extractRC
setAnalysisMode -analysisType onChipVariation -cppr both
optDesign -postRoute -setup -hold
optDesign -postRoute -drv
optDesign -postRoute -inc
saveDesign route.enc
verifyGeometry
verifyConnectivity
report_timing -max_paths 5 > ${design}.post_route.timing.rpt
report_power -outfile fullchip.post_route.power.rpt
summaryReport -nohtml -outfile fullchip.post_route.summary.rpt
streamOut fullchip.gds2
write_lef_abstract fullchip.lef
defOut -netlist -routing fullchip.def
saveNetlist fullchip.pnr.v
setAnalysisMode -setup
set_analysis_view -setup WC_VIEW -hold WC_VIEW
do_extract_model -view WC_VIEW -format dotlib ${design}_WC.lib
write_sdf -view WC_VIEW ${design}_WC.sdf
setAnalysisMode -hold
set_analysis_view -setup BC_VIEW -hold BC_VIEW
do_extract_model -view BC_VIEW -format dotlib ${design}_BC.lib
write_sdf -view BC_VIEW ${design}_BC.sdf
gui_select -next -point {522.9115 -52.4365}
gui_select -next -point {522.9115 -52.4365}
gui_select -next -point {522.9115 -52.4365}
gui_select -next -point {522.9115 -52.4365}
gui_select -next -point {522.9115 -52.4365}
gui_select -next -point {522.9115 -52.4365}
gui_select -next -point {522.9115 -52.4365}
gui_select -next -point {522.9115 -52.4365}
gui_select -next -point {522.9115 -52.4365}
gui_select -next -point {522.9115 -52.4365}
gui_select -next -point {522.9115 -52.4365}
gui_select -next -point {522.9115 -52.4365}
gui_select -next -point {522.9115 -52.4365}
gui_select -next -point {363.967 27.395}
gui_select -next -point {363.967 27.395}
gui_select -next -point {324.411 61.198}
gui_select -next -point {308.5885 94.2815}
gui_select -next -point {282.697 141.0295}
gui_select -next -point {274.0665 152.537}
gui_select -next -point {274.0665 152.537}
gui_select -next -point {274.0665 152.537}
gui_select -next -point {274.0665 152.537}
gui_select -next -point {274.0665 153.5325}
gui_select -next -point {274.0665 153.5325}
gui_select -next -point {271.724 186.3235}
gui_select -next -point {271.724 188.6655}
gui_select -next -point {271.724 193.35}
gui_select -next -point {271.724 194.521}
gui_select -next -point {271.724 194.521}
gui_select -next -point {271.724 194.521}
gui_select -next -point {271.724 194.521}
gui_select -next -point {271.724 194.521}
gui_select -next -point {271.724 194.521}
gui_select -next -point {271.724 194.521}
gui_select -next -point {271.724 194.521}
gui_select -next -point {271.724 206.232}
gui_select -next -point {271.724 208.5745}
gui_select -next -point {271.724 208.5745}
gui_select -next -point {271.7235 208.5745}
gui_select -next -point {271.7235 208.5745}
gui_select -next -point {271.7235 208.5745}
gui_select -next -point {271.7235 208.5745}
gui_select -next -point {271.7235 208.5745}
gui_select -next -point {271.7235 208.5745}
gui_select -next -point {271.7235 208.5745}
gui_select -next -point {271.7235 208.5745}
gui_select -next -point {271.7235 208.5745}
gui_select -next -point {271.7235 208.5745}
gui_select -next -point {271.7235 208.5745}
gui_select -next -point {271.7235 208.5745}
gui_select -next -point {271.7235 208.5745}
gui_select -next -point {271.7235 208.5745}
gui_select -next -point {271.7235 208.5745}
gui_select -next -point {271.7235 208.5745}
gui_select -next -point {271.7235 208.5745}
gui_select -next -point {275.108 208.5745}
gui_select -next -point {280.185 208.5745}
gui_select -next -point {281.9995 207.3515}
gui_select -next -point {284.445 204.9065}
gui_select -next -point {284.445 204.9065}
gui_select -next -point {284.445 204.9065}
gui_select -next -point {284.445 204.9065}
gui_select -next -point {284.445 204.9065}
gui_select -next -point {284.445 204.9065}
gui_select -next -point {284.445 204.9065}
gui_select -next -point {284.445 204.9065}
gui_select -next -point {284.445 204.9065}
gui_select -next -point {284.445 204.9065}
gui_select -next -point {284.445 204.9065}
gui_select -next -point {284.445 204.9065}
gui_select -next -point {284.445 204.9065}
gui_select -next -point {284.445 204.9065}
gui_select -next -point {284.445 204.9065}
gui_select -next -point {284.445 204.9065}
gui_select -next -point {284.445 204.9065}
gui_select -next -point {284.445 204.9065}
gui_select -next -point {284.4445 204.9065}
gui_select -next -point {284.4445 204.9065}
gui_select -next -point {284.4445 204.9065}
gui_select -next -point {284.4445 204.9065}
gui_select -next -point {284.4445 204.9065}
gui_select -next -point {284.4445 204.9065}
gui_select -next -point {284.4445 204.9065}
gui_select -next -point {284.4445 204.9065}
gui_select -next -point {284.4445 204.9065}
gui_select -next -point {284.4445 204.9065}
gui_select -next -point {284.4445 204.9065}
gui_select -next -point {284.4445 204.9065}
gui_select -next -point {284.4445 204.9065}
gui_select -next -point {284.4445 204.9065}
gui_select -next -point {284.4445 204.906}
gui_select -next -point {284.445 204.9065}
gui_select -next -point {284.445 204.9065}
gui_select -next -point {284.445 204.9065}
gui_select -next -point {284.445 204.9065}
gui_select -next -point {284.445 204.9065}
gui_select -next -point {284.445 204.9065}
gui_select -next -point {284.445 204.9065}
gui_select -next -point {284.445 204.9065}
gui_select -next -point {284.445 204.9065}
gui_select -next -point {284.445 204.9065}
gui_select -next -point {284.445 204.9065}
gui_select -next -point {284.445 204.9065}
gui_select -next -point {284.445 204.9065}
gui_select -next -point {284.445 204.9065}
gui_select -next -point {284.445 204.9065}
gui_select -next -point {284.445 204.9065}
gui_select -next -point {284.445 204.9065}
gui_select -next -point {284.445 204.9065}
gui_select -next -point {284.445 204.9065}
gui_select -next -point {284.445 204.9065}
gui_select -next -point {284.445 204.9065}
gui_select -next -point {284.445 204.9065}
gui_select -next -point {284.445 204.9065}
gui_select -next -point {284.445 204.9065}
gui_select -next -point {284.445 204.9065}
gui_select -next -point {284.445 204.9065}
gui_select -next -point {284.445 204.9065}
gui_select -next -point {284.445 204.9065}
gui_select -next -point {284.445 204.9065}
gui_select -next -point {284.445 204.9065}
gui_select -next -point {284.445 204.9065}
gui_select -next -point {284.445 204.9065}
gui_select -next -point {284.445 204.9065}
gui_select -next -point {284.445 204.906}
gui_select -next -point {284.764 204.906}
gui_select -next -point {284.764 204.906}
gui_select -next -point {284.764 204.906}
gui_select -next -point {284.764 204.906}
gui_select -next -point {284.764 204.906}
gui_select -next -point {284.764 204.906}
gui_select -next -point {284.764 204.906}
gui_select -next -point {284.764 204.906}
gui_select -next -point {284.764 204.906}
gui_select -next -point {284.764 204.906}
gui_select -next -point {284.764 204.906}
gui_select -next -point {284.764 204.906}
gui_select -next -point {284.764 204.906}
gui_select -next -point {284.764 204.906}
gui_select -next -point {284.764 204.906}
gui_select -next -point {284.764 204.9065}
gui_select -next -point {284.764 204.9065}
gui_select -next -point {284.764 204.9065}
gui_select -next -point {284.764 204.9065}
gui_select -next -point {284.764 204.9065}
gui_select -next -point {284.764 204.9065}
gui_select -next -point {284.764 204.9065}
gui_select -next -point {284.764 204.9065}
gui_select -next -point {284.764 204.9065}
gui_select -next -point {284.764 204.9065}
gui_select -next -point {284.764 204.9065}
gui_select -next -point {284.764 204.9065}
gui_select -next -point {284.764 204.9065}
gui_select -next -point {284.764 204.9065}
gui_select -next -point {284.7635 204.906}
gui_select -next -point {284.7635 204.906}
gui_select -next -point {284.7635 204.906}
gui_select -next -point {284.7635 204.906}
gui_select -next -point {284.7635 204.906}
gui_select -next -point {284.7635 204.906}
gui_select -next -point {284.7635 204.906}
gui_select -next -point {284.7635 204.906}
gui_select -next -point {284.7635 204.906}
gui_select -next -point {284.7635 204.906}
gui_select -next -point {284.7635 204.906}
gui_select -next -point {284.7635 204.906}
gui_select -next -point {284.7635 204.906}
gui_select -next -point {284.7635 204.906}
gui_select -next -point {284.7635 204.906}
gui_select -next -point {284.7635 204.906}
gui_select -next -point {284.7635 204.906}
gui_select -next -point {284.7635 204.906}
gui_select -next -point {284.7635 204.906}
gui_select -next -point {284.7635 204.906}
gui_select -next -point {284.7635 204.906}
gui_select -next -point {284.7635 204.906}
gui_select -next -point {284.7635 204.906}
gui_select -next -point {284.7635 204.906}
gui_select -next -point {301.686 202.915}
gui_select -next -point {520.684 205.9015}
gui_select -next -point {748.641 217.847}
gui_select -next -point {774.523 221.8285}
gui_select -next -point {792.441 224.815}
gui_select -next -point {794.4315 224.815}
gui_select -next -point {805.3815 226.806}
gui_select -next -point {806.377 227.801}
gui_select -next -point {806.377 227.801}
gui_select -next -point {806.377 227.801}
gui_select -next -point {806.377 227.801}
gui_select -next -point {616.247 -117.6185}
gui_select -next -point {617.2425 -116.623}
gui_select -next -point {617.2425 -116.623}
gui_select -next -point {617.2425 -113.6365}
gui_select -next -point {617.2425 -108.6595}
gui_select -next -point {617.2425 -107.664}
gui_select -next -point {617.2425 -97.7095}
gui_select -next -point {617.2425 -96.714}
gui_select -next -point {603.306 -66.8505}
gui_select -next -point {586.3835 -25.042}
gui_select -next -point {568.4655 9.7985}
gui_select -next -point {561.4975 40.6575}
gui_select -next -point {542.584 83.4615}
gui_select -next -point {367.3855 177.0335}
gui_select -next -point {307.659 200.924}
gui_select -next -point {291.7315 229.792}
gui_select -next -point {285.759 243.7285}
gui_select -next -point {292.727 279.5645}
gui_select -next -point {299.6955 288.5235}
gui_select -next -point {299.6955 313.4095}
gui_select -next -point {298.7 337.3005}
gui_select -next -point {298.6995 337.3005}
gui_select -next -point {298.7 337.9115}
gui_select -next -point {298.7 337.9115}
gui_select -next -point {294.4205 340.3565}
gui_select -next -point {159.317 446.728}
gui_select -next -point {178.268 471.181}
gui_select -next -point {195.9965 476.683}
gui_select -next -point {197.8305 476.683}
gui_select -next -point {227.7855 471.181}
gui_select -next -point {229.0085 471.181}
gui_select -next -point {229.0085 471.181}
gui_select -next -point {228.397 471.181}
gui_select -next -point {220.45 464.4565}
gui_select -next -point {216.782 457.7315}
gui_select -next -point {213.114 439.392}
gui_select -next -point {212.5025 434.501}
gui_select -next -point {212.5025 434.501}
gui_select -next -point {212.5025 434.5015}
gui_select -next -point {212.5025 434.5015}
gui_select -next -point {212.5025 434.5015}
gui_select -next -point {212.5025 434.5015}
gui_select -next -point {212.5025 434.5015}
gui_select -next -point {212.5025 434.5015}
gui_select -next -point {212.5025 434.5015}
gui_select -next -point {212.5025 434.5015}
gui_select -next -point {210.3445 435.2205}
gui_select -next -point {210.3445 435.2205}
gui_select -next -point {209.6255 435.2205}
gui_select -next -point {209.6255 435.221}
gui_select -next -point {209.6255 435.221}
gui_select -next -point {207.6345 440.198}
gui_select -next -point {204.648 444.18}
gui_select -next -point {199.671 457.121}
gui_select -next -point {196.6845 483.0025}
gui_select -next -point {196.6845 491.9615}
gui_select -next -point {196.6845 498.9295}
gui_select -next -point {196.6845 508.884}
gui_select -next -point {196.6845 515.852}
gui_select -next -point {196.6845 515.852}
gui_select -next -point {217.589 429.2485}
gui_select -next -point {239.489 365.5395}
gui_select -next -point {259.398 324.7265}
gui_select -next -point {259.398 324.7265}
gui_select -next -point {259.398 324.7265}
gui_select -next -point {259.398 324.7265}
gui_select -next -point {258.4025 324.7265}
gui_select -next -point {257.407 324.7265}
gui_select -next -point {257.407 324.7265}
gui_select -next -point {257.407 324.7265}
gui_select -next -point {257.407 324.7265}
gui_select -next -point {253.425 296.854}
gui_select -next -point {258.4025 271.968}
gui_select -next -point {263.087 303.822}
gui_select -next -point {259.5735 320.042}
gui_select -next -point {258.4025 324.7265}
gui_select -next -point {254.8895 324.7265}
pan 64.880 -99.486
gui_select -next -point {208.045 397.3355}
gui_select -next -point {181.109 462.918}
gui_select -next -point {169.398 510.9335}
gui_select -next -point {169.398 529.6715}
gui_select -next -point {171.7405 535.527}
gui_select -next -point {171.7405 535.527}
gui_select -next -point {171.7405 535.527}
gui_select -next -point {174.0825 535.527}
gui_select -next -point {178.064 535.527}
gui_select -next -point {203.946 525.5725}
gui_select -next -point {212.905 524.577}
gui_select -next -point {215.891 524.577}
gui_select -next -point {215.891 524.577}
gui_select -next -point {215.891 524.577}
gui_select -next -point {215.8915 524.577}
gui_select -next -point {215.8915 524.577}
gui_select -next -point {221.8145 523.731}
gui_select -next -point {221.8145 523.731}
gui_select -next -point {222.5335 523.0115}
gui_select -next -point {226.8485 516.539}
gui_select -next -point {226.8485 516.539}
gui_select -next -point {226.8485 516.539}
gui_select -next -point {226.8485 516.539}
gui_select -next -point {226.8485 516.539}
gui_select -next -point {226.8485 516.539}
gui_select -next -point {226.8485 516.539}
gui_select -next -point {226.8485 516.539}
gui_select -next -point {231.128 516.539}
gui_select -next -point {256.1925 521.4295}
gui_select -next -point {259.8605 521.4295}
gui_select -next -point {259.8605 521.4295}
gui_select -next -point {259.8605 521.4295}
gui_select -next -point {259.8605 521.4295}
gui_select -next -point {259.8605 521.4295}
gui_select -next -point {262.978 521.949}
gui_select -next -point {242.7125 529.224}
gui_select -next -point {242.7125 529.224}
gui_select -next -point {232.32 531.822}
gui_select -next -point {213.094 533.9005}
gui_select -next -point {196.9855 533.9005}
gui_select -next -point {188.1515 533.9005}
gui_select -next -point {188.1515 533.9005}
gui_select -next -point {188.1515 533.9005}
gui_select -next -point {188.1515 533.9005}
gui_select -next -point {188.1515 533.9005}
gui_select -next -point {188.1515 533.9005}
gui_select -next -point {188.1515 533.9005}
gui_select -next -point {188.1515 533.9005}
gui_select -next -point {188.1515 533.9005}
gui_select -next -point {188.1515 533.9005}
gui_select -next -point {182.038 531.455}
gui_select -next -point {169.8115 524.7305}
gui_select -next -point {158.1965 507.002}
gui_select -next -point {153.3055 493.5525}
gui_select -next -point {153.3055 493.5525}
gui_select -next -point {153.3055 493.5525}
gui_select -next -point {153.3055 493.5525}
gui_select -next -point {153.3055 493.5525}
gui_select -next -point {152.4595 499.4755}
gui_select -next -point {152.4595 500.3215}
gui_select -next -point {152.4595 500.3215}
gui_select -next -point {152.4595 500.3215}
gui_select -next -point {152.4595 500.3215}
gui_select -next -point {152.4595 500.3215}
gui_select -next -point {152.4595 500.3215}
gui_select -next -point {152.4595 500.3215}
gui_select -next -point {152.4595 500.3215}
gui_select -next -point {152.4595 500.3215}
gui_select -next -point {152.4595 500.3215}
gui_select -next -point {153.3055 500.3215}
gui_select -next -point {156.69 500.3215}
gui_select -next -point {156.69 500.3215}
gui_select -next -point {156.69 500.3215}
gui_select -next -point {156.69 500.3215}
gui_select -next -point {156.69 500.3215}
gui_select -next -point {154.998 500.3215}
gui_select -next -point {160.0745 500.3215}
gui_select -next -point {160.075 500.3215}
gui_select -next -point {160.075 500.3215}
gui_select -next -point {162.613 500.3215}
gui_select -next -point {170.2285 495.2445}
gui_select -next -point {170.228 496.937}
gui_select -next -point {169.3825 498.6295}
gui_select -next -point {161.767 496.937}
gui_select -next -point {160.0745 497.783}
gui_select -next -point {154.998 500.3215}
pan 85.459 -19.461
gui_select -next -point {131.3065 526.5515}
gui_select -next -point {113.5375 538.3975}
gui_select -next -point {61.0775 564.6275}
gui_select -next -point {43.309 567.166}
gui_select -next -point {38.232 567.166}
gui_select -next -point {38.232 567.166}
gui_select -next -point {34.8475 540.936}
gui_select -next -point {34.8475 537.5515}
gui_select -next -point {37.386 518.0905}
gui_select -next -point {38.232 513.0135}
gui_select -next -point {42.4625 507.9365}
gui_select -next -point {46.6935 502.86}
gui_select -next -point {51.77 497.783}
gui_select -next -point {52.616 496.937}
gui_select -next -point {52.616 496.937}
gui_select -next -point {52.616 496.937}
gui_select -next -point {52.616 496.937}
gui_select -next -point {50.924 496.937}
gui_select -next -point {48.385 501.1675}
gui_select -next -point {38.232 516.398}
gui_select -next -point {39.0775 518.936}
gui_select -next -point {43.309 510.475}
gui_select -next -point {52.616 497.783}
gui_select -next -point {52.616 497.783}
gui_select -next -point {50.9235 501.1675}
gui_select -next -point {27.232 551.0895}
gui_select -next -point {50.924 502.0135}
gui_select -next -point {36.5395 526.5515}
gui_select -next -point {45.847 528.2435}
gui_select -next -point {54.308 509.629}
gui_select -next -point {54.308 509.629}
gui_select -next -point {52.616 497.783}
gui_select -next -point {52.616 497.783}
gui_select -next -point {52.616 497.783}
pan -94.767 189.534
gui_select -next -point {138.0755 359.0175}
gui_select -next -point {156.69 331.9415}
gui_select -next -point {171.9205 310.788}
gui_select -next -point {171.9205 310.788}
gui_select -next -point {171.9205 309.096}
gui_select -next -point {171.9205 307.4035}
gui_select -next -point {171.9205 307.4035}
gui_select -next -point {171.9205 307.4035}
gui_select -next -point {172.7665 307.4035}
gui_select -next -point {173.613 307.4035}
gui_select -next -point {173.613 307.4035}
gui_select -next -point {173.613 307.4035}
gui_select -next -point {173.613 306.5575}
gui_select -next -point {173.6125 305.5615}
gui_select -next -point {173.6125 305.5615}
gui_select -next -point {173.6125 305.5615}
gui_select -next -point {173.6125 305.5615}
gui_select -next -point {173.6125 305.5615}
gui_select -next -point {173.6125 305.5615}
gui_select -next -point {172.617 305.5615}
gui_select -next -point {170.6265 304.566}
gui_select -next -point {169.631 303.5705}
gui_select -next -point {169.631 303.5705}
gui_select -next -point {169.631 303.5705}
gui_select -next -point {169.631 303.5705}
gui_select -next -point {169.631 303.5705}
gui_select -next -point {169.631 303.5705}
gui_select -next -point {169.631 303.5705}
gui_select -next -point {169.631 303.5705}
gui_select -next -point {169.631 303.5705}
gui_select -next -point {169.631 303.5705}
gui_select -next -point {169.631 303.5705}
gui_select -next -point {169.631 303.5705}
gui_select -next -point {169.631 303.5705}
gui_select -next -point {169.631 303.5705}
gui_select -next -point {169.631 303.5705}
gui_select -next -point {169.631 303.5705}
gui_select -next -point {169.631 303.5705}
gui_select -next -point {169.631 303.5705}
gui_select -next -point {171.622 303.5705}
gui_select -next -point {170.6265 302.5755}
gui_select -next -point {180.581 294.6115}
gui_select -next -point {170.6265 302.575}
gui_select -next -point {170.6265 302.575}
gui_select -next -point {170.6265 302.575}
gui_select -next -point {170.6265 302.575}
gui_select -next -point {170.6265 302.575}
gui_select -next -point {170.6265 302.575}
gui_select -next -point {170.6265 302.575}
gui_select -next -point {170.6265 302.575}
gui_select -next -point {170.6265 302.575}
pan 13.936 -9.954
gui_select -next -point {170.6265 302.575}
gui_select -next -point {170.6265 303.5705}
gui_select -next -point {170.6265 303.5705}
gui_select -next -point {170.6265 304.566}
gui_select -next -point {170.6265 304.566}
gui_select -next -point {170.6265 303.5705}
gui_select -next -point {170.6265 303.5705}
gui_select -next -point {168.6355 302.575}
gui_select -next -point {158.681 316.5115}
gui_select -next -point {149.722 337.416}
gui_select -next -point {169.631 354.3385}
gui_select -next -point {186.554 404.111}
gui_select -next -point {207.458 523.565}
gui_select -next -point {272.1625 663.923}
gui_select -next -point {272.1625 663.923}
gui_select -next -point {310.985 599.219}
gui_select -next -point {654.415 204.026}
gui_select -next -point {926.1725 -154.336}
gui_select -next -point {926.1725 -154.336}
gui_select -next -point {926.1725 -154.336}
gui_select -next -point {926.1725 -154.336}
gui_select -next -point {1687.6905 -154.336}
gui_select -next -point {1687.6905 -145.377}
gui_select -next -point {1687.6905 -157.322}
gui_select -next -point {1687.6905 -157.322}
gui_select -next -point {1687.6905 -157.322}
gui_select -next -point {1687.6905 -161.304}
gui_select -next -point {1651.8545 -115.5135}
gui_select -next -point {1611.041 -84.6545}
gui_select -next -point {1607.0595 -86.6455}
gui_select -next -point {1594.1185 -88.636}
gui_select -next -point {1369.147 -163.295}
gui_select -next -point {1369.147 -163.295}
gui_select -next -point {1369.147 -163.295}
gui_select -next -point {1369.147 -163.295}
gui_select -next -point {1369.147 -163.295}
gui_select -next -point {1369.147 -163.295}
gui_select -next -point {1369.147 -163.295}
gui_select -next -point {1369.147 -163.295}
gui_select -next -point {1369.147 -163.295}
gui_select -next -point {1369.147 -163.295}
gui_select -next -point {1369.147 -163.295}
gui_select -next -point {1369.147 -163.295}
gui_select -next -point {1369.147 -163.295}
gui_select -next -point {1369.147 -163.295}
gui_select -next -point {1369.147 -163.295}
gui_select -next -point {1369.147 -163.295}
gui_select -next -point {1369.147 -163.295}
gui_select -next -point {1369.147 -163.295}
gui_select -next -point {1369.147 -163.295}
