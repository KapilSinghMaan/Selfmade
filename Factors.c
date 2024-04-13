#include<stdio.h>
#include<conio.h>
void main()
{
    int num,i;
    printf("Enter any Number : ");
    scanf("%d",&num);
    printf("\nFactors of %d are : 1",num);
    for ( i = 2; i <=num; i++)
    {
        if (num%i==0)
        {
            printf(", %d",i);
        }
    }
    getch();
}