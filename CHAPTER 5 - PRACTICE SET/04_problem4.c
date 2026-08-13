#include <stdio.h>

int Fibonacci(int);

int Fibonacci(int n) {
  if (n == 0 || n == 1) {
    return 1;
  }

  return Fibonacci(n - 1) + Fibonacci(n - 2);
}

int main() {

  /*
  Write a program using recursion to calculate nth element of Fibonacci series.
  */

  int a = 10;

  printf("The %d term of Fibonacci series is %d\n", a, Fibonacci(a));

  return 0;
}