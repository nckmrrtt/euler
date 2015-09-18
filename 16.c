/*
 * adds the digits in a power of 2.
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char* argv[]){

  int i, j, result;
  double n;

  if (argc == 1) {
    printf("not enough args\n");
    return(0);
  } else {

    for (i=1; i<argc; i++) {

      //printf("arg %d = %s\n",i,argv[i]);
      n = pow(2,atof(argv[i]));

      int digits = log10(n)+1;
      //printf("%d digits in %.0f\n",digits,n);
      char n_str[digits+1];
      sprintf(n_str, "%.0f", n);
      //printf("n_str = %s\n",n_str);
      
      result = 0;
      for (j=0; j<sizeof(n_str)-1; j++){
	char c = n_str[j];
	int k = c - '0';
	//printf("num = %d\n",k);
	result += k;
      }
      printf("\nsum of the %d digits in \n\n%s\n\nis %d\n\n",digits,n_str,result);
    }
  }
}


  //  char numbo[] = "10715086071862673209484250490600018105614048117055336074437503883703510511249361224931983788156958581275946729175531468251871452856923140435984577574698574803934567774824230985421074605062371141877954182153046474983581941267398767559165543946077062914571196477686542167660429831652624386837205668069376";
 
  // char numbo[] = "32768";

