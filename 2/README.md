For stat.c, there are 4 command line arguments. Arg1 is the lower bound, arg2 is the upper bound, arg3 will be the number of points, and arg4 is the
intensity.

To compile without errors, you will need to use:

mpicc -o stat stat.c -lm

Each script file is named with the number of processes it will use (srcipt1.pbs, script2.pbs, etc)

Output from script files on Mamba:

0, 10^3, 10^3, 10, 1 process
Time: 17456
0, 10^3, 10^3, 1000, 1 process
Time: 14811
0, 10^3, 10^9, 10, 1 process
Time: 19675777
0, 10^3, 10^9, 1000, 1 process
Time: 2045170045

0, 10^3, 10^3, 10, 2 processes
Time: 16446
0, 10^3, 10^3, 1000, 2 processes
Time: 17649
0, 10^3, 10^9, 10, 2 processes
Time: 10175717
0, 10^3, 10^9, 1000, 2 processes
Time: 1041469824

0, 10^3, 10^3, 10, 4 processes
Time: 23811
0, 10^3, 10^3, 1000, 4 processes
Time: 23916
0, 10^3, 10^9, 10, 4 processes
Time: 5110454
0, 10^3, 10^9, 1000, 4 processes
Time: 522146503

0, 10^3, 10^3, 10, 8 processes
Time: 39634
0, 10^3, 10^3, 1000, 8 processes
Time: 35084
0, 10^3, 10^9, 10, 8 processes
Time: 2572925
0, 10^3, 10^9, 1000, 8 processes
Time: 261081235

0, 10^3, 10^3, 10, 16 processes
Time: 43143
0, 10^3, 10^3, 1000, 16 processes
Time: 39475
0, 10^3, 10^9, 10, 16 processes
Time: 1307580
0, 10^3, 10^9, 1000, 16 processes
Time: 130553011

0, 10^3, 10^3, 10, 32 processes
Time: 64104
0, 10^3, 10^3, 1000, 32 processes
Time: 58435
0, 10^3, 10^9, 10, 32 processes
Time: 764976
0, 10^3, 10^9, 1000, 32 processes
Time: 66859846