#include <stdbool.h>
#include <stdio.h>

void swap(int *pX, int *pY) {
    int temp = *pX;
    *pX = *pY;
    *pY = temp;
}

void sortRowWise(int arr[][4], int sizeRow, int sizeColumn) {
    bool is_swapped;
    for (int i = 0; i < sizeRow; i++) {
        for (int j = 0; j < sizeColumn - 1; j++) {
            is_swapped = false;
            for (int k = 0; k < sizeColumn - j - 1; k++) {
                if (arr[i][k] > arr[i][k + 1]) {
                    swap(&arr[i][k], &arr[i][k + 1]);
                    is_swapped = true;
                }
            }
            if (!is_swapped) {
                break;
            }
        }
    }

    for (int i = 0; i < sizeRow; i++) {
        for (int j = 0; j < sizeColumn; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int arr[][4] = {{8, 5, 7, 2},
                    {7, 3, 0, 1},
                    {8, 5, 3, 2},
                    {9, 4, 2, 1}};
    int sizeRow = sizeof(arr) / sizeof(arr[0]);
    int sizeColumn = sizeof(arr[0]) / sizeof(int);

    sortRowWise(arr, sizeRow, sizeColumn);

    return 0;
}