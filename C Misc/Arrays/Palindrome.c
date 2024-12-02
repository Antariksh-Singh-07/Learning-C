#include <stdio.h>

int main() {
    int array[] = {1, 2, 3, 4, 3, 2, 1},
        len = sizeof(array) / sizeof(array[0]),
        palindrome = 1;

    for (int i = 0; i < len / 2; i++) {
        if (array[i] != array[len - 1 - i]) {
            palindrome = 0;
            break;
        }
    }

    if (palindrome) {
        printf("Palindrome\n");
    } else {
        printf("Not a Palindrome\n");
    }

    return 0;
}
