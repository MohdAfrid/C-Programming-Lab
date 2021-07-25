#include<stdio.h>
int main()
{
    printf("This program is written by Mohd Afrid\n");
    
    int i;
 
    printf("You are in for loop\n");
    for(i=0; i<=5; i++)
    {
        printf("The value is %d \n",i);
    }
 
    printf("You are in while loop\n");
    int j=0;
    while(j<=5)
    {
        printf(" %d \n",j);
        j++;
    }
	return 0;
}
