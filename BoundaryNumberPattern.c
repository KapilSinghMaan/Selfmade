#include<stdio.h>
#include<conio.h>
void main()
{
    system("CLS");
    int n,i,j,k,l,m,s;
    printf("Enter Boundary Number : ");
    scanf("%d",&n);
    printf("\n\n");
    for ( i = n; i >=1; i--)
    {
        for(j=n;j>=i;j--)
        {
            printf("%d ",j);
        }
        for ( k = 1; k<i; k++)
        {
            printf("%d ",i);
        }
        for(l=1;l<i;l++)
        {
            printf("%d ",i);
        }
        for ( m = (i+1); m <=n; m++)
        {
            printf("%d ",m);
        }
        printf("\n");
    }
    for(i=2;i<=n;i++)
    {
        for(j=n;j>=i;j--)
        {
            printf("%d ",j);
        }
        for(k=2;k<=i;k++)
        {
            printf("%d ",i);
        }
        for(l=2;l<=i;l++)
        {
            printf("%d ",i);
        }
        for(m=(i+1);m<=n;m++)
        {
            printf("%d ",m);
        }
        printf("\n");
    }
    getch();
}