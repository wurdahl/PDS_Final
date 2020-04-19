#include<stdbool.h>
#include<stdio.h>
#include<stdlib.h>

int safeDoubleInput(char *query,double *target){

  bool safe = false;

  while(!safe){

    printf("%s", query);

    if(scanf("%lf", target)!=0){
      safe = true;
    }
    else{
      printf("That didn't work. Try Again.\n");
    }

    fflush(stdin);

  }

  return 0;
}
