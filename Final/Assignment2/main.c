#include <stdlib.h>
#include <stdio.h>
#include "PrimeFinder.h"
#include <stdbool.h>
#include "MultiTable.h"
#include "input.h"
#include "timeConverter.h"
#include "interestRateTable.h"

int main(){

  int testInteger;
  bool running = true;

  int range;

  while(running){

    printf("Enter option: ");
    scanf("%d", &testInteger);

    switch (testInteger) {
      case 1:;
        //Interest Rate Calculator

        double principalInput;

        int yearStartInput;
        int yearEndInput;

        int rateStartInput;
        int rateEndInput;

        safeDoubleInput("principal: ", &principalInput);

        safeIntInput("Start year: ", &yearStartInput);
        safeIntInput("End year: ", &yearEndInput);

        safeIntInput("rate start: ", &rateStartInput);
        safeIntInput("rate end: ", &rateEndInput);

        makeInterestTable(principalInput, yearStartInput, yearEndInput, rateStartInput, rateEndInput);

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

      case 4:;
        //TimeConverter

        TimeConverter timeConverter= {0,0,0,0,0};

        safeIntInput("Seconds to be coverted: ", &(timeConverter.inSeconds));

        convertTime(&timeConverter);

        printf("%d seconds equals %d days, %d hours, %d minutes, and %d seconds\n",timeConverter.inSeconds, timeConverter.outDays, timeConverter.outHours,timeConverter.outMinutes, timeConverter.outSeconds);


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
