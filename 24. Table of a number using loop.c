#include<stdio.h>
int main()
{
  printf("This program is written by Mohd Afrid\n");
  int var1,i;
  
  printf("Enter any number : ");
  scanf("%d",&var1);
  printf("Table of entered number is : \n");
  for(i=1; i<=10; i++) 
  {
    printf("%d x %d = %d\n",var1,i,var1*i);
  }
  return 0;
}
