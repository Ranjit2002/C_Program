#include <stdio.h>

int main() {
  /*
  Write a program to determine whether a student has passed or failed. To pass,
  a student requires a total of 40% and atleast 33% in each subject. Assume
  there are three subjects and take the marks as input from the user.
  */

  int marks1, marks2, marks3;

  printf("Enter first subject marks: ");
  scanf("%d", &marks1);

  printf("Enter second subject marks: ");
  scanf("%d", &marks2);

  printf("Enter third subject marks: ");
  scanf("%d", &marks3);

  //   printf("%d\n%d\n%d\n", first, second, third);

  if (marks1 < 33 || marks2 < 33 || marks3 < 33) {
    printf("You are failed due to less marks in individual subjects(s)\n");
  }
  else if ((marks1 + marks2 + marks3) / 3 < 40) {
    printf("You are failed due to less percentage\n");
  }
  else {
    printf("You are passed!\n");
  }

  return 0;
}