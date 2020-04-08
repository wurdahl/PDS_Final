typedef struct CircleClass CircleClass;

struct CircleClass{
  double xCoor;
  double yCoor;
  double Radius;
};

double getCircleArea(CircleClass *circ){
  return pow(circ->Radius,2)*M_PI;
}

int newCircle(CircleClass circ){
  circ.xCoor = 0;
  circ.yCoor = 0;
  circ.Radius = 0;
  return 0;
}

void partAOutput(CircleClass circ){
  printf("x coordinate is %lf\n", circ.xCoor);
  printf("y coordinate is %lf\n", circ.yCoor);
  printf("Radius is %lf\n", circ.Radius);
  printf("area is %lf\n", getCircleArea(&circ));

  puts("");

}
