#include<stdio.h>
int main()
{
    printf("This program is written by Mohd Afrid\n");
    int  a, b;
    printf("Enter a number: ");
    scanf("%d",&a);
    
    b=a;
    printf("Number is: %d\n",b);
    b+=a;
    printf("Number is: %d\n",b);
    b-=a;
    printf("Number is: %d\n",b);
    b*=a;
    printf("Number is: %d\n",b);
    b/=a;
    printf("Number is: %d\n",b);
    b%=a;
    printf("Number is: %d",b);
    return 0;
}
