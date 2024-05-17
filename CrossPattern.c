#include<stdio.h>
#include<conio.h>
void main() 
{
    system("CLS");
    int i,j,k,n;
    printf("Enter number of lines : ");
    scanf("%d",&n);
    printf("\n\n");
    for(i=n;i>=1;i--)
    {
        for(j=n;j>i;j--) 
        {
            printf("  ");
        }
        for(k=1;k<i*2;k++) 
        {
            if(k==1||k==(i*2-1)) 
            {
                if(i%2==0) 
                    printf("0 ");
                else
                    printf("1 ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    for(i=1;i<=n-1;i++)
    {
        for(j=i;j<n-1;j++) 
        {
            printf("  ");
        }
        for(k=1;k<=i*2+1;k++)
        {
            
            if(i%2==0)
            {
                if(k==1||k==i*2+1)
                    printf("1 ");
                else
                    printf("  ");
            }
            else
            {
                if(k==1||k==i*2+1)
                    printf("0 ");
                else
                    printf("  ");
            }
        }
        printf("\n");
    }
    getch() ;
}