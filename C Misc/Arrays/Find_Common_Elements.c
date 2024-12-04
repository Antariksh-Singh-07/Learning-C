#include <stdbool.h>
#include <stdio.h>

int main() {
    int arr1[] = {1, 2, 3, 4, 5, 6};
    int arr2[] = {1, 3, 5};
    int size1 = sizeof(arr1) / sizeof(int);
    int size2 = sizeof(arr2) / sizeof(int);
    bool check[10] = {false};

    for (int i = 0; i < size2; i++) {
        check[arr2[i]] = true;
    }

    printf("Common Elements are: ");

    for (int i = 0; i < size1; i++) {
        if (check[arr1[i]]) {
            printf("%d ", arr1[i]);
        };
    }
    return 0;
}