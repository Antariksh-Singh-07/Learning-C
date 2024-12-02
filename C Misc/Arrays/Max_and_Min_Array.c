#include <stdio.h>

int main() {
    int arr[] = {39, 9, 3, 54, 47, 15, 65, 96, 12, 56, 91, 14},
        size = sizeof(arr) / sizeof(arr[0]),
        max = arr[0],
        min = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("Maximum: %d\nMinimum: %d", max, min);

    return 0;
}