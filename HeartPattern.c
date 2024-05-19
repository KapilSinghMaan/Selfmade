#include<stdio.h>
#include<conio.h>
void main()
{
    system("CLS");
    printf("");
    int i,j,k,l,m,s=4,d=17;
    printf("\n\n");
    for(i=3;i>=1;i--)
    {
        for(j=1;j<i;j++)
        {
            printf("  ");
        }
        for(k=1;k<=s;k++)
        {
            //printf("* ");
            printf("\e[1;31m*\e[m ");
        }
        for(l=1;l<i*2;l++)
        {
            printf("  ");
        }
        for(m=1;m<=s;m++)
        {
            //printf("* ");
            printf("\e[1;31m*\e[m ");
        }
        printf("\n");
        s=s+2;
    }
    for(i=1;i<=9;i++)
    {
        for(j=1;j<i;j++)
        {
            printf("  ");
        }
        for(k=1;k<=d;k++)
        {
            //printf("* ");
            printf("\e[1;31m*\e[m ");
        }
        printf("\n");
        d=d-2;
    }
    getch();
}