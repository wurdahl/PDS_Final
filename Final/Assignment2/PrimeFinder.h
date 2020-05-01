#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>
#include<math.h>

//This function returns true is a number is prime and false if it is composite
bool isPrime(int Num){
  double limit = sqrt((double)Num);

  bool prime = true;

  for(int i =2; i<=(int) limit; i++){

    //if there is a number between 2 and the sqrt of the number, then it is composite
    if(Num%i==0){
      prime = false;
      break;
    }

  }

  return prime;
}

//this function finds all numbers from 2 to a certain number that are prime
void primeList(int range){

  for(int i = 2; i<range; i++){
    if(isPrime(i)){
      printf("%d ", i);
    }

  }
  printf("\n");
}
