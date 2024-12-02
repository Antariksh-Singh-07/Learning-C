#include <stdio.h>

void printArr(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void merge(int arr[], int left, int mid, int right) {
    int leftSize = mid - left + 1,
        rightSize = right - mid;

    int leftArr[leftSize],
        rightArr[rightSize];

    for (int i = 0; i < leftSize; i++)
        leftArr[i] = arr[left + i];
    for (int j = 0; j < rightSize; j++)
        rightArr[j] = arr[mid + j + 1];

    int l = 0, r = 0, i = left;

    while (l < leftSize && r < rightSize) {
        if (leftArr[l] <= rightArr[r]) { // change <= with >= for Descending
            arr[i] = leftArr[l];
            l++;
        } else {
            arr[i] = rightArr[r];
            r++;
        }
        i++;
    }

    while (l < leftSize) {
        arr[i] = leftArr[l];
        l++;
        i++;
    }

    while (r < rightSize) {
        arr[i] = rightArr[r];
        r++;
        i++;
    }
}

void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        merge(arr, left, mid, right);
    }
}

int main() {
    int arr[] = {36, 19, 94, 97, 71, 38, 74, 83, 56, 99, 82, 25, 46, 55, 31, 14, 60, 66, 78, 91, 37, 53, 23, 81, 24, 7, 70, 35, 75, 52, 20, 2, 98, 79, 95, 68, 54, 6, 12, 28, 27, 84, 48, 57, 88, 100, 49, 9, 18, 4, 26, 96, 50, 22, 90, 33, 64, 13, 63, 17, 62, 43, 73, 21, 1, 65, 86, 10, 77, 85, 41, 15, 16, 87, 72, 40, 58, 61, 67, 30, 69, 5, 44, 51, 39, 76, 59, 0, 34, 92, 80, 32, 89, 47, 3, 11, 42, 29, 93, 8, 45};
    int size = sizeof(arr) / sizeof(int);

    mergeSort(arr, 0, size - 1);

    printArr(arr, size);

    return 0;
}