#include <stdio.h>

int main() {
    printf("This program is written by Mohd Afrid\n");
    
    int age;
    
    printf("Enter your age : ");
    scanf("%d",&age);
    
    if(age<18)
    {
        printf("You can't get vaccinated\n");
    }
    else if((age>=18)&&(age<=44))
    {
        printf("You can get vaccinated after online registratiion\n");
    }
    else
    {
        printf("You can get vaccinated directly through dispensary");
    }
    return 0;
}
