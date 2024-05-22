#include<stdio.h>
#include<conio.h>
void main()
{
    system("CLS");
    int n,i,j,temp;
    printf("Enter size of array : ");
    scanf("%d",&n);
    int arr[n];
    printf("\n");
    for ( i = 0; i <n; i++)
    {
        printf("Enter %d element : ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\n");
    printf("Array before sorting : ");
    for ( i = 0; i <n; i++)
    {
        printf("%d\t",arr[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]<arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("\nArray after sorting in Descending order : ");
    for ( i = 0; i <n; i++)
    {
        printf("%d\t",arr[i]);
    }
    getch();
}