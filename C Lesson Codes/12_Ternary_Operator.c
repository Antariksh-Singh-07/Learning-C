#include <stdio.h>

// condition ? (if True) expression : (if False) expression; [? is the ternary operator]

int main()
{
    printf("Enter your percentage: ");
    int p = 34;

    p >= 33 ? printf("You Passed !") : printf("You Failed !");

    return 0;
}