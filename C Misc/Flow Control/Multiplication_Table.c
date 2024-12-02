#include <stdio.h>

int main()
{
    int n = 9;

    for (int i = 1; i <= 10; i++)
    {
        printf("%d * %-2d = %-4d\n", n, i, n * i);
    }

    return 0;
}