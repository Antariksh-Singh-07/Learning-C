#include <stdio.h>

int main() {
    int mat[3][3] = {{60, 97, 21},
                     {60, 64, 26},
                     {35, 53, 94}};

    int rows = sizeof(mat) / sizeof(mat[0]);
    int columns = sizeof(mat[0]) / sizeof(mat[0][0]);

    int sum = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            sum += mat[i][j]; // replace + w/ * for multiplication
        }
    }

    printf("Sum of all numbers = %d", sum);

    return 0;
}