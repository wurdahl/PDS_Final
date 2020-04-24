//Given an array of ints of even length, return a new array length 2 containing
//the middle two elements from the original array. The original array will be length 2 or more.

#include<stdio.h>
#include<stdlib.h>
#include "input.h"

int* makeMiddle(size_t len, int nums[]){

  int length = len;

  int mid= len/2 -1;

  static int r[2];

  r[0]=nums[mid];
  r[1]=nums[mid+1];

  printf("%d and %d\n", r[0], r[1]);

  return r;


}


int main(){

  int nums[10];

  safeIntArrayInput("enter an array seperated by spaces: ");

  printf("ok\n" );


  // int *middle;
  // size_t len = sizeof(nums)/sizeof(nums[0]);
  //
  // middle = makeMiddle(len, nums);
  //
  // printf("%d and %d\n",middle[0], middle[1]);

  return 0;

}
