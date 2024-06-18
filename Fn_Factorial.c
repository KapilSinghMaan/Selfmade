#include<stdio.h>
#include<conio.h>
void factorial(int);
void main()
{
    int a;
    printf("Enter any number : ");
    scanf("%d",&a);
    factorial(a);
    getch();
}
void factorial(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    printf("Factorial : %d",f);
}