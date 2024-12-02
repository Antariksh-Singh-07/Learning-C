#include <stdio.h>

int isPrime(int n)
{
    if (n <= 1)
        return 0;
    if (n <= 3)
        return 1;
    if (n % 2 == 0 || n % 3 == 0)
        return 0;

    for (int i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return 0;
    }

    return 1;
}

int main()
{
    int num = 34;

    for (int i = 2; i <= num / 2; i++)
    {
        if (isPrime(i) && isPrime(num - i))
        {
            printf("Yes! %d + %d = %d\n", i, num - i, num);
            return 0;
        }
    }

    printf("Can't be expressed as sum of two prime numbers\n");

    return 0;
}