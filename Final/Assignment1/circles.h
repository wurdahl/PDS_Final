#include<math.h>
#include<stdio.h>
#include<stdlib.h>

typedef struct CircleClass CircleClass;

struct CircleClass{
  double xCoor;
  double yCoor;
  double Radius;
};

//Function returns the area of the circle
double getCircleArea(CircleClass *circ){
  return pow(circ->Radius,2)*M_PI;
}

//Function returns the volume of a sphere with the same radius
double getSphereVolume(CircleClass *circ){
  return (4)*(M_PI)*pow(circ->Radius,3)/3;
}

//function returns the surface area of a sphere with the same radius
double getSphereSurfaceArea(CircleClass *circ){
  return 4*M_PI*pow(circ->Radius,2);
}

//this is a constructor that initalizes all of the values in the CircleClass object
int newCircle(CircleClass circ){
  circ.xCoor = 0;
  circ.yCoor = 0;
  circ.Radius = 0;
  return 0;
}

//this function returns all of the neccessary values for Part A of Assignment 1
void partAOutput(CircleClass circ){
  puts("");

  printf("x coordinate is %lf\n", circ.xCoor);
  printf("y coordinate is %lf\n", circ.yCoor);
  printf("Radius is %lf\n", circ.Radius);
  printf("The circle's area is %lf\n", getCircleArea(&circ));
  printf("The sphere's volume is %lf\n", getSphereVolume(&circ) );
  printf("The sphere's surface area is %lf", getSphereSurfaceArea(&circ));

  puts("");

}
