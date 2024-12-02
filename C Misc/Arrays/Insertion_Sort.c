#include <stdio.h>

void printArr(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void swap(int *pX, int *pY) {
    int temp = *pX;
    *pX = *pY;
    *pY = temp;
}

void insertion_sort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int key = arr[i],
            j = i - 1;
        while (key < arr[j] && j >= 0) { // change < with > for Descending
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int arr[] = {36, 19, 94, 97, 71, 38, 74, 83, 56, 99, 82, 25, 46, 55, 31, 14, 60, 66, 78, 91, 37, 53, 23, 81, 24, 7, 70, 35, 75, 52, 20, 2, 98, 79, 95, 68, 54, 6, 12, 28, 27, 84, 48, 57, 88, 100, 49, 9, 18, 4, 26, 96, 50, 22, 90, 33, 64, 13, 63, 17, 62, 43, 73, 21, 1, 65, 86, 10, 77, 85, 41, 15, 16, 87, 72, 40, 58, 61, 67, 30, 69, 5, 44, 51, 39, 76, 59, 0, 34, 92, 80, 32, 89, 47, 3, 11, 42, 29, 93, 8, 45},
        size = sizeof(arr) / sizeof(int);

    insertion_sort(arr, size);

    printArr(arr, size);

    return 0;
}