#include <stdio.h>

int returning_ptr(int *);

int returning_ptr(int *ptr) {
  printf("The value of ptr is %d\n", ptr);
  printf("The value of ptr is %d\n", *ptr);

  return 5;
}

int main() {

  /*
  Write a program having a variable 'i'. Print the address of 'i'. Pass this
  variable to a function and print it's address. Are these address same? why?
  */

  int i = 2;
  int *ptr = &i;

  printf("The address of i is %u\n", &i);
  returning_ptr(&i);

  return 0;
}