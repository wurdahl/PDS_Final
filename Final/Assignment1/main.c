#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#include "circles.h"
#include "distanceConverter.h"
#include "input.h"

int main(){

  //memory allocation for the name of user and input of name
  char *name = malloc(100);

  printf("What is your name: ");
  scanf("%s", &name);
  fflush(stdin);

  //running is the boolean that tell the loop to keep running. In order to end the program, it will be set to false.
  bool running = true;
  //option is the holder of the inputed option from the user
  int option = 10;

  printf("Hello, %s. This program does a few things. Option 1 takes in the x y coordinates and the rdius of a \ncircle. ", &name);
  printf("It will then print out the location, area nd circumfrence of the circle. It will also print out the\n");
  printf("volume and surface area of a sphere of the same radius. Option 2 is a converter of meters to miles, feet, \nand inches. ");
  printf("It will also print out the original meters and the equivalent number of miles, feet, and inches to a file called meters.txt.\n");
  printf("Option 3 will take in an inputed line and place the first word at the end of the line. It will also output the length of the line\n");
  printf("option 4 will exit from the program\n");

  printf("\nenter a number between 1 and 4 to select the different programs.\n");

  printf("\n");

  while(running){

      //input for which sub program to run
      printf("Select Option: ");
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

          printf("%.2lf meters is equivalent to %.2f miles, %.2f feet, and %.2f inches\n\n",
                  disConv.inputMeters,disConv.resultMiles,disConv.resultFeet,disConv.resultInches);

          FILE *fp;
          //this opens the meters.txt file and erases its content
          fp = fopen("meters.txt","w");

          fprintf(fp, "%.2lf meters is equivalent to %.2f miles, %.2f feet, and %.2f inches\n\n",
                  disConv.inputMeters,disConv.resultMiles,disConv.resultFeet,disConv.resultInches);

          fclose(fp);

          break;

        case 3:;

          //Part C: Read in a line of text from the user

          printf("Enter a Line of text (No Punctuation): ");

          char *lineStr = malloc(1000);

          //get input from user and put it in lineStr
          fgets(lineStr, 1000, stdin);
          fflush(stdin);


          //the first strtok puts a NUll in the space, thus stopping the string there
          char *first = (strtok(lineStr, " "));

          //The second strtok starts from the last Null(where the space was),
          // and then goes to the end of the string because nothing matches ""
          char *last = (strtok(NULL, "\n"));

          //add a space after last so that there is a space between first and last
          strcat(last, " ");

          char *rearranged = strcat(last,first);

          printf("the rearranged string is:\n%s\n",rearranged );
          printf("the lenght of the string is %d\n", strlen(rearranged));

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
