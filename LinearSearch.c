#include<stdio.h>
#include<conio.h>
void main()
{
    system("CLS");
    int i,j,n,s,p=0,f=0;
    printf("Enter array size : ");
    scanf("%d",&n);
    printf("\n");
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("Enter %d element : ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\nEnter the element to search : ");
    scanf("%d",&s);
    for(i=0;i<n;i++)
    {
        if (s==arr[i])
        {
            f=1;
            p=i+1;
            break;
        }
    }
    if (f)
    {
        printf("Number found at %d position",p);
    }
    else
    {
        printf("Number Not Found");
    }
    getch();
}