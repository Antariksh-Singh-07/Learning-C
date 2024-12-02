#include <stdio.h>

int main()
{
    // for loop = repeats a section of the code a specified amount of times.

    for (int i = 0; i <= 10; i++)
    {
        printf("\n%d", i);
    }

    printf("\n\n");

    // nested for loop = loop inside another loop

    int n = 5;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}