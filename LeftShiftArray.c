#include<stdio.h>
#include<conio.h>
void main()
{
    system("CLS");
    int i,temp,j,n,t;
    printf("Enter array size : ");
    scanf("%d",&n);
    printf("\n");
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("Enter %d element : ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\nArray before Rotation : ");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n\nEnter the number of left rotation : ");
    scanf("%d",&t);
    for(j=1;j<=t;j++)
    {
        temp=arr[0];
        for(i=0;i<n-1;i++)
        {
            arr[i]=arr[i+1];
        }
        arr[n-1]=temp;
    }
    printf("\nArray after rotating left side %d times : ",t);
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    getch();
}