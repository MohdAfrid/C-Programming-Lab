#include <stdio.h>
void add1();
int var1,var2,var3;
int main()
{
    printf("This program is written by Mohd Afrid\n");
    add1(2,3);
    return 0;
}
//No argument and No return type
void add1()
{
    int varl, var2;
    printf("Enter two numbers : ");
    scanf("%d %d", &varl, &var2);
    printf("The addition of two numbers is : %d", varl+var2);
}

//No argument and Have return type

int add2()
{
    int varl, var2, var3;
    printf("Enter two numbers : ");
    scanf("%d %d", &varl, &var2);
    var3=var1+var2;
    return var3;
}

//Have argument and No return type
void add3(int a, int b)
{
    printf("The addition of two numbers are: %d", a+b);
}

//Have argument and Have return type
int add4(int a, int b)
{
    int c;
    c=a+b;
    return c;
}
