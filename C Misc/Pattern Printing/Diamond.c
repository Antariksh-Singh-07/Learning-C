#include <stdio.h>

int main() {
    int n = 5;

    for (int i = 0; i < n / 2; i++) {
        for (int j = 0; j < (n / 2) - i; j++) {
            printf("  ");
        }
        for (int k = 0; k <= (i * 2); k++) {
            printf("* ");
        }
        printf("\n");
    }

    if (n % 2 == 1) {
        for (int i = 0; i < n; i++) {
            printf("* ");
        }
        printf("\n");
    }

    for (int i = n / 2; i > 0; i--) {
        for (int j = 0; j <= (n / 2) - i; j++) {
            printf("  ");
        }
        for (int k = 0; k < (i * 2) - 1; k++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}