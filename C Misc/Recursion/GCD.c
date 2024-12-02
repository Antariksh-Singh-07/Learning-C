// Greatest Common Divisor or Highest Common Factor of two numbers

#include <stdio.h>

// ! 1st way: Normally

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    for (int i = b; i > 0; i--)
    {
        if (a % i == 0 && b % i == 0)
        {
            return i;
        }
    }
    return 1;
}

// ! 2nd way: Using Euclidean Algorithm (Recursive)
int gcd_E(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return gcd_E(b, a % b);
    }
}

int main()
{
    int a = 98, b = 56;
    if (a == b)
    {
        printf("GCD of %d and %d is %d\n", a, b, a);
    }
    else if (a > b)
    {
        printf("GCD of %d and %d is %d\n", a, b, gcd_E(a, b));
    }
    else
    {
        printf("GCD of %d and %d is %d\n", a, b, gcd_E(b, a));
    }

    return 0;
}