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

int safeIntArrayInput(char *query, int *target){

  //print the inquiry
  printf("%s", query);

  char *lineStr = malloc(1000);
  char *token;

  fgets(lineStr, 1000, stdin);
  fflush(stdin);

  token = strtok(lineStr, " ");
  target[0]= atoi(token);

  int i = 1;

  while(token != NULL){
    token = strtok(NULL, " ");

    //If is needed because while it checks the current for NULL,
    //The next token could be null
    if(token!=NULL){

      target[i]= atoi(token);

    }

    i++;
  }

  //i is the length of the array
  return i;

}
