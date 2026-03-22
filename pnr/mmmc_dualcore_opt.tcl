#------------------------------------------------------
# MMMC (Multi-Mode Multi-Corner) Setup for Optimized Dual Core
# Step 5: Uses optimized SDC with MCP constraints
#------------------------------------------------------
set lib_path "/home/linux/ieng6/ECE260B_WI26_A00/public/PDKdata/lib"

create_library_set -name WC_libs -timing [list $lib_path/tcbn65gpluswc.lib]
create_library_set -name BC_libs -timing [list $lib_path/tcbn65gplusbc.lib]
create_library_set -name TC_libs -timing [list $lib_path/tcbn65gplustc.lib]

create_rc_corner -name RC_worst -T 125
create_rc_corner -name RC_best  -T -40
create_rc_corner -name RC_typ   -T 25

create_delay_corner -name WC_corner -library_set WC_libs -rc_corner RC_worst
create_delay_corner -name BC_corner -library_set BC_libs -rc_corner RC_best
create_delay_corner -name TC_corner -library_set TC_libs -rc_corner RC_typ

# Use optimized SDC with MCP constraints
create_constraint_mode -name func_mode -sdc_files {../synthesis/outputs/fullchip_opt.sdc}

create_analysis_view -name WC_view -constraint_mode func_mode -delay_corner WC_corner
create_analysis_view -name BC_view -constraint_mode func_mode -delay_corner BC_corner
create_analysis_view -name TC_view -constraint_mode func_mode -delay_corner TC_corner

# Setup: check WC and TC (target 0 WNS at TC)
# Hold: check BC (target 0 WNS at BC/FAST)
set_analysis_view -setup {WC_view TC_view} -hold {BC_view}
