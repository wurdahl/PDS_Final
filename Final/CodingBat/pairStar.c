#include<stdio.h>
#include<stdlib.h>
#include "input.h"
#include<string.h>

//this function returns a substring of a given string
char *subString(char *string,int start, int end){

  static char sub[100];
  memcpy( sub, &string[start], end-start );
  sub[end-start] = '\0';

  return sub;

}

//this function recursively puts stars between the same letter in a string
char *pairStar(char *str){

  //A static variable is needed to return values
  char *returnStr = malloc(1000);

  //this variable will hold the temporary strings before returning
  //this is needed because I need a local variable for recursion
  char holder[200] = {0};

  //if the string is just one letter, then return itselfS
  if(strlen(str)<=1){

    return str;
  }

  //if the first letter is the same as the second letter, then return the first letter + a star then
  //pairstar of the rest of the string
  if(str[0] == str[1]){

    //concatenate the first letter and a star to holder
    strncat(holder, &(str[0]),1);
    strcat(holder, "*");

    //concatenate the pairStar of the rest of the string to holder
    strcat(holder, pairStar(subString(str, 1, strlen(str))));

    //copy the holder string to the return string
    strcpy(returnStr, holder);

    return returnStr;

  }

  //add the first letter to the return variable
  strncat(holder, &str[0],1);

  //add pairStar of the rest of the string to holder
  strcat(holder, pairStar(subString(str, 1, strlen(str))));

  //copy the holder string to the return string
  strcpy(returnStr, holder);

  return returnStr;

}

int main(){

  printf("This program takes in a string and recursively puts stars between repeated letters.\n", );

  printf("input string: ");

  char *input = malloc(1000);

  //get input from user and put it in lineStr
  fgets(input, 1000, stdin);
  fflush(stdin);


  printf("Output of pairStar is %s\n", pairStar(input) );

  return 0;

}
