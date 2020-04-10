#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main(){

  char s[] = "hello my name is bob.";

  char *a = strtok(s," ");

  char *b = strtok(NULL, "");
  printf("%s\n", strcat(b,a));


  return 0;
}
