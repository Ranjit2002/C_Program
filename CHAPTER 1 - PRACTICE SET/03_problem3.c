// 3. Write a program to convert Celsius (Centigrade degrees temperature to Fahrenheit).

#include <stdio.h>

int main()
{
    float c = 37;
    float f = ((9.0 / 5.0)) * c + 32;

    printf("%f Degrees celsius is equals to %f Degrees fahrenheit", c, f);

    return 0;
}