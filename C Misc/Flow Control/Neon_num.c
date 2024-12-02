// A number whose sum of the figits of its square is equal to the number itself;
//* i.e. 9 => 9² = 81 ; 8 + 1 = 9

#include <stdio.h>

int SumOfDigits(int num)
{
    int sum = 0;

    while (num > 0)
    {
        sum += (num % 10);
        num /= 10;
    }

    return sum;
}

int isNeon(int num)
{
    int square = num * num;
    int sum = SumOfDigits(square);

    if (num == sum)
    {
        return 0;
    }
}

int main()
{
    int num = 0;

    if (isNeon(num) == 0)
    {
        printf("%d is a Neon number", num);
    }
    else
    {
        printf("%d is a NOT Neon number", num);
    }

    return 0;
}