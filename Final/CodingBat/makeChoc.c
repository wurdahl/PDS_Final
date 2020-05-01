#include<stdio.h>
#include<stdlib.h>
#include "input.h"

int makeChocolate(int small, int big, int goal){
  int diff = goal-5*big;

  //if diff is less than four then there are enough big bars to get within 5 of the goal
  if(diff<4){

    if(small<goal%5){
      return(-1);
    }
    else return(goal%5);

  }

  //if the amount of small bars is enough to bridge the gap to goal, then diff is returned
  if(small>=diff){
    return diff;
  }

  return(-1);
}

int main(){

  printf("This function returns the amount of small bars of chocolate to use in order to reach the goal amount\n"
  printf("given that the large bars are used first. It will return -1 if it is impossible to reach the goal\n\n");

  int small;
  int big;
  int goal;

  safeIntInput("Number of Small bars: ", &small);
  safeIntInput("Number of big Bars: ", &big);
  safeIntInput("Goal: ", &goal);

  printf("Result is %d\n", makeChocolate(small, big, goal));

  return 0;
}
