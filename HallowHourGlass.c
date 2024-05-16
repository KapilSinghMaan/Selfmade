#include<stdio.h>
#include<conio.h>
void main()
{
    system("CLS");
    int i,j,k,n,a;
    printf("Enter height(half) of hour glass : ");
    scanf("%d",&n);
    printf("\n\n");
    for(a=1;a<=n+1;a++)
    {
        printf("* ");
    }
    printf("\n");
    for(i=1;i<n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf(" ");
        }
        for(k=n;k>=i;k--)
        {
            if(k==n||k==i)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    for(a=1;a<n;a++)
    {
        printf(" ");
    }
    printf(" *\n");
    for(i=n-1;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf(" ");
        }
        for(k=n;k>=i;k--)
        {
            if(k==n||k==i)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    for(a=1;a<=n+1;a++)
    {
        printf("* ");
    }
    getch();
}