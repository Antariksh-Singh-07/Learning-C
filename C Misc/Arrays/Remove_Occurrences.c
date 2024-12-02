#include <stdio.h>

int removeOccurance(int arr[], int size, int value) {
    int j = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] != value) {
            arr[j++] = arr[i];
        }
    }

    return j;
}

int main() {
    int arr[] = {4, 8, 3, 2, 8, 2, 3, 1, 2, 1, 1};
    int size = sizeof(arr) / sizeof(int);
    int value;
    printf("Input Value: ");
    scanf("%d", &value);

    int end = removeOccurance(arr, size, value);

    for (int i = 0; i < end; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}