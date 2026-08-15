#include <stdio.h>

int change(int *);

int change(int *a) {
  return *a = *a * 10;
}

int main() {

  /*
  Write a function and pass the value by reference.
  */

  int n = 10;

  printf("The value of n is %d\n", n);

  change(&n);

  printf("The value of n is %d\n", n);

  return 0;
}