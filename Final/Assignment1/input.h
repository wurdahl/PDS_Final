#include<stdbool.h>

int safeDoubleInput(double *target){

  bool safe = false;

  while(!safe){

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

int safeStringInput(char *target){

  bool safe = false;

  while(!safe){

    if(scanf("%c", target)!=0){
      safe = true;
    }
    else{
      printf("That didn't work. Try Again.\n");
    }

    fflush(stdin);

  }

  return 0;
}
