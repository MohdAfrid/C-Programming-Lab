#include<stdio.h>
int main()
{
    printf("This program is written by Mohd Afrid\n");
    int i=0;
    int j=8; 
    printf("You are in while loop");
    while(i<8)
    {
        printf("The values are : %d\n",i);
        i++;
    }
    do
    {
        printf("You are in do while loop\n");
        printf("The values are : %d\n",j);
        j++;
    }while(j<7);
    return 0;
}
