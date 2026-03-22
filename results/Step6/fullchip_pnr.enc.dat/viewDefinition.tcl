if {![namespace exists ::IMEX]} { namespace eval ::IMEX {} }
set ::IMEX::dataVar [file dirname [file normalize [info script]]]
set ::IMEX::libVar ${::IMEX::dataVar}/libs

create_library_set -name TC_libs\
   -timing\
    [list ${::IMEX::libVar}/mmmc/tcbn65gplustc.lib]
create_library_set -name WC_libs\
   -timing\
    [list ${::IMEX::libVar}/mmmc/tcbn65gpluswc.lib]
create_library_set -name BC_libs\
   -timing\
    [list ${::IMEX::libVar}/mmmc/tcbn65gplusbc.lib]
create_rc_corner -name RC_typ\
   -preRoute_res 1\
   -postRoute_res 1\
   -preRoute_cap 1\
   -postRoute_cap 1\
   -postRoute_xcap 1\
   -preRoute_clkres 0\
   -preRoute_clkcap 0\
   -T 25
create_rc_corner -name RC_best\
   -preRoute_res 1\
   -postRoute_res 1\
   -preRoute_cap 1\
   -postRoute_cap 1\
   -postRoute_xcap 1\
   -preRoute_clkres 0\
   -preRoute_clkcap 0\
   -T -40
create_rc_corner -name RC_worst\
   -preRoute_res 1\
   -postRoute_res 1\
   -preRoute_cap 1\
   -postRoute_cap 1\
   -postRoute_xcap 1\
   -preRoute_clkres 0\
   -preRoute_clkcap 0\
   -T 125
create_delay_corner -name TC_corner\
   -library_set TC_libs\
   -rc_corner RC_typ
create_delay_corner -name BC_corner\
   -library_set BC_libs\
   -rc_corner RC_best
create_delay_corner -name WC_corner\
   -library_set WC_libs\
   -rc_corner RC_worst
create_constraint_mode -name func_mode\
   -sdc_files\
    [list ${::IMEX::dataVar}/mmmc/modes/func_mode/func_mode.sdc]
create_analysis_view -name TC_view -constraint_mode func_mode -delay_corner TC_corner -latency_file ${::IMEX::dataVar}/mmmc/views/TC_view/latency.sdc
create_analysis_view -name WC_view -constraint_mode func_mode -delay_corner WC_corner -latency_file ${::IMEX::dataVar}/mmmc/views/WC_view/latency.sdc
create_analysis_view -name BC_view -constraint_mode func_mode -delay_corner BC_corner -latency_file ${::IMEX::dataVar}/mmmc/views/BC_view/latency.sdc
set_analysis_view -setup [list WC_view TC_view] -hold [list BC_view]
