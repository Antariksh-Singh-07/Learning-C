#include <stdio.h>
#define col 4

int main() {
    int mat[][4] = {{1, 1, 1, 1},
                    {2, 2, 2, 2},
                    {3, 3, 3, 3},
                    {4, 4, 4, 4}};
    int row = sizeof(mat) / sizeof(mat[0]);

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (i == 0 || i == row - 1 || j == 0 || j == col - 1) {
                printf("%d ", mat[i][j]);
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}