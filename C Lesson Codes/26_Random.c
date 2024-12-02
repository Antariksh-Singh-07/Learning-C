#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // pesudo random numbers = A set of values or elements that are statistically random but not true random so don't use it for security purposes.

    srand(time(0)); // generating a random seed from the current time

    int randnum;

    // randnum = rand();           // generates a random value from 0-32767
    // randnum = rand() % 6;       // generates a random value from 0-5 (6 values)

    for (int i = 0; i < 10; i++)
    {
        randnum = (rand() % 6) + 1; // generates a random value from 1-6
        printf("%d\n",randnum);
    }

    return 0;
}