#include <stdio.h>

int main()
{
    // A = 65, Z = 90; a = 97, z = 122

    int A = 65;
    for (int i = 0; i < 26; i++)
    {
        printf("%c%c ", A, A + 32);
        A++;
    }

    return 0;
}