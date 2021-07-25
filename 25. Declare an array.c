#include<stdio.h>
int main()
{
    printf("This program is written by Mohd Afrid\n");
    
    int array1[5]={1,2,3,4,5};
 
    printf("The numbers are %d \n",array1[0]);
    printf("The numbers are %d \n",array1[1]);
    printf("The numbers are %d \n",array1[2]);
    printf("The numbers are %d \n",array1[3]);
    printf("The numbers are %d \n",array1[4]);

	int i;
	int array2[]={6,7,8,9,10};
	for(i=0; i<=4; i++)
	{
	  printf("\nThe numbers are %d",array2[i]);	
	}
    int j; 
    int array3[5];
    for(j=0; j<=4; j++)
     { 
        printf("\n\nEnter the number : ");
        scanf("%d",&array3[j]);
     }
     int k;
     for(k=0; k<=4; k++)
     {
         printf("The numbers are %d \n",array3[k]);
     }
	return 0;
}
