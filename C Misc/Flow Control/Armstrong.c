#include <stdio.h>
#include <math.h>

int len(int num)
{
    int size = 0;

    if (num < 0)
    {
        num = -num;
    }

    if (num == 0)
    {
        size = 1;
        return size;
    }

    do
    {
        num /= 10;
        size++;
    } while (num != 0);

    return size;
}

int isArmstrong(int num)
{
    int temp = num,
        sum = 0,
        digit = 0,
        is_arm = 0,
        size = len(num);

    while (temp > 0)
    {
        digit = temp % 10;
        sum += (int)pow(digit, size);
        temp /= 10;
    }

    if (num == sum)
    {
        is_arm = 1;
    }

    return is_arm;
}

int main()
{
    int num = 92727;

    int isarm = isArmstrong(num);

    if (isarm == 1)
    {
        printf("%d is an Armstrong number", num);
    }

    else
    {
        printf("%d is NOT an Armstrong number", num);
    }

    return 0;
}