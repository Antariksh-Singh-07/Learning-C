// The list is sorted & there are 3 methods, Two-Pointer approach, Frequency Array approach, New Array approach
#include <stdio.h>
#include <stdlib.h>

void printArr(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}

/* // Two Pointer Approach
int logicalEnd(int arr[], int size) {
    int end = 0;
    for (int i = 1; i < size - 1; i++) {
        if (arr[i] != arr[end]) {
            arr[++end] = arr[i];
        }
    }

    free(f_arr);
    return end;
}
int main() {

    int arr[] = {1, 1, 2, 2, 2, 3, 4, 4, 5, 6, 6, 7, 7, 7};
    int size = sizeof(arr) / sizeof(int);

    int end = logicalEnd(arr, size);

    printArr(arr, end);

    return 0;
} */

/* // Frequency Array Approach
int maxVal(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    return max;
}

int logicalEnd(int arr[], int size) {
    int end = 0;
    int max = maxVal(arr, size);
    int *f_arr = (int *)calloc(max + 1, sizeof(int));

    for (int i = 0; i < size; i++) {
        if (f_arr[arr[i]] == 0) {
            arr[end++] = arr[i];
            f_arr[arr[i]] = 1;
        }
    }

    free(f_arr);
    f_arr = NULL;
    return end;
}

int main() {

    int arr[] = {1, 1, 2, 2, 2, 3, 4, 4, 5, 6, 6, 7, 7, 7};
    int size = sizeof(arr) / sizeof(int);

    int end = logicalEnd(arr, size);

    printArr(arr, end);

    return 0;
} */

/* // New Array Approach
int dupeRemover(int arr[], int n_arr[], int size) {
    int end = 0;

    for (int i = 0; i < size - 1; i++) {
        if (arr[i] != arr[i + 1]) {
            n_arr[end++] = arr[i];
        }
    }

    n_arr[end++] = arr[size - 1]; // last element

    return end;
}

int main() {

    int arr[] = {1, 1, 2, 2, 2, 3, 4, 4, 5, 6, 6, 7, 7, 7};
    int size = sizeof(arr) / sizeof(int);
    int n_arr[size];

    int end = dupeRemover(arr, n_arr, size);

    printArr(n_arr, end);

    return 0;
} */