#include<stdio.h>
int main()
{
    printf("This program is written by Mohd Afrid\n");
    int i;
    int array[10];

    printf("Enter the numbers : \n");
    for(i=0; i<10;i++)
    {
        scanf("%d\n",&array[i]);
    }
  
    printf("The numbers in the array are : ");
    for(i=0; i<10;i++)
    {
        printf("'%d',", array[i]); 
    }
    return 0;
}
