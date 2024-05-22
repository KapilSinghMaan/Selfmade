#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,j,temp;
    printf("Enter size of array : ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("Enter %d element : ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\nArray before bubble sort : ");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("\n\nArray after Bubble Sort : ");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    getch();
}