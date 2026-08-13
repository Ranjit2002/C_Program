#include <stdio.h>

// Function prototype
int sum(int, int);

// Function definition
int sum(int x, int y) {
  printf("The sum is %d\n", x + y);
  return x + y;
}

int main() {

  int a = 3;
  int b = 2;

  //   int c = a + b;
  //   printf("The sum is %d\n", c);
  //   int c = sum(a, b); // Function call
  //   printf("%d\n", c);
  sum(a, b);

  int a1 = 23;
  int b1 = 32;

  //   int c1 = a1 + b1;
  //   printf("The sum is %d\n", c1);
  sum(a1, b1); // Function call

  int a2 = 56;
  int b2 = 89;

  //   int c2 = a2 + b2;
  //   printf("The sum is %d\n", c2);
  sum(a2, b2); // Function call

  return 0;
}