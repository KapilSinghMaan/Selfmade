#include<stdio.h>
#include<stdio.h>
void main()
{
    int r1,r2,i1,i2;
    printf("Enter the Real part of First Number : ");
    scanf("%d",&r1);
    printf("\nEnter the Imaginary part of First Number : ");
    scanf("%d",&i1);
    printf("\nEnter the Real part of Second Number : ");
    scanf("%d",&r2);
    printf("\nEnter the Imaginary part of Second Number : ");
    scanf("%d",&i2);
    printf("\nFirst Complex Number is %d + %di",r1,i1);
    printf("\nSecond Complex Number is %d + %di",r2,i2);
    printf("\nAddition of both Complex number is %d + %di",(r1+r2),(i1+i2));
    getch();
}