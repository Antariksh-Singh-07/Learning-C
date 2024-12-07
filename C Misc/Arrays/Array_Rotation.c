#include <stdio.h>

void printArr(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}

/* // One By One Cycle
void oneByOne(int arr[], int size) {
    int first = arr[0];

    for (int i = 0; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    arr[size - 1] = first;
}

int main() {
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(int);
    int d = 8;
    d %= size;
    for (int i = 0; i < d; i++) {
        oneByOne(arr, size);
    }

    printArr(arr, size);
    return 0;
} */

/* // Using Temp Array
void tempArr(int arr[], int size, int d) {
    int temp[size];
    for (int i = d; i < size; i++) {
        temp[i - d] = arr[i];
    }
    for (int i = 0; i < d; i++) {
        temp[size - d + i] = arr[i];
    }
    for (int i = 0; i < size; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(int);
    int d = 2;
    d %= size;
    tempArr(arr, size, d);

    printArr(arr, size);
    return 0;
} */

/* // Reversing Arrays
void reverse(int arr[], int start, int end) {
    while (end > start) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void reverseArr(int arr[], int size, int d) {
    reverse(arr, 0, d - 1);
    reverse(arr, d, size - 1);
    reverse(arr, 0, size - 1);
}

int main() {
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(int);
    int d = 4;
    d %= size;
    reverseArr(arr, size, d);

    printArr(arr, size);
    return 0;
} */

/* // Using Juggling Algorithm
int gcd(int size, int d) {
    int gcd = 1;
    for (int i = 2; i <= d; i++) {
        if (size % i == 0 && d % i == 0) {
            gcd = i;
        }
    }
    return gcd;
}

void juggleArr(int arr[], int size, int d) {
    int temp, j, k;
    for (int i = 0; i < gcd(size, d); i++) {
        j = i;
        temp = arr[i];
        while (1) {
            k = (j + d) % size;
            if (k == i) {
                break;
            }
            arr[j] = arr[k];
            j = k;
        }
        arr[j] = temp;
    }
}

int main() {
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(int);
    int d = 3;
    d %= size;
    juggleArr(arr, size, d);

    printArr(arr, size);
    return 0;
} */