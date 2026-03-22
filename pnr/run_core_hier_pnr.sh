#!/bin/bash
# Step 3: Hierarchical Core PnR
# Usage: ssh UCSDServer -> input ECE260B_WI26_A00 -> cd pnr && source run_core_hier_pnr.sh

mkdir -p reports

innovus -files run_core_hier_pnr.tcl | tee core_hier_pnr.log
