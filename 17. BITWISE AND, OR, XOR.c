#include<stdio.h>
int main()
{
    printf("This program is written by Mohd Afrid\n");
    
    int a,b;
    
    printf("Enter the value of a and b:");
    scanf("%d %d",&a,&b);
    
    printf("\nThe value of {a (BITWISE AND) b} is %d\n",a&b);
    
    printf("The value of {a (BITWISE OR) b} is %d\n",a|b);
    
    printf("The value of {a (BITWISE XOR) b} is %d",a^b);
    
    return 0;
}
