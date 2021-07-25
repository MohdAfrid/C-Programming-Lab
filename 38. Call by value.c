#include <stdio.h>
 int funct1(int n)
{
 int m=20;
 n=m; 
 return n;
}
 int main()
{
  printf("This program is written by Mohd Afrid\n");
  int n=30; 
  printf("Value of n in funct1 function is : %d\n", funct1(n));
  printf("Value of n in main function is : %d\n", n); 
  return 0;
}
