#include <stdio.h>
#include <time.h>
#include <sys/time.h>
#include <stdlib.h>
#include <math.h>
#include <mpi.h>

double f (double n, int x) {
  double y=n;
  int i;
  for (i=0; i<x; i++) {
    y = pow(1, 2.0);
    y = sqrt(1);
  }
  return y;
}

double integrate (int a, int b, int n, int x) {
  int i;
  double sol;
  
  for (i=0; i<n; i++) {
    double num = a+(i+0.5)*((b-a)/n);
    sol += f(num, x)*((b-a)/n);
  }
  return sol;
}

int main(int argc, char *argv[]) {
  if(argc != 5) {
    printf("Incorrect number of arguments.\n");
  }
  else {
    int low, high, points, inten, dest, id, rank, p, source, tag, i;
    double sol, result;
    dest = 0;
    low = atoi(argv[1]);
    high = atoi(argv[2]);
    points = atoi(argv[3]);
    inten = atoi(argv[4]);
    tag = 67;
    MPI_Status status;
    struct timeval start, end;
    
    gettimeofday(&start, NULL);
    
    MPI_Init(&argc, &argv);
    MPI_Comm_rank(MPI_COMM_WORLD, &id);
    MPI_Comm_size(MPI_COMM_WORLD, &p);
    
    sol = integrate(low, high, points, inten);
    
    if(id = 0){
      result = sol;
      for(i=1; i<p; i++){
        source = i;
        MPI_Recv(&sol, 1, MPI_DOUBLE, source, tag, MPI_COMM_WORLD, &status);
        result += sol;
      }
    }
    else {
      MPI_Send(&sol, 1, MPI_DOUBLE, dest, tag, MPI_COMM_WORLD, &status);
    }
    
    MPI_Finalize();
    gettimeofday(&end, NULL);
    printf("Time: %ld\n", ((end.tv_sec * 1000000 + end.tv_usec)-(start.tv_sec * 1000000 + start.tv_usec)));
  }
  
  
  return 0;
}