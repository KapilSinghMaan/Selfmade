#include<stdio.h>
#include<conio.h>
 void main()
{
    int i,j,n,temp;
    printf("Enter size of array : ");
    scanf("%d",&n);
    int arr[n];
    printf("\n");
    for(i=0;i<n;i++) 
    {
        printf("Enter %d element : ",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++) 
    {
        for(j=0;j<n-i-1;j++) 
        {
            if(arr[j]>arr[j+1]) 
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("\nSorted : ");
    for(i=0;i<n;i++) 
    {
        printf("%d\t",arr[i]);
    }
    for(i=0;i<n-1;i++) 
    {
        if(arr[i]==arr[i+1]) 
        {
            for(j=i+1;j<n-1;j++) 
            {
                arr[j]=arr[j+1];
            }
            n--;
            i--;
        }
    }
    printf("\n\n");
    for(i=0;i<n;i++) 
    {
        printf("%d\t",arr[i]);
    }
    getch() ;
}