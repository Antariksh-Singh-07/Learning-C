#include <stdio.h>

int main() {
    // Bitwise Operators = special operators used in bit level programming

    // & = AND                      00101100 & 00001101 = 00001100
    // | = OR                       00101100 & 00001101 = 00101101
    // ^ = XOR                      00101100 & 00001101 = 00110001
    // << = Left Shift               00101100 << 1  = 01011000
    // >> = Right Shift              00101100 << 1  = 00010110
    // ~ = NOT (bitwise complement)     ~ 00101100  = 11010011

    int a = 44, b = 13; // a = 00101100 and b = 00001101 (considering 1 byte adress)

    printf("& = %d\n", a & b);   // a & b = 12 (00001100)
    printf("| = %d\n", a | b);   // a | b = 45 (00101101)
    printf("^ = %d\n", a ^ b);   // a ^ b = 33 (00100001)
    printf("<< = %d\n", a << 1); // a << 1 = 88 (01011000)
    printf(">> = %d\n", a >> 1); // a >> 1 = 22 (00010110)

    // BIT NOT or Compliment operator changes each bit to its complement, so a signed integer would turn negative. e.g. 8 would turn -9 because, 0 => 8 = 9 digits & -1 => -9 => 9 digits as well, thus a complement...on the other hand an unsigned int would turn a small value to a astonishngly large value if applied NOT on as there are no -ve values...
    // counting in  negative binary works a little different, the 1st bit (left most) reperesnts the sign, 0 means +ve and 1-ve negative. If the 1st bit is indeed a 1, there are two ways you can count the binary representation to decimal =>
    /*
        binary =  1   _ 0  _ 1  _ 0  _ 1 _ 0 _ 1 _ 0 | (10101010) = -86
        decimal = 128 _ 64 _ 32 _ 16 _ 8 _ 4 _ 2 _ 1 | (01010101) = 85

        1.) add the 1s leaving the first sign representing bit, i.e. 32 + 8 + 2 = 42 and then subract this with the signed bit value, i.e. 42-128 = -86 OR
        2.) add the 0s but in -ve, - (64 + 16 + 4 + 1) = - 85 and then add a (-1) to the final value, therefore, - (85 + 1) = -86
    */
    printf("~ = %d\n", ~a); // ~a = -45 (11010011)

    return 0;
}