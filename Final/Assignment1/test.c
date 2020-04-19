#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main(){

  char *tar= malloc(1000);

  if(fgets(tar, 100, stdin)=='\0'){
    printf("end of file\n");
  }

  puts(tar);

  //printf("output: %d\n", fgets(tar, 100, stdin) );

  return 0;
}
