#include<stdio.h>
#include<conio.h>
void main()
{
    int num;
    printf("Enter any Integer : ");
    scanf("%d",&num);
    if(num>0)
    {
        printf("\n%d is Positive Number",num);
    }
    else if(num==0)
    {
        printf("\n%d is Zero",num);
    }
    else
    {
        printf("\n%d is a Negative Number",num);
    }
    getch();
}