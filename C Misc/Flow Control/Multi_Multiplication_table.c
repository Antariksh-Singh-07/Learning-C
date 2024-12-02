#include <stdio.h>

int main()
{
    int n = 9;

    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("%d * %-2d = %-4d\t", j, i, j * i);
        }
        printf("\n");
    }

    return 0;
}