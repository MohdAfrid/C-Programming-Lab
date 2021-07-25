#include<stdio.h>
int main()
{
 printf("This program is written by Mohd Afrid\n");
 int i,k;
 int j=1;
 
 printf("Enter a number : ");    
 scanf("%d",&i);
 
 
 while(j<3)
 {
  k=i>>j;
  printf("\nThe value of number after BITWISE right shifting by %d is : %d",j,k);
  j++;
 }
 return 0;
}
