#include <stdio.h>

int main()
{
   int var;
   int *ptr;
   int **pptr;

   var = 100;
   ptr = &var;  //take the address of var
   pptr = &ptr; //take the address of ptr using address of operator &

   /* take the value using pptr */
   printf("Value of var = %d\n", var);                 //usual printf
   printf("Value available at *ptr = %d\n", *ptr);     //print the value pointed by the pointer ptr
   printf("Value available at **pptr = %d\n", **pptr);  //print the value pointed by the pointer that points to ptr

   printf("Address of var = %x\n", &var);      //%x for hex
   printf("Address of *ptr = %x\n", ptr);
   printf("Address of **pptr = %x\n", &pptr);

   return 0;
}
