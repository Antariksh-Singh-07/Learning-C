#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* // Manual
int *mergeArrays(int arr1[], int arr2[], int size1, int size2) {
    int *Parr = (int *)malloc((size1 + size2) * sizeof(int));

    for (int i = 0; i < size1; i++) {
        Parr[i] = arr1[i];
    }
    for (int i = 0; i < size2; i++) {
        Parr[i + size1] = arr2[i];
    }

    return Parr;
} */

/* // memcpy
int *mergeArrays(int arr1[], int arr2[], int size1, int size2) {
    int *Parr = (int *)malloc((size1 + size2) * sizeof(int));

    memcpy(Parr, arr1, size1 * sizeof(int));
    memcpy(Parr + size1, arr2, size2 * sizeof(int));

    return Parr;
} */

int main() {
    int arr1[] = {2, 3, 1, 1, 6, 8};
    int arr2[] = {6, 9, 1, 5, 3, 2};
    int size1 = sizeof(arr1) / sizeof(int);
    int size2 = sizeof(arr2) / sizeof(int);

    int *Parr = mergeArrays(arr1, arr2, size1, size2);

    for (int i = 0; i < size1 + size2; i++) {
        printf("%d ", Parr[i]);
    }

    return 0;
}