#include<stdio.h>
#include<conio.h>
void main()
{
    int num,i,sum=0;
    printf("Enter Natural Number limit : ");
    scanf("%d",&num);
    for ( i = 0; i <=num; i++)
    {
        sum=sum+i;
    }
    printf("%d is the total sum of natural number till %d",sum,num);
    getch();
}