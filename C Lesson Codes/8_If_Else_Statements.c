#include <stdio.h>

int main()
{
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18)
    { // Checks if this condition is true, if true executes the following block.
        printf("Eligible for a License!");
    }
    else if (age < 0)
    { // If the previous case wasn't True, this condition is checked. (else if can be more than 1)
        printf("You aren't even born yet!");
    }
    else
    { // If no if and else if statements were given a true condition, else is executed.
        printf("You're not eligible for a License!");
    }

    return 0;
}