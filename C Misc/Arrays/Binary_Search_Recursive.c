#include <stdbool.h>
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

void bubble_sort(int arr[], int size) {
    int p = 0;
    bool is_swapped;
    for (int i = 0; i < size - 1; i++) {
        is_swapped = false;
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
                is_swapped = true;
            }
        }
        if (!is_swapped) {
            break;
        }
    }
    printArr(arr, size);
}

int binary_search(int arr[], int key, int left, int right) {
    int mid_index;

    if (left <= right) {
        mid_index = left + (right - left) / 2;

        if (arr[mid_index] == key) {
            return mid_index;
        } else if (key < arr[mid_index]) {
            return binary_search(arr, key, left, mid_index - 1);
        } else {
            return binary_search(arr, key, mid_index + 1, right);
        }
    }

    return -1;
}

int main() {
    int arr[] = {83, 12, 95, 4, 67, 31, 89, 16, 52, 73, 27, 61, 39, 0, 88, 44, 97, 22, 55, 8, 69, 33, 91, 15, 48, 82, 2, 64, 37, 93, 19, 71, 46, 85, 11, 58, 29, 76, 41, 99, 6, 54, 25, 87, 13, 62, 35, 96, 20, 78, 50, 92, 17, 65, 40, 84, 7, 59, 32, 94, 14, 66, 42, 86, 9, 57, 30, 77, 3, 98, 21, 68, 43, 81, 5, 60, 34, 90, 18, 75, 47, 100, 24, 70, 45, 80, 1, 56, 28, 74, 51, 95, 23, 72, 38, 87, 10, 63, 36, 92, 26, 79, 49, 88, 53},
        key = 0,
        size = sizeof(arr) / sizeof(arr[0]),
        left = 0,
        right = size - 1;

    printf("Input the Key: ");
    scanf("%d", &key);

    bubble_sort(arr, size);

    int index = binary_search(arr, key, left, right);

    if (index != -1) {
        printf("\n[%d] Key present at Index [%d]", key, index);
    } else {
        printf("\n[%d] Key doesn't exist in the given list", key);
    }

    return 0;
}