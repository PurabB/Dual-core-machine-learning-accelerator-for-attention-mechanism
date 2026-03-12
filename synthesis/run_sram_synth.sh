#!/bin/bash
# Step 3: SRAM Hierarchical Synthesis
# Usage: ssh UCSDServer -> input ECE260B_WI26_A00 -> cd synthesis && source run_sram_synth.sh

mkdir -p reports outputs

dc_shell -f run_sram_synth.tcl | tee sram_synth.log
