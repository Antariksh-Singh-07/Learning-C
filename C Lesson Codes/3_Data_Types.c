#include <stdio.h>
#include <stdbool.h>
#include <limits.h>

int main()
{

    char a = 'C';          // single character - %c
    char b[] = "Bro_Code"; // array of characters - %s

    float c = 3.141592;           // 4 bytes (32 bits of precision) 6 - 7 digits - %f
    double d = 3.141592653589793; // 8 bytes (64 bits of precision) 15 - 16 digits - %lf

    bool e = true; // 1 byte (true = 1 or false = 0) - %d

    char f = CHAR_MAX;           // 1 byte (-2⁷ to +2⁷-1) - %d or %c
    unsigned char g = UCHAR_MAX; // 1 byte (0 to +2⁸-1) - %d or %c

    short h = SHRT_MAX;           // 2 bytes (−2¹⁵ to +2¹⁵-1) - %d
    unsigned short i = USHRT_MAX; // 2 bytes (0 to +2¹⁶-1) - %d

    int j = INT_MAX;           // 4 bytes (-2³¹ to +2³¹-1) - %d
    unsigned int k = UINT_MAX; // 4 bytes (0 to +2³²) - %u

    long long int l = LONG_LONG_MAX;           // 8 bytes (-2⁶³ to +2⁶³-1) - %lld
    unsigned long long int m = ULONG_LONG_MAX; // 8 bytes (0 to +2⁶⁴) - %llu

    // printf("%c\n", a); // char
    // printf("%s\n", b); // character array
    // printf("%f\n", c); // float
    // printf("%lf\n", d); // double
    // printf("%d\n", e); // bool
    // printf("%d\n", f); // char as numeric value
    // printf("%d\n", g); // unsigned char as numeric value
    // printf("%d\n", h); // short
    // printf("%d\n", i); // unsigned short
    // printf("%d\n", j); // int
    // printf("%u\n", k); // unsigned int
    // printf("%lld\n", l); // long long int
    // printf("%llu\n", m); // unsigned long long int

    return 0;
}