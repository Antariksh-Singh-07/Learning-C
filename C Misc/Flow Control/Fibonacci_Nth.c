#include <stdio.h>

int main()
{
    // 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, ....

    int a = 0,
        b = 1,
        p = 0,
        n = 10;

    if (n == 1)
    {
        printf("%d", a);
    }
    else if (n == 2)
    {
        printf("%d", b);
    }
    else if (n > 2)
    {
        for (int i = 3; i <= n; i++)
        {
            p = b + a;
            a = b;
            b = p;
        }
        printf("%d ", p);
    }
    else
    {
        printf("Enter a valid integer");
    }

    return 0;
}