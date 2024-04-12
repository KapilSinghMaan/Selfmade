#include<stdio.h>
#include<conio.h>
void main()
{
    int num;
    printf("Enter any number : ");
    scanf("%d",&num);
    if (num%2==0)
    {
        printf("\n%d is a Even Number",num);
    }
    else
    {
        printf("\n%d is a Odd Number",num);
    }
    getch();
}