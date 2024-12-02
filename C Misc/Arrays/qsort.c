#include <stdio.h>
#include <stdlib.h>

// returns -1 | 0 | 1 FOR a < b | a = b | a > b respectively

// Ascending
int compare(const void *pA, const void *pB) {
    return (*(int *)pA - *(int *)pB);
}

// Descending
// int compare(const void *pA, const void *pB) {
//     return (*(int *)pB - *(int *)pA);
// }

int main() {
    int arr[] = {1, 2, 4, 8, 1, 8, 3, 7, 6, 9, 6, 8, 9},
        size = sizeof(arr) / sizeof(int);

    qsort(arr, size, sizeof(int), compare); // Quicksort

    for (int i = 0; i < size; i++) {
        printf(" %d", arr[i]);
    }

    return 0;
}