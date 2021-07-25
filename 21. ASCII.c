#include <stdio.h>
int main()
{
  printf("This program is written by Mohd Afrid\n");
  
  char char1,char2;
  char1='i';
  char2='j';
  printf("ASCII values of %c and %c are : %d  %d\n",char1,char2,char1,char2);
  if(char1<char2)
  printf("You are in if statement\n");
  else    
  printf("You are in else statement");
  return 0;
} 
