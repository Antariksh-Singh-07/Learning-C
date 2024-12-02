#include <stdio.h>

int main() {
    int x, y, temp;
    // with temp
    x = 10;
    y = 20;
    temp = x;
    x = y;
    y = temp;
    printf("with temperoray variable: x = %d, y = %d\n", x, y);

    // without temp, arithmetic operations
    x = 10;
    y = 20;
    x = y + x;
    y = x - y;
    x = x - y;
    printf("with arithmetic operations: x = %d, y = %d\n", x, y);

    // without temp, bitwise operations
    x = 10;    // 00001010
    y = 20;    // 00010100
    x = x ^ y; // 00011110
    y = x ^ y; // 00001010
    x = x ^ y; // 00010100
    printf("with bitwise operators: x = %d, y = %d\n", x, y);

    return 0;
}