#include<stdio.h>
#include<conio.h>
void main()
{
    system("CLS");
    int i,j,k,n,s,l;
    printf("Enter number of lines : ");
    scanf("%d",&n);
    s=n*2;
    printf("\n\n");
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=s;j++)
        {
            printf("* ");
        }
        for(k=1;k<=4;k++)
        {
            printf("  ");
        }
        for(l=1;l<=i;l++)
        {
            printf("* ");
        }
        printf("\n");
        s--;
    }
    s=n+2;
    for(i=2;i<=n;i++)
    {
        for(j=1;j<=s;j++)
        {
            printf("* ");
        }
        for(k=1;k<=4;k++)
        {
            printf("  ");
        }
        for(l=1;l<=i;l++)
        {
            printf("* ");
        }
        printf("\n");
        s++;
    }
    getch();
}