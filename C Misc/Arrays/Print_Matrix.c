#include <stdio.h>

void print(int matrix[][4], int row_size, int column_size) {
    for (int i = 0; i < row_size; i++) {
        for (int j = 0; j < column_size; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix[][4] = {{9, 7, 2, 1},
                       {2, 3, 8, 8},
                       {2, 9, 7, 6},
                       {3, 7, 8, 2},
                       {5, 8, 3, 9}},
        row_size = sizeof(matrix) / sizeof(matrix[0]),
        column_size = sizeof(matrix[0]) / sizeof(matrix[0][0]);

    print(matrix, row_size, column_size);

    return 0;
}