#include<stdio.h>
#include<conio.h>
void main()
{
    system("CLS");
    int i,j,n,s,c=0,k=0,temp;
    printf("Enter array size : ");
    scanf("%d",&n);
    printf("\n");
    int arr[n];
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
    for(i=0;i<n;i++)
    {
        c=0;
        s=i;
        while(arr[s]==arr[s+1])
        {
            c++;
            s++;
            i++;
        }
        if (c==0)
        {
            arr[k]=arr[s];
            k++;
        }
    }
    printf("\n\n");
    for(i=0;i<k;i++)
    {
        printf("%d\t",arr[i]);
    }
    getch();
}