#include <stdio.h>

int main()
{
    int a;
    char ch = 'a';
    ch = 'c';
    ch = '\n';

    // Represents a new line
    // printf("Hey I am good \nNice");

    // \t gives a tab space.
    // printf("Hey I am good \tNice");

    // printf("Hey I am good \" Nice");
    printf("Hey I am good \' Nice");
    printf("Hey I am good \\ Nice");

    return 0;
}