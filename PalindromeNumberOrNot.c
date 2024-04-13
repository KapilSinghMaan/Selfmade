#include<stdio.h>
#include<conio.h>
void main()
{
    int num,temp,rev;
    printf("Enter any Number : ");
    scanf("%d",&num);
    temp=num;
    while (num!=0)
    {
        int a=num%10;
        rev=a+(10*rev);
        num=num/10;
    }
    if (rev==temp)
    {
        printf("\n%d is a Palindrome Number",temp);
    }
    else
    {
        printf("\n%d is not a Palindrome Number",temp);
    }
    getch();
}