#include <stdio.h>

int main() {

  /*
  Repeat 8 using while loop.
  */

  int product = 1;
  int i = 1;
  int n = 6;

  while (i <= n) {
    product *= i;
    i++;
  }

  printf("The factorial is %d", product);

  return 0;
}