#include <stdio.h>
#include <string.h>

int main()
{

    char cars[6][18] = {"Tesla", "Prosche", "Corvette", "Pagani", "Ford"};

    // cars[0] = "Lambhorghini"; // you can't directly assign a new string to cars[n] because it is a fixed memory location
    strcpy(cars[0], "Lamborghini"); // Although we can use a function to do it for us
    // arrays have a fixed size, so you cannot directly add new elements to an array once it's initialized, so we need to initialize the array with enough space if we need to add a new value
    strcpy(cars[5], "Ferrari");

    for (int i = 0; i < sizeof(cars) / sizeof(cars[0]); i++)
    {
        printf("%s\n", cars[i]);
    }

    return 0;
}