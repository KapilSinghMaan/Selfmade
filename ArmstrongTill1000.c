#include<stdio.h>
#include<conio.h>
void main()
{
    int i,num,temp,sum=0,a;
    for(i=1;i<=1000;i++)
    {
        num=i;
        temp=i;
        while (num!=0)
        {
            a=num%10;
            sum=sum+(a*a*a);
            num=num/10;
        }
        if (sum==temp)
        {
            printf("\n%d is an Armstrong Number",temp);
        }
        sum=0;
        temp=0;
    }
    getch();
}