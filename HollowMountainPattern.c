#include<stdio.h>
#include<conio.h>
void main()
{
    system("CLS");
    int n,i,j,k=0;
    printf("Enter limit : ");
    scanf("%d",&n);
    for ( i = 1; i <=n; i++)
    {
        printf("|");
        if (i%4==0)
        {
            printf(" *");
            k++;
        }
        else
        {
            for ( j = 1; j <=(i-(4*k)); j++)
            {
                if(j==(i-(4*k)))
                    printf("*");
                else
                    printf(" ");
            }
        }
        printf("\n");
    }
    
    getch();
}