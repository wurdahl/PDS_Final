#include<stdio.h>
#include<stdlib.h>
#include "input.h"

int makeChocolate(int small, int big, int goal){
  int diff = goal-5*big;

  if(diff<4){

    if(small<goal%5){
      return(-1);
    }
    else return(goal%5);

  }

  if(small>=diff){
    return diff;
  }

  return(-1);
}

int main(){

  int small;
  int big;
  int goal;

  safeIntInput("Number of Small bars: ", &small);
  safeIntInput("Number of big Bars: ", &big);
  safeIntInput("Goal: ", &goal);

  printf("Result is %d\n", makeChocolate(small, big, goal));

  return 0;
}
