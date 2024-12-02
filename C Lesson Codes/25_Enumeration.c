#include <stdio.h>

enum Day{Sun = 1, Mon = 2, Tue = 3, Wed = 4, Thu = 5, Fri = 6, Sat = 7};
// by default the value assigned to the elements are same as their index but it can be changed.

int main()
{
   // enum = a user defined type of named integer identifiers
   //        helps to make a program more readable

   enum Day today;
   today = Sun;

   printf("%d", Sun); // enums are not STRINGS, they are treated as integers!!!
 
   return 0;
}