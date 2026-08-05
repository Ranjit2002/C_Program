#include <stdio.h>

int main()
{
    int a = 5;
    int b = 3;
    int c = a + b;

    printf("The value of a is %d and the value of b is %d and the sum is %d\n", a, b, c);

    // Modulus operator is used to get the remainder.
    printf("The remiander is when a is divided by b is %d", a % b);

    // This does not work for exponentiation in C
    // int d = a^b;

    // int and int      ==>     int
    // int and float    ==>     float
    // float and float  ==>     float

    return 0;
}