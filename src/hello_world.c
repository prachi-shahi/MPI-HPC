#include "mpi.h"
#include <stdio.h>

void main(int argc, char** argv) {
  int size, taskid;
	printf("Hello World");	
  MPI_Init(&argc, &argv);
  MPI_Comm_size(MPI_COMM_WORLD, &size);			
  MPI_Comm_rank(MPI_COMM_WORLD, &taskid);

  if (taskid == 0) {
    printf("Master task has been started.\n");
  } else {
    printf("Worker task of rank %d has been started.\n", taskid);
  }

  MPI_Finalize();
}
