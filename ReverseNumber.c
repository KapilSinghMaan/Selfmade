#include<stdio.h>
#include<conio.h>
void main()
{
    int num,rev=0;
    printf("Enter any Number : ");
    scanf("%d",&num);
    while (num!=0)
    {
        int a=num%10;
        rev=a+(10*rev);
        num=num/10;
    }
    printf("\nReverse Number : %d",rev);
    getch();
}