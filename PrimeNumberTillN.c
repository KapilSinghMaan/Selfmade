#include<stdio.h>
#include<conio.h>
void main()
{
    int num,j,i,c;
    printf("Enter Prime Number Range : ");
    scanf("%d",&num);
    printf("\nPrime Number till %d are : \n",num);
    for ( i = 1; i <=num; i++)
    {
        c=0;
        for  (j = 1; j <= i; j++)
        {
            if (i%j==0)
            {
                c++;
            }
        }
        if (c<=2)
        {
            printf("%d\n",i);
        }
    }
    getch();
}