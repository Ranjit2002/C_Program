#include <stdio.h>

int main() {

  /*
  Repeat problem 7 for a custom input given by the user.
  */

  int arr[3][10];
  int table[3];
  int a;

  for (int i = 0; i < 3; i++) {
    printf("Enter a Number: ");
    scanf("%d", &a);
    table[i] = a;
  }

  //   for (int i = 0; i < 3; i++) {
  //     printf("%d\n", table[i]);
  //   }

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 10; j++) {
      arr[i][j] = table[i] * (j + 1);
    }
  }

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 10; j++) {
      printf("%d\n", arr[i][j]);
    }
    printf("\n");
  }

  return 0;
}