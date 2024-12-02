#include <stdio.h>
#include <math.h>

int main()
{

    double a = sqrt(16);   // 4.000000
    double b = pow(2, 10); // 1024.000000
    int c = round(3.14);   // 3
    int d = ceil(6.9);     // always rounds up = 7
    int e = floor(6.9);    // always rounds down = 6
    double f = fabs(-100); // absolute value = 100.000000
    double g = log(10);    // logarithm = 1.000000
    // Takes input in radians (pi)
    double h = sin(1.57079632679); // pi/2 rads = 1.57079632679 => 1.000000
    double i = cos(0);             // 0 rads => 1.000000
    double j = tan(0.78539816339); // pi/4 rads = 0.78539816339 => 1.000000

    // printf("%lf", j);

    return 0;
}