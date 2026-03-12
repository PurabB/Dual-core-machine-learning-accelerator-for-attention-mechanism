#!/bin/bash
# Step 4: Dual Core Synthesis
# Usage: ssh UCSDServer -> input ECE260B_WI26_A00 -> cd synthesis && source run_dualcore_synth.sh

mkdir -p reports outputs

dc_shell -f run_dualcore_synth.tcl | tee dualcore_synth.log
