#include <stdio.h>
#include <stdbool.h>

int main()
{
    int year;
    printf("Input a year: ");
    scanf("%d", &year);

    if (year % 4 == 0)
    {
        if (year % 100 == 0 && year % 400 != 0)
        {
            printf("NOT a leap year");
        }
        else
        {
            printf("Leap Year");
        }
    }
    else
    {
        printf("NOT a leap year");
    }
    return 0;
}