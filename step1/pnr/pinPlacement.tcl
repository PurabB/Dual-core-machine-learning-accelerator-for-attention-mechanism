setPinAssignMode -pinEditInBatch true

# --- WEST (Left) Pins: clk, reset, inst[16:0], mem_in[63:0] ---
set west_pins {clk reset}
for {set i 0} {$i < 17} {incr i} { lappend west_pins "inst[$i]" }
for {set i 0} {$i < 64} {incr i} { lappend west_pins "mem_in[$i]" }

# Use Layer 3 (Metal3) for Horizontal tracks on West side
editPin -pinWidth 0.1 -pinDepth 0.5 -fixOverlap 1 -unit MICRON \
        -spreadDirection clockwise -side Left -layer 3 \
        -spreadType center -spacing 0.2 -pin $west_pins

# --- SOUTH (Bottom) Pins: out[159:0] ---
set south_pins {}
for {set i 0} {$i < 160} {incr i} { lappend south_pins "out[$i]" }

# Use Layer 2 (Metal2) for Vertical tracks on South side
editPin -pinWidth 0.1 -pinDepth 0.5 -fixOverlap 1 -unit MICRON \
        -spreadDirection clockwise -side Bottom -layer 2 \
        -spreadType center -spacing 0.2 -pin $south_pins

setPinAssignMode -pinEditInBatch false
