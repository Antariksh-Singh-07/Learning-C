#include <stdio.h>

int main()
{
    int n = 50;

    for (int i = 1; i <= 50; i++)
    {
        if (n % i == 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}