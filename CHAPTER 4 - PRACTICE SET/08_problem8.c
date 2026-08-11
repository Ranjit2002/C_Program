#include <stdio.h>

int main() {

  /*
  Write a program to calculate the factorial of a given number using a for loop.
  */

  int factorial = 1, n;
  printf("Enter a number: ");
  scanf("%d", &n);

  for (int i = 1; i <= n; i++) {
    factorial *= i;
  }

  printf("The factorial of %d is %d", n, factorial);

  return 0;
}