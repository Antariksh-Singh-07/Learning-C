#include <stdio.h>

void isPrime(int num)
{
    int factors = 0;
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            factors++;
        }
    }
    if (factors == 2)
    {
        printf("%d\n", num);
    }
}

int main()
{
    int n = 1729;

    for (int i = 1; i <= 50; i++)
    {
        if (n % i == 0)
        {
            isPrime(i);
        }
    }

    return 0;
}