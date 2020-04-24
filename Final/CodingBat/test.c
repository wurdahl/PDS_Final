#include<stdio.h>
#include<stdlib.h>
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
  char *holder ="";

  if(strLength(str)<=1){
    printf("here\n");

    return str;
  }

  if(str[0] == str[1]){

    printf("here1\n");

    strcat(holder, &str[0]);
    strcat(holder, star);
    strcat(holder, pairStar(subString(str, 1, strLength(str))));
    return holder;

  }

  strcat(holder, &str[0]);
  strcat(holder, pairStar( subString(str, 1, strLength(str))));

  printf("here3\n");

  return holder;

}

int main(){

  char *buff = "this is a test string";
  char *a = "aabaa";

  printf("%s\n", pairStar(a));

  //printf("%c and %c\n", buff[0], buff[1]);

  return 0;

}
