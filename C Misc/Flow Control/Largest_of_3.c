#include <stdio.h>

int main()
{
    int x = 46, y = 96, z = 22;
    if ((x >= y) && (x >= z))
    {
        printf("%d", x);
    }
    else if (y >= z)
    {
        printf("%d", y);
    }
    else
    {
        printf("%d", z);
    }
    return 0;
}