#include<stdbool.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

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

int safeIntInput(char *query,int *target){

  bool safe = false;

  while(!safe){

    printf("%s", query);

    if(scanf("%d", target)!=0){
      safe = true;
    }
    else{
      printf("That didn't work. Try Again.\n");
    }

    fflush(stdin);

  }

  return 0;
}

int *safeIntArrayInput(char *query){

  bool safe = false;

  char *lineStr = malloc(1000);
  char *nums[100];
  char *token;

  static int returnInts[100];

  while(!safe){

    printf("%s", query);

    //get input from user and put it in lineStr
    fgets(lineStr, 1000, stdin);
    fflush(stdin);

    token = strtok(lineStr, " ");
    nums[0]=token;

    int i = 1;

    while(token != NULL){

      token = strtok(NULL, " ");

      nums[i]= token;
      i++;

    }

    for(int j = 0; j<=i; j++){

      //sscanf returns 0 if no vartiables are filled
      //if this function doesn't work then it is not a safe input, so I want safe to be false
      //(bool) of scanf when it doesn't work will return false
      //if at anytime it says false, I want safe to remain false
      //so I want to and all of the values
      safe = true;
      safe = safe&&((bool)sscanf(nums[j], "%d", returnInts[j]));

    }

  }

  return returnInts;


}
