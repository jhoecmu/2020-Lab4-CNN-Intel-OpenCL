Use "$ECE643/scripts/run.sh lab4_ref" to tryout the pre-build x86 binary and FPGA bitstream of the reference solution.

Use this folder's host directory with an updated kernl643.h if you want to build your own host program to test the reference solution. To build, first setup your environment by running "source $ECE643/inteldevstack/init_env.sh" and then "make", the bin/host file should be updated if you changed the source. The kernel assumes K=3 and S=1 as defined in Lab 4's instance643.h. 

Notice that among other changes, this version of kernel.h allows R, C, M and N to be runtime variables.  You do not need to do this for Lab 4 except for bonus attempt.
