#include <stdlib.h>
#include <stdio.h>
#include "PrimeFinder.h"
#include <stdbool.h>
#include "MultiTable.h"
#include "input.h"

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

      case 2:;

        int min;
        int max;

        safeIntInput("Min value of Multiplication table: ", &min);
        safeIntInput("Max value of Multiplication table: ", &max);

        printf("\n");

        multiTable(min,max);

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
        break;

      default:
        printf("Thats not an option. Please select something from 1-5.\n");

     }

     fflush(stdin);

    }

    return 0;
  }
