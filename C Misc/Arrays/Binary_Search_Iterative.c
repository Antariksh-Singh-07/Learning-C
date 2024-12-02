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

    while (left <= right) {

        mid_index = left + (right - left) / 2;

        if (arr[mid_index] == key) {
            return mid_index;
        } else if (key < arr[mid_index]) {
            right = mid_index - 1;
        } else if (key > arr[mid_index]) {
            left = mid_index + 1;
        }
    }
    return -1;
}

int main() {
    int arr[] = {36, 19, 94, 97, 71, 38, 74, 83, 56, 99, 82, 25, 46, 55, 31, 14, 60, 66, 78, 91, 37, 53, 23, 81, 24, 7, 70, 35, 75, 52, 20, 2, 98, 79, 95, 68, 54, 6, 12, 28, 27, 84, 48, 57, 88, 100, 49, 9, 18, 4, 26, 96, 50, 22, 90, 33, 64, 13, 63, 17, 62, 43, 73, 21, 1, 65, 86, 10, 77, 85, 41, 15, 16, 87, 72, 40, 58, 61, 67, 30, 69, 5, 44, 51, 39, 76, 59, 0, 34, 92, 80, 32, 89, 47, 3, 11, 42, 29, 93, 8, 45},
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