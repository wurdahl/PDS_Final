#include<stdlib.h>

void multiTable(int min, int max){

  if(min>max){
    int a = min;
    min = max;
    max = a;
  }

  printf("%10s","x");

  //Create first row that labels the numbers in the x direction
  for(int i = min;i<=max;i++){
    printf("%10d",i);
  }
  printf("\n");

  //adds a line that shows the difference between label and products
  for(int i = min; i<=max+1; i++){
    printf("__________");
  }
  printf("\n");

  for(int i = min; i<=max; i++){

    //creates the label for the numbers in the y direction
    printf("%9d|",i );

    for(int j = min; j<=max; j++){
      printf("%10d", i*j);
    }
    printf("\n");

  }

}
