#include<stdio.h>
int main()
{
printf("This program is written by Mohd Afrid\n");
int i,j;

for(i=1; i<=2; i++)
{
  for(j=1; j<=2; j++)
  {
    if(i==j)
    continue;
    
    printf("%d %d\n",i,j);
  }
}
return 0;
}
