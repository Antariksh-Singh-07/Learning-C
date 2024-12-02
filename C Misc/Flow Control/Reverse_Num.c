#include <stdio.h>

int main() {
    int num = 12345, rev = 0;
    while (num > 0) {
        rev = (rev * 10) + (num % 10);
        num /= 10;
    }
    printf("%d", rev);
    return 0;
}