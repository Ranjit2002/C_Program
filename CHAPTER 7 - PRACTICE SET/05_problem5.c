#include <stdio.h>

void printArray(int a[], int);
int reverse(int x[], int);

void printArray(int a[], int n) {
  for (int i = 0; i < n; i++) {
    printf("%d ", a[i]);
  }
  printf("\n");
}

int reverse(int arr[], int n) {
  int temp;
  for (int i = 0; i < n / 2; i++) {
    temp = arr[i];
    arr[i] = arr[n - i - 1];
    arr[n - i - 1] = temp;
  }
}

int main() {

  /*
  Write a program containing a function which reverse the array passed to it.
  */

  int arr[5] = {22, 33, 44, 55, 66};

  printArray(arr, 5);
  reverse(arr, 5);
  printArray(arr, 5);

  return 0;
}