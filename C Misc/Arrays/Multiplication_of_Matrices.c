#include <stdio.h>

int main() {
    int row1, row2, col1, col2;
    printf("Input row and column for matrix A: \n");
    scanf("%d%d", &row1, &col1);
    printf("Input row and column for matrix B: \n");
    scanf("%d%d", &row2, &col2);

    int matA[row1][col1];
    int matB[row2][col2];

    printf("\nEnter the values for the matrix A (%d*%d): \n", row1, col1);
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col1; j++) {
            printf("Matrix A [%d][%d]: ", i, j);
            scanf("%d", &matA[i][j]);
        }
    }

    printf("\nEnter the values for the matrix B (%d*%d): \n", row2, col2);
    for (int i = 0; i < row2; i++) {
        for (int j = 0; j < col2; j++) {
            printf("Matrix B [%d][%d]: ", i, j);
            scanf("%d", &matB[i][j]);
        }
    }

    if (col1 != row2) {
        printf("Can't Multiply these two matrices");
        return 1;
    }

    int matC[row1][col2];

    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            matC[i][j] = 0;
            for (int k = 0; k < row2; k++) {
                matC[i][j] += matA[i][k] * matB[k][j];
            }
        }
    }

    printf("\nResultant Matrix C of A * B: \n");
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            printf("%d ", matC[i][j]);
        }
        printf("\n");
    }

    return 0;
}