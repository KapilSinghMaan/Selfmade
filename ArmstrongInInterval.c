#include<stdio.h>
#include<conio.h>
void main()
{
    int num1,num2,temp,sum,i;
    printf("Enter starting range for Armstrong Number : ");
    scanf("%d",&num1);
    printf("\nEnter ending point of Armstrong Number : ");
    scanf("%d",&num2);
    for(i=num1;i<=num2;i++)
    {
        num1=i;
        temp=i;
        while (num1!=0)
        {
            int a=num1%10;
            sum=sum+(a*a*a);
            num1=num1/10;
        }
        if (sum==temp)
        {
            printf("\n%d is an Armstrong Number",temp);
        }
        sum=0;
    }
    getch();
}