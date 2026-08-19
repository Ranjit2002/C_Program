#include <stdio.h>

int positive(int arr[], int);

int positive(int arr[], int n) {
  int a = 0;
  for (int i = 0; i < n; i++) {
    if (arr[i] > 0) {
      a++;
    }
  }
  return a;
}

int main() {

  /*
  Write a program containing functions which counts the number of positive
  integers in an array.
  */

  int arr[] = {12, -45, 76, 98, -56, 22, -65, -87};

  //   positive(arr, 8);

  printf("The number of positive integers is %d", positive(arr, 8));

  return 0;
}