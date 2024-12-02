#include <stdbool.h>
#include <stdio.h>

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
}

float calc_mean(int arr[], int size) {
    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    return (float)sum / size;
}

float calc_median(int arr[], int size) {
    float median;
    bubble_sort(arr, size);

    if (size % 2 != 0) {
        median = arr[size / 2];
    } else {
        median = (arr[size / 2] + arr[size / 2 - 1]) / 2.0;
    }
    return median;
}

int calc_mode(int arr[], int size) {
    int mode = -1,
        max_count = 0;
    bool same_frequency = true;

    for (int i = 0; i < size; i++) {
        int count = 0;

        for (int j = 0; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        if (count > max_count) {
            mode = arr[i];
            max_count = count;
            same_frequency = false;
        } else if (count == max_count && arr[i] != mode) {
            same_frequency = true;
        }
    }
    if (same_frequency) {
        return -1;
    }

    return mode;
}

int main() {
    int arr[] = {36, 19, 94, 97, 71, 38, 74, 83, 56, 99, 82, 25, 46, 55, 31, 14, 60, 66, 78, 91, 37, 53, 23, 81, 24, 7, 70, 35, 75, 52, 20, 2, 98, 79, 95, 68, 54, 6, 12, 28, 27, 84, 48, 57, 88, 100, 49, 9, 18, 4, 26, 96, 50, 22, 90, 33, 64, 13, 63, 17, 62, 43, 73, 21, 1, 65, 86, 10, 77, 85, 41, 15, 16, 87, 72, 40, 58, 61, 67, 30, 69, 5, 44, 51, 39, 76, 59, 0, 34, 92, 80, 32, 89, 47, 3, 11, 42, 29, 93, 8, 45},
        size = sizeof(arr) / sizeof(arr[0]),
        mode;
    float mean, median;

    mean = calc_mean(arr, size);
    printf("Mean => %.2f\n", mean);

    median = calc_median(arr, size);
    printf("Median => %.2f\n", median);

    mode = calc_mode(arr, size);
    if (mode != -1) {
        printf("Mode => %d\n", mode);
    } else {
        printf("Mode doesn't exists for the given list; multiple same frequency");
    }

    return 0;
}