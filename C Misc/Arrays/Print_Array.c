#include <stdio.h>

void printArr(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 4, 8, 1, 8, 3, 7, 6, 9, 6, 8, 9},
        size = sizeof(arr) / sizeof(arr[0]);

    printArr(arr, size);

    return 0;
}