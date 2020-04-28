#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int input(int *target){

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
          printf("token at %d is %d\n", i, atoi(token));

        }

        i++;
      }

      //i is the length of the array
      return i;

}

void main(){

  int *array = malloc(1000);

  int length = input(array);

  printf("%d %d %d size is %d\n",array[0], array[1],array[2], sizeof(&array)/sizeof(&array[0]));


}
