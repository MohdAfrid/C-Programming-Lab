#include<stdio.h>

int main()

{

    printf("This program is written by Mohd Afrid\n");

    int  a;

    printf("Enter a number: ");

    scanf("%d",&a);

    

    a=++a;

    printf("After increment value of a is: %d\n",a);

    a=--a;

    printf("After decrement value of a is: %d\n",a);

    return 0;

}
