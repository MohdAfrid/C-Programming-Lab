#include<stdio.h>
int main()
{
    printf("This program is written by Mohd Afrid\n");
    char v;
    int vowels;
    printf("Enter any alphabet : ");
    scanf("%c",&v);
    vowels=(v=='a' || v=='e' || v=='i' || v=='o' || v=='u' || v=='A' || v=='E' || v=='I' || v=='O' || v=='U');
    if(vowels)
    {
    printf("%c is a Vowel\n", v);
    }
    else
   {
    printf("%c is a Consonant", v);
    }
    return 0;
}
