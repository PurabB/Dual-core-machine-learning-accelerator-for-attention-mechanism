#!/bin/bash
# Step 3: SRAM Hierarchical PnR
# Usage: ssh UCSDServer -> input ECE260B_WI26_A00 -> cd pnr && source run_sram_pnr.sh

mkdir -p reports

innovus -files run_sram_pnr.tcl | tee sram_pnr.log
