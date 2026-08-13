#include <stdio.h>

int Factorial(int n);

int Factorial(int n) {
  if (n == 1 || n == 0) { // Base condition
    return 1;
  }

  return Factorial(n - 1) * n;
}

int main() {

  int a = 5;

  printf("The factorial of %d is %d\n", a, Factorial(a));

  return 0;
}