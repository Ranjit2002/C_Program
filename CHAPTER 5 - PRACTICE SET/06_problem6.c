#include <stdio.h>

int sum_natural(int);

int sum_natural(int n) {
  if (n == 1) {
    return 1;
  }

  return sum_natural(n - 1) + n;
}

int main() {

  /*
  Write a recursive to calculate the sum of first 'n' natural numbers.
  */

  int num = 5;

  printf("The sum of %d nutural numbers is %d", num, sum_natural(num));

  return 0;
}