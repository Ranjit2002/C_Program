#include <stdio.h>

int main() {

  /*
  Implement 10 using other types of loops.
  */

  int n;
  int i = 2;
  int not_prime = 0;

  printf("Enter a number: ");
  scanf("%d", &n);

  // Using While loop

  if (n == 0 || n == 1) {
    not_prime = 1;
  }
  else {
    while (i < n) {
      if (n % i == 0) {
        not_prime = 1;
        break;
      }
      i++;
    }
  }

  // Using do While loop

  //   if (n == 0 || n == 1) {
  //     not_prime = 1;
  //   }
  //   else {
  //     do {
  //       if (n % i == 0 && n != 2) {
  //         not_prime = 1;
  //         break;
  //       }
  //       i++;
  //     } while (i < n);
  //   }

  if (not_prime) {
    printf("%d is a not a prime number", n);
  }
  else {
    printf("%d is a prime number", n);
  }

  return 0;
}