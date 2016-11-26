For stat.c, there are 4 command line arguments. Arg1 is the lower bound, arg2 is the upper bound, arg3 will be the number of points, and arg4 is the
intensity.

To compile without errors, you will need to use:

mpicc -o stat stat.c -lm

Each script file is named with the number of processes it will use (srcipt1.pbs, script2.pbs, etc)

Output from script files on Mamba:

0, 10^3, 10^3, 10, 1 process
Time: 17722
0, 10^3, 10^3, 1000, 1 process
Time: 14710
0, 10^3, 10^9, 10, 1 process
Time: 19202414
0, 10^3, 10^9, 1000, 1 process
Time: 2116505064

