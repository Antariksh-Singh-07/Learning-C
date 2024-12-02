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
    int min = 1, max = 10000000, n = 1;

    for (int i = min; i <= max; i++)
    {
        int is_arm = isArmstrong(i);

        if (is_arm == 1)
        {
            printf("%d. %d\n", n, i);
            n++;
        }
    }

    return 0;
}