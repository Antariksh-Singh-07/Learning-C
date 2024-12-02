#include <stdio.h>

int main()
{
    // format specifier % = defines and formats a type of data to be displayed

    // %c = character
    // %s = string (array of characters)
    // %f = float
    // %lf = double
    // %d = integer

    // %.1 = decimal precision
    // %1 = minimum field width
    // %- = left align

    float a = 98.989;

    printf("Item 1: $%.1f", a); // non aligned OT
    printf("|\n");
    printf("Item 2: $%-8.2f", a);
    printf("|\n");
    printf("Item 3: $%8.3f", a);
    printf("|\n");

    return 0;
}