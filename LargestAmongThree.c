#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    printf("Enter first number : ");
    scanf("%d",&a);
    printf("\nEnter second number : ");
    scanf("%d",&b);
    printf("\nEnter third number : ");
    scanf("%d",&c);
    if (a>=b&&a>=c)
    {
        printf("\n%d is largest among three",a);
    }
    else if (b>=a&&b>=c)
    {
        printf("\n%d is largest among three",b);
    }
    else
    {
        printf("\n%d is largest among three",c);
    }
    getch();
}