#include <stdio.h>

int main()
{
    // 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, ....

    int a = 0,
        b = 1,
        p = 0,
        n = 50;

    if (n < 0)
    {
        printf("n is below 0, invalid");
    }

    for (int i = 1; i <= n; i++)
    {
        if (i > 2)
        {
            p = b + a;
            a = b;
            b = p;
            printf("%d ", p);
        }
        else if (i == 1)
        {
            printf("%d ", a);
        }
        else if (i == 2)
        {
            printf("%d ", b);
        }
    }

    return 0;
}