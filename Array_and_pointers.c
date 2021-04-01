#include <stdio.h>
int main( ){
   int *p;//Pointer variable

   int val[7] = { 11, 22, 33, 44, 55, 66, 77 } ;//Array decleration.

   p = &val[0];

   for ( int i = 0 ; i<7 ; i++ )
   {
      printf("val[%d]: value is %d and address is %p\n", i, *p, p);
      
      p++; //Incrementing the pointer so that it points to next element on every increment.
   }
   return 0;
}