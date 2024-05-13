#include<stdio.h>
#include<conio.h>
void main()
{
    int i,a,b,c,num,sum=0;
    printf("Enter number of terms : ");
    scanf("%d",&num);
    a=0,b=1;
    sum=a+b;
    for(i=2;i<num;i++)
    {
        c=a+b;
        a=b;
        b=c;
        sum=sum+c;
    }
    printf("\nSum :%d",sum);
    getch();
}