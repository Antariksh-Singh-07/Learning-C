#include <stdio.h>

int main()

{
    // array = a data structure that can store many values of the same data type.

    double numbers[10] = {35.9212, 46.1595, 69.2865, 41.7035, 18.7275, 57.639, 85.4169, 6.1613, 57.4294};
    numbers[8] = 17.3453; // Replace 9th value
    numbers[9] = 15.6542; // Add a new value at the 10th place

    printf("%.2lf", numbers[8]);

    return 0;
}