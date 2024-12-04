#include <stdio.h>
#include <string.h>

/* // memory copy approach
int main() {
    int arr[] = {1, 0, 4, 1, 9, 7, 3};
    int size = sizeof(arr) / sizeof(int);
    int cpyArr[size];

    memcpy(cpyArr, arr, size * sizeof(int));

    for (int i = 0; i < size; i++) {
        printf("%d ", cpyArr[i]);
    }

    return 0;
}
*/

/* // loop approach
int main() {
    int arr[] = {1, 0, 4, 1, 9, 7, 3};
    int size = sizeof(arr) / sizeof(int);
    int cpyArr[size];

    for (int i = 0; i < size; i++) {
        cpyArr[i] = arr[i];
    }

    for (int i = 0; i < size; i++) {
        printf("%d ", cpyArr[i]);
    }

    return 0;
}
*/