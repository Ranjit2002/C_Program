#include <stdio.h>

int half_pyramid(int);

int half_pyramid(int n) {
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      printf("* ");
    }
    printf("\n");
  }
}

int main() {

  /*

  Write a program using function to print the following pattern (first n lines).

  *

  * *

  * * *

  */

  //   int a = 5;

  //   half_pyramid(a);

  for (int i = 0; i < 3; i++) {
    /*
        This loop runs from 0 to 2
        if i = 0 --> print 1 star
        if i = 1 --> print 3 star
        if i = 2 --> print 5 star
        no_of_stars = (2*i+1)
    */

    // This for loop prints (2*i+1) stars
    for (int j = 0; j < 2 * i + 1; j++) {
      printf("* ");
    }

    printf("\n");
  }

  return 0;
}