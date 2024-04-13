#include<stdio.h>
#include<conio.h>
void main()
{
    int n,sq,sum=0;
    printf("Enter any Number : ");
    scanf("%d",&n);
    sq=n*n;
    while (sq!=0)
    {
        int a=sq%10;
        sum=sum+a;
        sq=sq/10;
    }
    if (sum==n)
    {
        printf("\n%d is a Neon Number",n);
    }
    else
    {
        printf("\n%d is not a Neon Number",n);
    }
    getch();
}