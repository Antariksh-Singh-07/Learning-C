#include <stdio.h>

int length(char str[]) {
    int len = 0;

    while (*str++) {
        len++;
    }

    return len;
}

int main() {

    char str[] = "bob";

    int len = length(str);

    printf("%d", len);

    return 0;
}