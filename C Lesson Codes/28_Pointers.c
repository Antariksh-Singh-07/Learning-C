#include <stdio.h>

int main()
{
    // pointers = a "variable-like" REFERENCE that holds a memory address to another variable in a memory block
    // Some tasks are more easily performed w/ pointers
    // * = indirection operator (extracts the value that is stored in the address within the pointer reference)
    /*
        ! Advantages of using pointers !
        No copying variables again and again saving memory
        Less time in program execution
        Reference usage makes it possible to work on the original value
        Create data structures like linked-list, stack, queue
        Returning more than one value from functions
        Searching and sorting large data easily
        Dynamica memory allocation
    */
    int num = 7;
    int *pNum = &num; // pointer storing (pointing to) the address of num
    // p"w/ variable name in Pascal Case" is the common and appreciated naming convention for pointers

    /*
    int * pNum = NULL; // ? if only declaring the pointer and not assigning a value to it, it's better to assign it to NULL
    pNum = &num;
    */

    printf("Address of num = %p\n", &num);  // & = address of operator; yeilds the address of the variable num
    printf("Value of pNum = %p\n\n", pNum); // pointer of a variable has the same value as the variable's address it's pointing to

    printf("Value of num = %d\n", num); // value of num at it's address
    // ? The process of extracting the value stored in the address within the pointer is called "Dereferencing"
    printf("Value at stored address of pNum = %d\n\n", *pNum); // extracts the value at the address that is within pNum

    // The sizeof operators yeilds value in bytes
    printf("Size of num = %d bytes\n", sizeof(num));     // size of a int is typically 4 bytes
    printf("Size of pNum = %d bytes\n\n", sizeof(pNum)); // size of a pointer is typically 8 bytes, that is to store the hexadecimal address

    return 0;
}