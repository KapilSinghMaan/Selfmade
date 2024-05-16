#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,k,n;
    printf("Enter height(half) of hour glass : ");
    scanf("%d",&n);
    printf("\n\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf(" ");
        }
        for(k=n;k>=i;k--)
        {
            printf("* ");
        }
        printf("\n");
    }
    for(i=n-1;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf(" ");
        }
        for(k=n;k>=i;k--)
        {
            printf("* ");
        }
        printf("\n");
    }
    getch();
}