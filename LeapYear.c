#include<stdio.h>
#include<conio.h>
void main()
{
    int yr;
    printf("Enter any Year : ");
    scanf("%d",&yr);
    if (yr%4==0)
    {
        printf("\n%d is a Leap year",yr);
    }
    else
    {
        printf("\n%d is not a Leap year",yr);
    }
    getch();
}