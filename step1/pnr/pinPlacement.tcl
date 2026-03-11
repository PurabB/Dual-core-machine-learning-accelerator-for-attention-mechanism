getPinAssignMode -pinEditInBatch -quiet
setPinAssignMode -pinEditInBatch true

# Input ports from West (Left) - Using Layer 3 (Horizontal)
editPin -pinWidth 0.1 -pinDepth 0.5 -fixOverlap 1 -unit MICRON -spreadDirection clockwise -side Left -layer 3 -spreadType center -spacing 0.2 -pin {clk reset inst[*] mem_in[*]}
setPinAssignMode -pinEditInBatch false

getPinAssignMode -pinEditInBatch -quiet
setPinAssignMode -pinEditInBatch true
# Output ports from South (Bottom) - Using Layer 2 (Vertical)
editPin -pinWidth 0.1 -pinDepth 0.5 -fixOverlap 1 -unit MICRON -spreadDirection clockwise -side Bottom -layer 2 -spreadType center -spacing 0.2 -pin {out[*]}
setPinAssignMode -pinEditInBatch false
