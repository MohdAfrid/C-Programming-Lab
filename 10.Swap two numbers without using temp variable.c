#include<stdio.h>
int main()
{
    printf("This program is written by Mohd Afrid\n");
    int  a, b;
    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);
    
    a=a-b;
    b=a+b;
    a=b-a;
    
    printf("After swapping,\n");
    printf("Value of a: %d\n",a);
    printf("Value of b: %d",b);
    return 0;
}
