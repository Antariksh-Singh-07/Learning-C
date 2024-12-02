#include <stdio.h>

int main() {
    int n = 5;

    for (int i = n; i > 1; i--) {
        for (int j = 0; j < n - i; j++) {
            printf(" ");
        }
        for (int k = 0; k < i; k++) {
            if (i == n) {
                printf("* ");
            } else {
                k == 0 || k == i - 1 ? printf("* ") : printf("  ");
            }
        }
        printf("\n");
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            printf(" ");
        }
        for (int k = 0; k <= i; k++) {
            if (i == n - 1) {
                printf("* ");
            } else {
                k == 0 || k == i ? printf("* ") : printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}