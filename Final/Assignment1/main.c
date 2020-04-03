#include<stdio.h>
#include<stdlib.h>
#include "circles.h"
#include<string.h>

int main(){

  //setting up cirlce class functions
  CircleClass circle1;
  cirlce_new(&circle1);

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
  printf("area is %lf\n", shape_computeArea(circle1));

  return 0;
}
