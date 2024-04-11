#include<stdio.h>
#include<conio.h>
void main()
{
    int num,i,c=0;
    printf("Enter any Number : ");
    scanf("%d",&num);
    for ( i = 2; i <num; i++)
    {
        if (num%i==0)
        {
            c++;
        }
    }
    if (c>0)
    {
        printf("\n%d is not a Prime Number",num);
    }
    else
    {
        printf("\n%d is a Prime Number",num);
    }
}