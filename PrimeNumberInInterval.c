#include<stdio.h>
#include<conio.h>
void main()
{
    int n,m,i,j,c=0;
    printf("Enter starting point of Prime Number : ");
    scanf("%d",&n);
    printf("\nEnter ending point of Prime Number : ");
    scanf("%d",&m);
    printf("\nPrime Numbers are :");
    for ( i = n; i <=m; i++)
    {
        for ( j = 2; j < i; j++)
        {
            if (i%j==0)
            {
                c++;
            }
        }
        if (c==0)
        {
            printf(", %d",i);
        }
        c=0;
    }
    getch();
}