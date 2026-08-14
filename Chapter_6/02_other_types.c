#include <stdio.h>

int main() {

  char i = 'A';
  char *j = &i; // j is a pointer pointing to i (j is an character pointer)

  float k = 67.43;
  float *k1 = &k;

  printf("The address of i is %p\n", &i);
  printf("The address of i is %p\n", j);

  printf("The value at address k is %f\n", *k1);
  printf("The value at address k is %f\n", *(&k));

  return 0;
}