#include<stdio.h>
#include<conio.h>
void main()
{
    int num,i;
    printf("Enter to number for table : ");
    scanf("%d",&num);
    printf("\nMultiplication Table of %d :",num);
    for ( i = 1; i <=10; i++)
    {
        printf("\n%d * %d = %d",num,i,(num*i));
    }
    getch();
}