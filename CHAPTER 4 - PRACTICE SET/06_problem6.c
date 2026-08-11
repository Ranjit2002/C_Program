#include <stdio.h>

int main() {

  /*
  Do the 5th question using for and do while loop.
  */

  int sum = 0, n = 1;

  //   for (int i = 1; i <= 10; i++) {
  //     sum += i;
  //   }

  //   printf("The sum of first 10 natural numbers is %d", sum);

  do {
    sum += n;
    n++;
  } while (n <= 10);

  printf("The sum of first 10 natural numbers is %d", sum);

  return 0;
}