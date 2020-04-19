#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#include "circles.h"
#include "distanceConverter.h"
#include "input.h"

int main(){

  bool running = true;
  int option = 10;

  while(running){

      printf("Select Part: ");
      scanf("%d", &option);
      fflush(stdin);

      switch (option) {

        //Part 1 is the circle Part
        case 1:;
          //setting up cirlce class functions
          CircleClass circle1;
          newCircle(circle1);

          //printf("X coordinate: ");
          safeDoubleInput("X coordinate: ",&(circle1.xCoor));

          //printf("Y coordinate: ");
          safeDoubleInput("Y coordinate: ",&(circle1.yCoor));

          //printf("Radius: ");
          safeDoubleInput("Radius: ",&(circle1.Radius));

          partAOutput(circle1);
          break;

        case 2:;

        //distanceConverter Section
        distanceConverter disConv;

        double inMeters;

        safeDoubleInput("How many meters: ", &inMeters);

        disConv.inputMeters = inMeters;

        getResults(&disConv);

        printf("Resuling miles: %.2f\n", disConv.resultMiles);
        printf("Resulting feet: %.2f\n", disConv.resultFeet );
        printf("Resulting inches: %.2f\n\n", disConv.resultInches);

          break;

        case 3:;

          //Part C: Read in a line of text from the user

          printf("Enter a Line of text (No Punctuation): ");

          char *lineStr = malloc(1000);

          //get input from user and put it in lineStr
          fgets(lineStr, 1000, stdin);
          fflush(stdin);

          printf("input is %s\n", lineStr);

          //the first strtok puts a NUll in the space, thus stopping the string there
          char *first = (strtok(lineStr, " "));

          //The second strtok starts from the last Null(where the space was),
          // and then goes to the end of the string because nothing matches ""
          char *last = (strtok(NULL, "\n"));

          //add a space after last so that there is a space between first and last
          strcat(last, " ");

          printf("%s\n",strcat(last, first) );

          break;

        case 4:
          running = false;
        break;

        default:
          printf("please select an option from 1-4.\n");

      }

  }

  return 0;
}
