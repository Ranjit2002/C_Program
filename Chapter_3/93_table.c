#include <stdio.h>

int main() {
  int a = 27;
  int b = 19;

  for (int i = 1; i <= 10; i++) {
    printf("%d X %d = %d\n", a, i, a * i);
  }

  printf("\n");

  for (int i = 10; i > 0; i--) {
    printf("%d X %d = %d\n", b, i, b * i);
  }

  return 0;
}