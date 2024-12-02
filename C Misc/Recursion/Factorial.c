#include <stdio.h>

int Factorial(int n)
{
    if (n == 0)
        return 1;
    return n * Factorial(n - 1);
}

int main()
{
    int n = 5;
    printf("Factorial of %d is %d", n, Factorial(n));
    return 0;
}