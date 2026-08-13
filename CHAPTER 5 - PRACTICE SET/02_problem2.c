#include <stdio.h>

float celsius_to_Fahrenheit(float);

float celsius_to_Fahrenheit(float c) {
  return (9.0 / 5.0) * c + 32;
}

int main() {

  /*
  Write a function to convert Celsius temperature into Fahrenheit.
  */

  float celsius = 45;

  printf("%.2f Celsius is equals to %.2f Fahrenheit", celsius,
         celsius_to_Fahrenheit(celsius));

  return 0;
}