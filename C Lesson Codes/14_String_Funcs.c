#include <stdio.h>
#include <string.h>

int main()
{

   char string1[] = "Mister";
   char string2[] = "Chad";

   // strlwr(string1);                              // converts a string to lowercase
   // strupr(string1);                              // converts a string to uppercase
   // strcat(string1, string2);                     // appends string2 to end of string1
   // strncat(string1, string2, 3);                 // appends n characters from string2 to string1
   // strcpy(string1, string2);                     // copy string2 to string1
   // strncpy(string1, string2, 2);                 // copy n characters of string2 to string1
   // printf("%s \n%s", string1, string2);

   // strset(string1, '?');     //sets all characters of a string to a given character
   // strnset(string1, 'x', 3); //sets first n characters of a string to a given character
   // strrev(string1);          //reverses a string
   // printf("%s",string1);

   // int result = strlen(string1); // returns string length as int
   // string complement span => returns the length of the string 2 until the point string 2 doesn't complement it
   // int result = strcspn("Hello World", " "); // returns 5 as "Hello World" has the " " whitespace after at the 5th index
   // int result = strcspn("Voila!\n", "\n"); // returns 6 as "Voila!\n" has "\n" at the 6th index
   // printf("%d", result);

   // int result = strcmp(string1, string2);        // string compare all characters
   // int result = strncmp(string1, string2, 1);    // string compare n characters
   // int result = strcmpi(string1, string1);       // string compare all (ignore case)
   // int result = strnicmp(string1, string1, 1);   // string compare n characters (ignore case)

   // if(result == 0)
   // {
   //    printf("These strings are the same");
   // }
   // else
   // {
   //    printf("These strings are not the same");
   // }

   return 0;
}