#include <stdio.h>

void sum_of_odd_and_even(int n)
{
    int odd = 0, even = 0;
    for (int i = 1; i <= n; i += 2)
    {
        odd += i;
    }

    for (int i = 2; i <= n; i += 2)
    {
        even += i;
    }

    printf("Odd = %d, Even = %d\n", odd, even);
}

int main()
{
    int n = 10;
    sum_of_odd_and_even(n);
    return 0;
}