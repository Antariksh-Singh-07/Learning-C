#include <stdio.h>
#include <string.h>

int main()
{

    // scanf and fgets functions

    char name[16]; // length in bytes
    char full_name[25];
    int age;

    printf("Input your first name: ");
    scanf("%s", &name); // scanf ends the input at the first whitespace

    getchar(); // this gets the '\n' from the latest buffer that scanf doesn't consume (but fgets does), causing fgets to get terminated without actually waiting for user input.

    printf("Input your full name: ");
    fgets(full_name, 25, stdin);             // fgets can be used to input strings with whitespaces
    full_name[strlen(full_name) - 1] = '\0'; // this replaces the '\n' escape sequence with '\0' "null" from the str "name" as new line is put in the end by default with the fgets func

    printf("How old are you?: ");
    scanf("%d", &age);

    printf("First Name: %s\nFull Name: %s\nAge: %d", name, full_name, age);

    return 0;
}