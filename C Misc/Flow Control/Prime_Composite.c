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
    int num;
    printf("Input value: ");
    scanf("%d", &num);

    if (!isPrime(num))
    {
        printf("%d is a NOT a prime number", num);
    }
    else
    {
        printf("%d is a prime number", num);
    }

    return 0;
}