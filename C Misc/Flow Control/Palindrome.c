#include <stdio.h>

int main()
{
    int num = 1234321, rev = 0, temp = num;
    while (temp > 0)
    {
        rev = (rev * 10) + (temp % 10);
        temp /= 10;
    }
    if (num == rev)
    {
        printf("%d | %d ; It's a palindrome", num, rev);
    }
    else
    {
        printf("%d | %d ; It's NOT a palindrome", num, rev);
    }

    return 0;
}