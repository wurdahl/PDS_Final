#include<stdbool.h>
#include<stdio.h>
#include<stdlib.h>

int safeDoubleInput(char *query,double *target){

  //initally the input is assumed to be bad
  bool safe = false;

  while(!safe){

    printf("%s", query);

    //This tries to find a double in the input and assign it to the target
    //if it succeds safe is set to true and the loop is exited
    if(scanf("%lf", target)!=0){
      safe = true;
    }
    else{
      printf("That didn't work. Try Again.\n");
    }

    //this flushes the input so that there isn't anything unexpected in the input
    fflush(stdin);

  }

  return 0;
}
