#include <stdio.h>
#include <string.h>

int main()
{
    // while loop repeats a section of a code a number of times, possibly infinite.
    char grades[18];

    do
    {
        printf("Enter your grades: ");
        fgets(grades, 18, stdin);
        grades[strlen(grades) - 1] = '\0';
    } while (strlen(grades) <= 0);

    printf("%s -> LOL <-", grades);

    return 0;
}