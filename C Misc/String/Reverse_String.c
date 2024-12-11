#include <stdio.h>
#include <string.h>

/* // Reverse using two pointers
void reverse(char str[]) {
    int left = 0, right = strlen(str) - 1;

    while (left < right) {
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;

        left++;
        right--;
    }
}

int main() {
    char str[] = "Abhyuday looks like shit with clean shave";

    reverse(str);

    printf("\"%s\"", str);
    return 0;
} */

/* // using Recursion
void recursionReverse(char str[], int left, int right) {
    if (left >= right) {
        return;
    }

    char temp = str[left];
    str[left] = str[right];
    str[right] = temp;

    recursionReverse(str, ++left, --right);
}

int main() {
    char str[] = "Abhyuday looks like shit with clean shave";
    int left = 0, right = strlen(str) - 1;

    recursionReverse(str, left, right);

    printf("\"%s\"", str);
    return 0;
} */