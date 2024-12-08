#include <stdio.h>
#define row 3
#define col 4

void printMat(int rows, int cols, int mat[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

void transposeMat(int rows, int cols, int mat[rows][cols], int arr[cols][rows]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            arr[j][i] = mat[i][j];
        }
    }
}

int main() {
    int mat[row][col] = {{1, 2, 3, 4}, {1, 2, 3, 4}, {1, 2, 3, 4}};
    int arr[col][row];
    transposeMat(row, col, mat, arr);

    printf("\nMatrix A\n");
    printMat(row, col, mat);
    printf("\nTranspose of Matrix A\n");
    printMat(col, row, arr);

    return 0;
}