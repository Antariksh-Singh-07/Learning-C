#include <stdio.h>
#include <string.h>

struct Students
{
   char name[12];
   int roll;
};

int main()
{
   // struct = collection of related members ("variables") 
   //          they can be of different data types
   //          listed under one name in a block of memory
   //          VERY SIMILAR to classes in other languages (but w/o methods)

   struct Students player1 = {"Aaryan", 4};
   struct Students player2;

   strcpy(player2.name, "Antariksh");
   player2.roll = 54;

   printf("%s\n", player1.name);
   printf("%d\n", player1.roll);

   printf("%s\n", player2.name);
   printf("%d\n", player2.roll);

   return 0;
}