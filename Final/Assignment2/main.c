#include <stdlib.h>
#include <stdio.h>
#include "PrimeFinder.h"
#include <stdbool.h>
#include "MultiTable.h"
#include "input.h"
#include "timeConverter.h"
#include "interestRateTable.h"

int main(){

  printf("this program does 4 things. Option 1 creates a table investments at different interest rates\n");
  printf("for a certain principle. Option 2 creates a multiplication table given a starting value and ending value.\n");
  printf("Option 3 prints out all prime number up to a given integer value. Option 4 converts a given amount of seconds\n");
  printf("into an equivalent amount of Days, hours, minutes, and seconds. Option 5 exits from the program.\n");

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

        safeIntInput("start value of Multiplication table: ", &min);
        safeIntInput("end value of Multiplication table: ", &max);

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

        //initiallize a timeConverter strcut with all zero values
        TimeConverter timeConverter= {0,0,0,0,0};

        safeIntInput("Seconds to be coverted: ", &(timeConverter.inSeconds));

        //this function fills in all time values in the struct
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
