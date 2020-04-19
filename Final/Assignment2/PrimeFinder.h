#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>
#include<math.h>

bool isPrime(int Num){
  double limit = sqrt((double)Num);

  bool prime = true;

  for(int i =2; i<=(int) limit; i++){

    if(Num%i==0){
      prime = false;
      break;
    }

  }

  return prime;
}

void primeList(int range){

  for(int i = 2; i<range; i++){
    if(isPrime(i)){
      printf("%d ", i);
    }

  }
  printf("\n");
}
