#include <stdio.h>

int main()
{
    int n = 1010101, p = 0, b = 1, temp = n;

    while (temp > 0)
    {
        p = temp % 10;
        temp /= 10;

        if (p > 1)
        {
            b = 0;
            break;
        }
    }

    b == 1 ? printf("%d Is a Binary number", n) : printf("%d Is NOT a Binary number", n);

    return 0;
}