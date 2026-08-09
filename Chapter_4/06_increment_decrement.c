#include <stdio.h>

int main() {

  int i = 5;
  printf("The value of i is %d\n", i);

  i = i + 5;
  printf("The value of i is %d\n", i);

  printf("The value of i is %d\n", i++);

  // i++ prints i first and then increments i (Post increment operator)
  // ++i increments i first and then prints i ()

  return 0;
}