#include<stdio.h>
#include<stdlib.h>
#include "input.h"
#include<string.h>

char *subString(char *string,int start, int end){

  static char sub[100];
  memcpy( sub, &string[start], end-start );
  sub[end-start] = '\0';

  return sub;

}

char *pairStar(char *str){

  char *returnStr = malloc(1000);
  char holder[200] = {0};
  printf("holder first is %s\n",holder );

  if(strlen(str)<=1){

    return str;
  }

  if(str[0] == str[1]){

    strncat(holder, &(str[0]),1);
    strcat(holder, "*");

    strcat(holder, pairStar(subString(str, 1, strlen(str))));

    printf("holder is %s\n",holder );


    printf("strcpy result is %s\n", strcpy(returnStr, holder));
    printf("returnStr is %s\n", returnStr);
    return returnStr;

  }

  //add the first letter to the return variable
  strncat(holder, &str[0],1);

  strcat(holder, pairStar(subString(str, 1, strlen(str))));

  printf("holder is %s\n",holder );

  printf("strcpy result is %s\n", strcpy(returnStr, holder));
  printf("returnStr is %s\n", returnStr);
  return returnStr;

}

int main(){

  char *input = "aaabbb";

  printf("Output is %s\n", pairStar(input) );

  return 0;

}
