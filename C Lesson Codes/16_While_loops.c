#include <stdio.h>
#include <string.h>

int main()
{
    // while loop repeats a section of a code a number of times, possibly infinite.
    char grades[18];

    printf("Enter your grades: ");
    fgets(grades, 18, stdin);
    grades[strlen(grades) - 1] = '\0';

    while (strlen(grades) <= 0)
    {
        printf("Are you so bad that you are afriad to put your grades in huh ?\n");
        printf("Enter your grades: ");
        fgets(grades, 18, stdin);
        grades[strlen(grades) - 1] = '\0';
    }

    printf("LOL -> %s <-", grades);

    return 0;
}