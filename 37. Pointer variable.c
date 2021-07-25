#include<stdio.h>
int main()
{
 printf("This program is written by Mohd Afrid\n");
 int i=8;
 int *j;
 j=&i;
 
 printf("Value of i is %d \n",i);
 printf("Value of j is %d\n",*j);
 printf("Value of i is %d\n",*j);
 printf("Address of i is %p\n",&i);
 printf("Address of i is %p\n",j);
 printf("Address of j is %p\n",&j);
 return 0;
}
