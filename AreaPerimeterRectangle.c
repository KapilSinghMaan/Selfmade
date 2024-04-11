#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,area,peri;
    printf("Enter Length of Rectangle : ");
    scanf("%d",&a);
    printf("\nEnter Breath of Rectangle : ");
    scanf("%d",&b);
    area=(a*b);
    peri=2*(a+b);
    printf("\nArea of Rectangle is %d",area);
    printf("\nPerimeter of Rectangle is %d",peri);
    getch();
}