#include <stdio.h>

int main() {
    int numRows = 7;
    for (int currentRow = 0; currentRow < numRows; currentRow++) {
        for (int space = 0; space < numRows - currentRow - 1; space++) {
            printf("  ");
        }
        int coefficient = 1;
        for (int position = 0; position <= currentRow; position++) {
            printf("%4d", coefficient);
            coefficient = coefficient * (currentRow - position) / (position + 1);
        }
        printf("\n");
    }

    return 0;
}