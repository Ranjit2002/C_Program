#include <stdio.h>

int main() {
  /*
  Write a program to determine whether a character entered by the user is
  lowercase or not.
  */

  char ch = 'G';

  printf("The character is %c\n", ch);
  printf("The value of character is %d\n", ch);

  // 97 - 122

  if (ch >= 97 && ch <= 122) {
    printf("This character is lowercase\n");
  }
  else {
    printf("This character is not lowercase\n");
  }

  return 0;
}