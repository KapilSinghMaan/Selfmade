#include<stdio.h>
#include<conio.h>
void main()
{
    int num,temp,sum;
    printf("Enter any Number : ");
    scanf("%d",&num);
    temp=num;
    while (num!=0)
    {
        int a=num%10;
        sum=sum+(a*a*a);
        num=num/10;
    }
    if (sum==temp)
    {
        printf("\n%d is an Armstrong Number",temp);
    }
    else
    {
        printf("\n%d is not an Armstrong Number",temp);
    }
    getch();
}