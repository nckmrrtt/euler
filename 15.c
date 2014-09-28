
/*project euler problem 15, which involves finding paths through a lattice.
 *I think you can do it using pascal's triangle?!?! Let's find out...
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {

  int size, i, j;
  //  int[][] triangle;

  if (argc <= 1){
    printf("usage: 15 arg, where arg is the size of lattice grid\n");
    return (0);
  } else {
    size = atoi(argv[1]);
  }

  i = 0;
  long int triangle[size*2-1][size*2-1];
  triangle[0][0] = 2;

  /*
   *pascal's triangle has 1's bordering it, but I think storing all of those is
   *a bit stupid so we'll store everything but the ones.
   */
 
  for (i = 1; i <= size*2-2; i++) {
    triangle[i][0] = 1 + triangle[i-1][0];
    triangle[i][i] = 1 + triangle[i-1][i-1];
    for (j = 1; j < i; j++){
      triangle[i][j] = triangle[i-1][j-1] + triangle[i-1][j];
    }
  }

  /*uncomment to see the triangle*/
  /*
  for (i = 0; i <= size*2-2; i++) {
    printf("%d: ",i);
    for (j = 0; j <= i; j++) {
      printf("%ld ",triangle[i][j]);
    }
    printf("\n");
  }
  */

  printf("paths: %ld\n",triangle[size*2-2][size-1]);

}
