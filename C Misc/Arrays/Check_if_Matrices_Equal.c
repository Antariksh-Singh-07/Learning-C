#include <stdbool.h>
#include <stdio.h>

void printMat(int row, int col, int arr[row][col]) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int mat1[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int mat2[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int row1 = sizeof(mat1) / sizeof(mat1[0]),
        row2 = sizeof(mat2) / sizeof(mat2[0]),
        col1 = sizeof(mat1[0]) / sizeof(int),
        col2 = sizeof(mat2[0]) / sizeof(int);

    printf("\nMatrix 1\n");
    printMat(row1, col1, mat1);
    printf("\nMatrix 2\n");
    printMat(row2, col2, mat2);
    printf("\n");

    if (!(row1 == row2 && col1 == col2)) {
        printf("Matrices are of Unequal Sizes! Can't Compare");
    } else {
        bool is_same = true;
        for (int i = 0; i < row1; i++) {
            for (int j = 0; j < col1; j++) {
                if (mat1[i][j] != mat2[i][j]) {
                    is_same = false;
                    break;
                }
            }
        }

        if (is_same) {
            printf("Matrices are the Same!");
        } else {
            printf("Matrices aren't the Same!");
        }
    }
    return 0;
}