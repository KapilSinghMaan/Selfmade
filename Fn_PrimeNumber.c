#include<stdio.h>
#include<conio.h>
int prime(int n);
void main()
{
    int a,f;
    printf("Enter any number : ");
    scanf("%d",&a);
    f=prime(a);
    if(f)
    {
        printf("Prime Number");
    }
    else
    {
        printf("Not Prime Number");
    }
    getch();
}
int prime(int n)
{
    int i,c=1;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            c--;
            break;
        }
    }
    return c;
}