#include <stdio.h>

int main() {

  int marks[5];

  for (int i = 0; i < 5; i++) {
    printf("Enter marks of %d students:\n", i);
    scanf("%d", &marks[i]);
  }

  for (int i = 0; i < 5; i++) {
    printf("The address of marks at index %d is %u\n", i, &marks[i]);
  }

  return 0;
}