/*

2. Calculate the area of a circle and modify the same program to calculate the volume of a cylinder given it's radius and height.

*/

#include <stdio.h>

int main()
{
    int radius = 6;
    int height = 10;

    printf("The area of a circle with radius %d is %f\n", radius, 3.14 * radius * radius);
    printf("The volume of cylinder with radius %d and height %d is %f", radius, height, 3.14 * radius * radius * height);

    return 0;
}