#include <stdio.h>

int main()
{
    // 2D array = an array, where each element is an entire array
    //            useful if you need a matrix, grid, or table of data

    int numbers[3][3] = {{1, 2, 3},
                         {4, 5, 0}};

    numbers[1][2] = 6; // Replacing a value
    numbers[2][0] = 7; // Adding a new value
    numbers[2][1] = 8; // Adding a new value
    numbers[2][2] = 9; // Adding a new value

    int rows = sizeof(numbers) / sizeof(numbers[0]);
    int columns = sizeof(numbers[0]) / sizeof(numbers[0][0]);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%d ", numbers[i][j]);
        }
        printf("\n");
    }

    return 0;
}