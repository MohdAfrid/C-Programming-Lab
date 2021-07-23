#include <stdio.h>
int main()
{
    printf("This program is written by Mohd Afrid\n");
    
    int a=2;
    int b=50;
    
    printf("Value of b after 'b+=a' : %d\n",b+=a);
    printf("Value of b after 'b-=a' : %d\n",b-=a);
    printf("Value of b after 'b*=a' : %d\n",b*=a);
    printf("Value of b after 'b/=a' : %d\n",b/=a);
    printf("Value of b after 'b%=a' : %d\n",b%=a);
    return 0;
}
