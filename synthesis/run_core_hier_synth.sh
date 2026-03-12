#!/bin/bash
# Step 3: Hierarchical Core Synthesis
# Usage: ssh UCSDServer -> input ECE260B_WI26_A00 -> cd synthesis && source run_core_hier_synth.sh

mkdir -p reports outputs

dc_shell -f run_core_hier_synth.tcl | tee core_hier_synth.log
