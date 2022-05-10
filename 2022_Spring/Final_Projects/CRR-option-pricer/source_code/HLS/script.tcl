open_project FINALPROJECT

# this is your top module 
set_top top

# this is your file that to be synthesized as FPGA design
add_files top.cpp
# this is your testbench (specified by -tb option)
add_files -tb main.cpp

open_solution "solution1"

set_part {xc7z020clg400-1}
create_clock -period 10 -name default

# synthesis
csynth_design

# -evaluate option enables C/RTL cosim
#export_design -evaluate verilog -format ip_catalog

# export IP to Vivado
# Currently we're not exporting to FPGA so this command is commented;
# if you want to try it on FPGA, please uncomment it
#export_design -format ip_catalog

exit