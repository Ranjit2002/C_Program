#include <stdio.h>

int main() {

  /*
  Write a program to print the address of a variable. Use the address to get the
  value of the variable.
  */

  int i = 2;
  int *j = &i;
  printf("The address of i is %u\n", &i);
  printf("The value of i is %d\n", *j);

  return 0;
}