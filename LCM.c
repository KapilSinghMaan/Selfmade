#include<stdio.h>
#include<conio.h>
void main()
{
    int max,a,b,i,L=1;
    printf("Enter First Number : ");
    scanf("%d",&a);
    printf("\nEnter Second Number : ");
    scanf("%d",&b);
    max=(a>=b)?a:b;
    while (1)
    {
        if (max%a==0&&max%b==0)
        {
            L=max;
            break;
        }
        max++;
    }
    printf("\nLCM : %d",L);
    getch();
}