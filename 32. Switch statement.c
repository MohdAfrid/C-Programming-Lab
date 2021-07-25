#include<stdio.h>
int main()
{
 printf("This program is written by Mohd Afrid\n");
 int choice,a,b,sum,sub,multiply, division;
 
 printf("Press 1 for Addition\n");
 printf("Press 2 for Subtraction\n");
 printf("Press 3 for Multiplication\n");
 printf("Press 4 for Division\n");
 printf("Press 5 for Exit\n");
 
 printf("Enter two number : ");
 scanf("%d %d",&a,&b);
 
 printf("Enter your choice : ");
 scanf("%d",&choice);
 
 switch (choice)
 {
   case 1:
   sum=a+b;
   printf("Sum is %d",sum);
   break;
   
   case 2:
   sub=a-b;
   printf("Sub is %d",sub);
   break;
   
   case 3:
   multiply=a*b;
   printf("Multiply is %d",multiply);
   break;
   
   case 4:
   division=a/b; 
   printf("Division is %d",division);
   break;
   
   case 5:
   exit(0);
  
   default :
   printf("Invalid choice");
   break;
 }
   return 0;
}
