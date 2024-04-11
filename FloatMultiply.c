#include<stdio.h>
#include<conio.h>
void main()
{
    float a,b;
    printf("Enter first Float Number : ");
    scanf("%f",&a);
    printf("\nEnter second Float Number : ");
    scanf("%f",&b);
    float f=a*b;
    printf("\nThe result on multipying %f and %f is %f",a,b,f);
    getch();
}