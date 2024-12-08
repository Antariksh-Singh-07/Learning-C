#include <stdio.h>

int determinant(int order, int arr[order][order]) {
    int det, sign = 1;
    if (order == 1) {
        return arr[0][0];
    }

    int temp[order - 1][order - 1];

    det = 0;
    for (int cols = 0; cols < order; cols++) {
        int m = 0, n = 0;
        for (int i = 1; i < order; i++) {
            for (int j = 0; j < order; j++) {
                if (j != cols) {
                    temp[m][n++] = arr[i][j];
                    if (n == order - 1) {
                        n = 0;
                        m++;
                    }
                }
            }
        }
        det += sign * arr[0][cols] * determinant(order - 1, temp);
        sign = -sign;
    }
    return det;
}

int main() {
    int order;
    printf("Enter the order of the matrix: ");
    scanf("%d", &order);
    getchar();

    if (order < 1) {
        printf("Invalid matrix order!\n");
        return 1;
    }

    int arr[order][order];
    printf("Enter the values for the matrix (%d*%d): \n", order, order);
    for (int i = 0; i < order; i++) {
        for (int j = 0; j < order; j++) {
            printf("Matrix[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    int det = determinant(order, arr);
    printf("\nDeterminant of the matrix is: %d", det);

    return 0;
}