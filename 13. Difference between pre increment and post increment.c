# <stdio.h>

int main()
{
    printf("This program is written by Mohd Afrid\n");
    
    int a=5;
    
    printf("a=5\n");
    printf("Post Increment = a++\n");
    //post increment first print the value then increase the value
    printf("Value of a before post increment : %d\n",a);
    
    int b=a++;
    
    printf("Value of a after post increment : %d\n",b);
    printf("Current value of a : %d\n",a);
   
    printf("Pre Increment = ++a\n");
    //pre increment first increase the value then print the value
    printf("Value of a before pre increment : %d\n",a);
    
    int c=++a;
    
    printf("Value of a after pre increment : %d\n",c);
    
    return 0;
}
