#include <stdio.h>
 int main ()
 {
 printf("This program is written by Mohd Afrid\n");
 int var;
 int *ptr;
 int **pptr;
 var = 35;
 /* take the address of var */ 
 ptr = &var; 
 /* take the address of ptr using address of operator & */ 
 pptr = &ptr; 
 /* take the value using pptr */
 printf("Value of var = %d\n", var );
 printf("Value available at *ptr = %d\n", *ptr );
 printf("Value available at **pptr = %d\n", **pptr);
 return 0;
}
