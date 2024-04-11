#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b;
    printf("Enter First Number:");
    scanf("%d",&a);
    printf("\nEnter Second Number:");
    scanf("%d",&b);
    int sum=a+b;
    printf("The result on adding %d and %d is : %d",a,b,sum);
    getch();
}