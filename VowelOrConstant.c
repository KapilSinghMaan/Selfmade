#include<stdio.h>
#include<conio.h>
void main()
{
    char ch;
    printf("Enter any lowercase alphabet : ");
    scanf("%c",&ch);
    if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
        printf("\n%c is a Vowel",ch);
    }
    else
    {
        printf("\n%c is a Consonant",ch);
    }
    getch();
}