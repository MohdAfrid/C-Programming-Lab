#include<stdio.h>
int main()
{
    printf("This program is written by Mohd Afrid\n");
    
    int a=10;
    int b=20;
    int c=30;
    int result;
    
    //logical AND operator
    result=(a>c)&&(c<b);
    printf("(a>c)&&(c<b) is %d \n",result);
    result=(a<c)&&(c<b);
    printf("(a<c)&&(c<b) is %d \n",result);
    result=(a<c)&&(c>b);
    printf("(a<c)&&(c>b) is %d \n",result);
    result=(a>c)&&(c>b);
    printf("(a>c)&&(c>b) is %d \n",result);
    
    //logical OR operator
    result=(a>c)||(c<b);
    printf("(a>c)||(c<b) is %d \n",result);
    result=(a<c)||(c<b);
    printf("(a<c)||(c<b) is %d \n",result);
    result=(a<c)||(c>b);
    printf("(a<c)||(c>b) is %d \n",result);
    result=(a>c)||(c>b);
    printf("(a>c)||(c>b) is %d \n",result);
    
    //logical NOT operator
    
     result=!(a>c);
    printf("!(a>c) is %d\n",result);
    result=!(a<c);
     printf("!(a<c) is %d",result);
    
    return 0;
    }
