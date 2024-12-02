#include <stdio.h>
#include <stdlib.h>

void print_array(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void sort(int array[], int size)
{
    char p; // placeholder
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                p = array[j + 1];
                array[j + 1] = array[j];
                array[j] = p;
            }
        }
    }
    print_array(array, size);
}

int main()
{

    int array[] = {3, 2, 5, 7, 4, 0, 10, 1, 8, 9, 6};
    // char array[] = {'K', 'F', 'B', 'J', 'H', 'E', 'G', 'D', 'L', 'C', 'I', 'A'};

    int size = sizeof(array) / sizeof(array[0]);

    sort(array, size);

    return 0;
}