#include <stdio.h>

float average(int, int, int);

float average(int a, int b, int c) {
  return (a + b + c) / 3.0;
}

int main() {

  /*
  Write a program using function to find average of three numbers.
  */

  int a = 4;
  int b = 9;
  int c = 7;

  printf("The average of a, b and c is %f\n", average(a, b, c));

  return 0;
}