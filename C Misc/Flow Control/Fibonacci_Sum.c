#include <stdio.h>

int main()
{
    // 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, ....

    int a = 0,
        b = 1,
        p = 0,
        n = 10,
        sum = 0;

    if (n < 0)
    {
        printf("n is below 0, invalid");
    }

    for (int i = 0; i <= n; i++)
    {
        if (i > 2)
        {
            p = b + a;
            a = b;
            b = p;
            sum += p;
        }
        else if (i == 1)
        {
            sum = 0;
        }
        else if (i == 2)
        {
            sum += 1;
        }
    }
    printf("%d", sum);

    return 0;
}