#!/bin/bash
# Step 1: Single Core Synthesis
# Usage: ssh UCSDServer -> input ECE260B_WI26_A00 -> cd synthesis && source run_dc.sh

mkdir -p reports outputs

dc_shell -f run_dc.tcl | tee dc.log
