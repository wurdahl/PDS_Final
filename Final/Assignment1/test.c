#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

  char *num = "5.3\n";
  char *input;

  fgets(input, 100, stdin);

  const char *num1 = num;
  const char *input1 = input;

  if(strcmp(num1,input1)==0){
    puts("These are the same string");
  }else{
    puts("These aren't the same string");
    printf("the size of num is %i\n", sizeof(num1));
    printf("the size of input is %i\n", sizeof(input1));
  }

  printf("%f\n", atof(input1));
  printf("%f\n", strtod(input1, '\0'));

  return 0;
}
