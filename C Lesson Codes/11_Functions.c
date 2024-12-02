#include <stdio.h>

void print()
{
    printf(".\n");
}

int sum(int a, int b)
{
    printf("%d\n", a + b);
}

int mul(int a, int b)
{
    return a * b;
}

int main()
{
    print();
    sum(6, 9);
    int c = mul(6, 9);
    printf("%d", c);
    return 0;
}