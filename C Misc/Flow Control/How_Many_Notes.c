#include <stdio.h>

int main()
{
    int notes[10] = {2000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
    int amount[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    int n = 8888;

    for (int i = 0; i < 10; i++)
    {
        amount[i] = n / notes[i];
        printf("%4d : %-4d\n", notes[i], amount[i]);
        n %= notes[i];
    }

    return 0;
}