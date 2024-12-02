#include <stdio.h>
#include <ctype.h>

/* A Switch case is used to avoid large if else block, although switch cases
can only evaluate int or char for their condition, but they're significantly
faster at large scale as the cases are processed simultaneously. */

int main()
{

    char Sname;
    printf("Enter Ukulele String: ");
    scanf("%c", &Sname);

    Sname = toupper(Sname);

    switch (Sname)
    {
    case 'A':
        printf("That's the bottom most string!");
        break;
    case 'E':
        printf("That's the second string from the bottom!");
        break;
    case 'C':
        printf("That's the second string from the top!");
        break;
    case 'G':
        printf("That's the upper most string!");
        break;
    default:
        printf("Invalid String name, doesn't exist on the Ukulele!");
        break;
    }
    return 0;
}