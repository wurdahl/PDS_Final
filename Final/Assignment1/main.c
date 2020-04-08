#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#include "circles.h"
#include "distanceConverter.h"

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

          printf("X coordinate: ");
          scanf("%lf", &(circle1.xCoor));

          //clear buffer
          fflush(stdin);

          printf("Y coordinate: ");
          scanf("%lf", &(circle1.yCoor));
          fflush(stdin);

          printf("Radius: ");
          scanf("%lf", &(circle1.Radius));
          fflush(stdin);

          partAOutput(circle1);
          break;
        case 4:
          running = false;
      }

  }



  // //distanceConverter Section
  // distanceConverter disConv;
  //
  // printf("How many meters: ");
  //
  // char *metersStr;
  // metersStr = malloc(1000);
  //
  // gets(metersStr);
  //
  // disConv.inputMeters = strtod(metersStr, '\0');
  //
  // getResults(&disConv);
  //
  // printf("Resuling miles: %.2f\n", disConv.resultMiles);
  // printf("Resulting feet: %.2f\n", disConv.resultFeet );
  // printf("Resulting inches: %.2f\n\n", disConv.resultInches);

  //Part C: Read in a line of text from the user

  // printf("Enter a Line of text (No Punctuation): ");
  //
  // char *lineStr;
  // char first[50];
  // char last[50];
  //
  // lineStr = malloc(100);
  //
  // //get input from user and put it in lineStr
  // gets(lineStr);
  //
  // //copy input to a new string which is then cut to th first space
  // strcpy(first, lineStr);
  // strcpy(first, strtok(first, " "));
  //
  // int offset = strlen(first);
  //
  // printf("%d\n", strlen(lineStr));
  //
  // for(int i = offset; i<strlen(lineStr) ;i++){
  //
  //   last[i-offset] = lineStr[i];
  //
  // }
  //
  // puts(first);
  // printf("%s\n", last);
  //
  // free(lineStr);

  return 0;
}
