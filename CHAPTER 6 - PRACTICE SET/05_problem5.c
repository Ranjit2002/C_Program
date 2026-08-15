#include <stdio.h>

int *sum(int, int);
float *average(int, int);

int *sum(int x, int y) {
  int s = x + y;
  int *ptr = &s;
  printf("The sum is %d\n", s);
  return ptr;
}

float *average(int x, int y) {
  float avg = (x + y) / 2.0;
  float *ptr = &avg;
  printf("The avergae is %f\n", avg);
  return ptr;
}

int main() {

  /*
  Write a program using a function which calculates the sum and average of two
  numbers. Use pointers and print the values of sum and average in main().
  */

  int a = 4;
  int b = 6;
  int *ptr1;
  float *ptr2;

  ptr1 = sum(a, b);
  ptr2 = average(a, b);

  printf("The address of sum is %u and the address of average is %u\n", ptr1,
         ptr2);

  return 0;
}