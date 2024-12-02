#include <stdio.h>

int main()
{
    int n = 10, m = 1;
    for (int i = 1; i <= n; i++)
    {
        m *= i;
    }
    printf("%d", m);

    return 0;
}