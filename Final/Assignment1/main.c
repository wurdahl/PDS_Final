#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "circles.h"
#include "distanceConverter.h"

int main(){

  //setting up cirlce class functions
  CircleClass circle1;
  newCircle(circle1);

  char *xCoorStr;
  xCoorStr = malloc(1000);

  printf("X coordinate: ");
  gets(xCoorStr);
  circle1.xCoor = strtod(xCoorStr, '\0');

  char *yCoorStr;
  yCoorStr = malloc(1000);

  printf("Y coordinate: ");
  gets(yCoorStr);

  circle1.yCoor = strtod(yCoorStr, '\0');

  char *radiusStr;
  radiusStr = malloc(1000);

  printf("Radius: ");
  gets(radiusStr);

  circle1.Radius = strtod(radiusStr, '\0');

  printf("x coordinate is %lf\n", circle1.xCoor);
  printf("y coordinate is %lf\n", circle1.yCoor);
  printf("Radius is %lf\n", circle1.Radius);
  printf("area is %lf\n", getCircleArea(&circle1));


  puts("");
  puts("");

  //distanceConverter Section
  distanceConverter disConv;

  printf("How many meters: ");

  char *metersStr;
  metersStr = malloc(1000);

  gets(metersStr);

  disConv.inputMeters = strtod(metersStr, '\0');

  getResults(&disConv);

  printf("Resuling miles: %.2f\n", disConv.resultMiles);
  printf("Resulting feet: %.2f\n", disConv.resultFeet );
  printf("Resulting inches: %.2f\n", disConv.resultInches);



  return 0;
}
