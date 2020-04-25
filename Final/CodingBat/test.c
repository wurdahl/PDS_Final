#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char *returnStr(char *str){

  char *returnString = malloc(1000);
  char holder[10]={0};

  if(strlen(str)<=1)
  {
    return str;
  }

  strncat(holder, &str[0],1);
  printf("h1 %s\n", holder);

  strcat(holder, returnStr(&str[1]));
  printf("h2 %s\n", holder);

  strcpy(returnString, holder);
  printf("h3 %s\n", returnString);

  return returnString;

}

void main(){

  printf("%s\n", returnStr("abcd"));

}
