#include <mpi.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char ** argv){
  int id, itr;
  char host[1024];
  
  itr = MPI_Init(&argc, &argv);
  
  itr = MPI_Comm_rank(MPI_COMM_WORLD, &id);
  
  gethostname(host, 1024);
  
  printf("I am rank %i in node %s.\n", id, host);
  
  MPI_Finalize();
  return 0;
}