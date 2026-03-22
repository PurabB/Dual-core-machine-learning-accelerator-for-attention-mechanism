set_clock_latency -source -early -max -rise  -0.234875 [get_ports {clk0}] -clock clk0 
set_clock_latency -source -early -max -fall  -0.22758 [get_ports {clk0}] -clock clk0 
set_clock_latency -source -late -max -rise  -0.234875 [get_ports {clk0}] -clock clk0 
set_clock_latency -source -late -max -fall  -0.22758 [get_ports {clk0}] -clock clk0 
set_clock_latency -source -early -max -rise  -0.21882 [get_ports {clk1}] -clock clk1 
set_clock_latency -source -early -max -fall  -0.215079 [get_ports {clk1}] -clock clk1 
set_clock_latency -source -late -max -rise  -0.21882 [get_ports {clk1}] -clock clk1 
set_clock_latency -source -late -max -fall  -0.215079 [get_ports {clk1}] -clock clk1 
