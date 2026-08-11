#include <stdio.h>

int main() {

  /*
  Write a program to calculate the sum of the numbers occuring in the
  muptiplication table of 8.
  */

  int sum = 0;

  for (int i = 1; i <= 10; i++) {
    sum += (8 * i);
  }

  printf("The sum of the table 8 is %d", sum);

  return 0;
}