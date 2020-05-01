//Problem:
//Given an array of ints of even length, return a new array length 2 containing
//the middle two elements from the original array. The original array will be length 2 or more.

#include<stdio.h>
#include<stdlib.h>
#include "input.h"

//given the length of an array and the array, this function returns the middle two values in an array
int* makeMiddle(int len, int nums[]){

  int length = len;

  int mid= len/2 -1;

  static int r[2];

  r[0]=nums[mid];
  r[1]=nums[mid+1];

  return r;


}


int main(){

  printf("This program returns the middle two values of an array with even length.\n");

  int *nums=malloc(1000);

  int length = safeIntArrayInput("enter an array seperated by spaces: ", nums);

  int *middle;
  middle = makeMiddle(length, nums);

  printf("The numbers in the middle of the inputed array are %d and %d\n",middle[0], middle[1]);

  return 0;

}
