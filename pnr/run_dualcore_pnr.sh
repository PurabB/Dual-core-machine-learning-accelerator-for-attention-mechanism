#!/bin/bash
# Step 4: Dual Core PnR
# Usage: ssh UCSDServer -> input ECE260B_WI26_A00 -> cd pnr && source run_dualcore_pnr.sh

mkdir -p reports

innovus -files run_dualcore_pnr.tcl | tee dualcore_pnr.log
