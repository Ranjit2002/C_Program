#include <stdio.h>

int main() {

  /*
  Repeat problem 3 for a general input provided by the user using scanf.
  */

  int a[10];
  int b;

  printf("Enter a number to print it's table: ");
  scanf("%d", &b);

  for (int i = 0; i < 10; i++) {
    a[i] = b * (i + 1);
  }

  for (int i = 0; i < 10; i++) {
    printf("%d X %d = %d\n", b, i + 1, a[i]);
  }

  return 0;
}