#include<stdio.h>
#include<conio.h>
void primeinterval(int ,int);
void main()
{
    int a,b;
    printf("Enter interval : ");
    scanf("%d%d",&a,&b);
    primeinterval(a,b);
    getch();
}
void primeinterval(int n1,int n2)
{
    printf("Prime Numbers :");
    int i,j,c=0;
    for(i=n1;i<=n2;i++)
    {
        c=0;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }
        if(c==0)
        {
            printf("%d\t",i);
        }
    }
}