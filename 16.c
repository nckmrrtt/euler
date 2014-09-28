/*
 *this is a brute force solution to adding up the digits of the powers of two...
 *there's gotta be a better way though.
 */



#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char* argv[]){

  int i, result;
  long long int numba;
  //int numba;

  if (argc == 1) {
    printf("fool\n");
    return(0);
  } else {

    for (i=1; i<argc; i++) {

      printf("i = %d\n# = %s\n",i,argv[i]);

      numba = pow(2,atoi(argv[i]));
      result = 0;
      printf("p = %lld\n",numba);
      //printf("p = %d\n",numba);
  
      while (numba > 0) {
	result += numba % 10;
	numba /= 10;
      }
      printf("r = %d\n\n",result);
    }
  }
}

  
