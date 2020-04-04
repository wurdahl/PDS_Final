#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

typedef struct shape{
  double dim;
  double *computeArea;
}shape;

double getArea(shape *self){
  return pow(self->dim,2);
}

void new_shape(shape *shap){
  shap->dim=0;
  shap->computeArea = &getArea;
}

int main(){

  shape square;

  new_shape(&square);

  square.dim=2;

  printf("%lf\n", square->computeArea );

  // char *num = "5.3\n";
  // char *input;
  //
  // fgets(input, 100, stdin);
  //
  // const char *num1 = num;
  // const char *input1 = input;
  //
  // if(strcmp(num1,input1)==0){
  //   puts("These are the same string");
  // }else{
  //   puts("These aren't the same string");
  //   printf("the size of num is %i\n", sizeof(num1));
  //   printf("the size of input is %i\n", sizeof(input1));
  // }
  //
  // printf("%f\n", atof(input1));
  // printf("%f\n", strtod(input1, '\0'));

  return 0;
}
