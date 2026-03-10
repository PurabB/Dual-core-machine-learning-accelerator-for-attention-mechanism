getPinAssignMode -pinEditInBatch -quiet
setPinAssignMode -pinEditInBatch true
# Input ports from West (Left)
editPin -pinWidth 0.09 -pinDepth 0.47 -fixOverlap 1 -unit MICRON -spreadDirection clockwise -side Left -layer 1 -spreadType center -spacing 1.5 -pin {clk reset inst[*] mem_in[*]}
setPinAssignMode -pinEditInBatch false

getPinAssignMode -pinEditInBatch -quiet
setPinAssignMode -pinEditInBatch true
# Output ports from South (Bottom)
editPin -pinWidth 0.09 -pinDepth 0.47 -fixOverlap 1 -unit MICRON -spreadDirection clockwise -side Bottom -layer 1 -spreadType center -spacing 1.5 -pin {out[*]}
setPinAssignMode -pinEditInBatch false
