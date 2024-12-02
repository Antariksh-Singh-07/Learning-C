#include <stdio.h>
#include <stdbool.h>

int main()
{
    // '&&' {and} both of the conditions should be true
    // '||' {or} one of the two conditions should be true
    // '!' {not} reverses the logical state of its operand

    bool me = 0;     // pass or fail boolean
    bool friend = 0; // pass or fail boolean

    if (me && friend)
    {
        printf("Happy Happy Happy!!!");
    }
    else if (!me && !me)
    {
        printf("Sad but Happy Happy Happy!!!");
    }
    else if (me || me)
    {
        printf("Excuse Me Brah, You\'re Excused, And I\'m Not Your Brah");
    }

    return 0;
}