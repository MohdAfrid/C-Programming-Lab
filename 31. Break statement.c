#include<stdio.h>
int main()
{
printf("This program is written by Mohd Afrid\n");
int num;
int choice;

printf("Enter a number : ");
scanf("%d",&num);
 
switch (num)
{
  case 1:
  printf("You are in case 1");
  break;
  
  case 2:
  printf("You are in case 2");
  break;
  
  case 3:
  printf("You are in case 3");
  break;
  
  default:
  printf("You are in default");
  break;
}
return 0;
}
