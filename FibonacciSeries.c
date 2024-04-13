#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n=0,m=1,p,t;
    printf("Enter Fibonacci Series Terms : ");
    scanf("%d",&t);
    printf("\nFibonacci Series :\n");
    printf("%d , %d ",n,m);
    for ( i = 1; i <t-1; i++)
    {
        p=n+m;
        n=m;
        m=p;
        printf(", %d",p);
    }
    getch();
}