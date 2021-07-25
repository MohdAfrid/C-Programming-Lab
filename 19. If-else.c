#include<stdio.h>
int main()
{
    printf("This program is written by Mohd Afrid\n");
    
    int a,b;
    printf("Enter two numbers : ");
    scanf("%d %d",&a,&b);
    if(a==b)
    {
        printf("You are in if statement\n");
    }
    else
    {
        printf("You are in else statement\n");
    }
    printf("You are out of the statement");
    return 0;
}
