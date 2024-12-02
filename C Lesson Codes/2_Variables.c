#include <stdio.h>

int main()
{

    // variable =   Allocated space in memory to store a value.
    //              We refer to a variable's name to access the stored value.
    //              That variable now behaves as if it was the value it contains.
    //              BUT we need to declare what type of data we are storing.

    int x;      // declaration
    x = 12;     // initialization
    int y = 21; // declaration + initialization

    int age = 17;        // integer
    float gpa = 8.21;    // floating point number
    char grade = 'B';    // single character
    char name[] = "Sam"; // array of characters (string)

    // constant = fixed value that cannot be altered by the program during its execution

    const float PI = 3.14159; // value of PI can't be changed now
    printf("%f", PI);

    // % = format specifier

    printf("Hello %s\n", name);
    printf("You are %d years old\n", age);
    printf("Your average grade is %c\n", grade);
    printf("Your gpa is %f\n", gpa);

    return 0;
}