#include <stdlib.h>
#include <stdio.h>
#include "PrimeFinder.h"
#include <stdbool.h>

int main(){

  int testInteger;
  bool running = true;

  int range;

  while(running){

    printf("Enter option: ");
    scanf("%d", &testInteger);

    switch (testInteger) {
      case 1:
        //Interest Rate Calculator
        printf("%d\n", 1);

        break;

      case 2:
        //Multiplication table
        break;

      case 3:
        //Prime Lister
        printf("Up to what number do you want to find primes: ");

        scanf("%d",&range);
        fflush(stdin);

        primeList(range);

        break;

      case 4:
        //TimeConverter
        break;

      case 5:
        running = false;
     }

    }

    return 0;
  }
