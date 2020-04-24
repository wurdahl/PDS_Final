#include<stdio.h>
#include<stdlib.h>
#include "input.h"
#include<string.h>

int strLength(char *str){

  int length = 0;

  while(*str != '\0'){

    length++;
    str++;

  }

  return length;

}

char *subString(char *string,int start, int end){

  static char sub[100];
  memcpy( sub, &string[start], end-start );
  sub[end-start] = '\0';

  return sub;

}


char *pairStar(char *str){

  char *star = "*";
  static char holder[50];

  if(strLength(str)<=1){
    //printf("here\n");

    return str;
  }

  if(str[0] == str[1]){

    //printf("here1");


    strncat(holder, &(str[0]),1);
    strcat(holder, star);

    char *next = pairStar(subString(str, 1, strLength(str)));

    strcat(holder, next);

    return holder;

  }

  strncat(holder, &str[0],1);
  char *next = pairStar( subString(str,1, strLength(str)) );
  strcat(holder, next);

  return holder;


}

int main(){

  char *output = pairStar("aaaa");

  printf("%s\n",output );

  return(0);

}
