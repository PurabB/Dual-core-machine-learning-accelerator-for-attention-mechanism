#!/bin/bash
# Step 1: Single Core PnR
# Usage: ssh UCSDServer -> input ECE260B_WI26_A00 -> cd pnr && source run_pnr.sh

mkdir -p reports

innovus -files run_pnr.tcl | tee pnr.log
