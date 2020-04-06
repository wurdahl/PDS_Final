#include<math.h>

typedef struct ShapeClass ShapeClass;

struct ShapeClass{
  double (*computeArea)(const ShapeClass *shape);
};

double shape_computeArea(const ShapeClass *shape){
  return shape->computeArea(shape);
}

typedef struct CircleClass{
  double xCoor;
  double yCoor;
  double Radius;
  ShapeClass shape;

}CircleClass;

static double circle_computeArea(const ShapeClass *shape){
  const CircleClass *circ = (const CircleClass *) shape;
  return pow(circ->Radius,2)*M_PI;
}

void circle_new(CircleClass *circ){
  circ->Radius=0;
  circ->xCoor=0;
  circ->yCoor=0;
  circ->shape.computeArea = circle_computeArea;
}
