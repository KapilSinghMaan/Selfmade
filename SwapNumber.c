#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,temp;
    printf("Enter the value of a : ");
    scanf("%d",&a);
    printf("\nEnter the value of b : ");
    scanf("%d",&b);
    temp=a;
    a=b;
    b=a;
    printf("\nAfter swapping value of a = %d",a);
    printf("\nAfter swapping value of b = %d",b);
    getch();
}