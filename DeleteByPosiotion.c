#include<stdio.h>
#include<conio.h>
void main()
{
    system("CLS");
    int n,i,p;
    printf("\e[7;30mEnter size of array :\e[m ");
    scanf("%d",&n);
    int arr[n];
    printf("\n");
    for ( i = 0; i <n; i++)
    {
        printf("Enter %d element : ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\n");
    printf("\nEnter the position of element to be deleted : ");
    scanf("%d",&p);
    for(i=p-1;i<n-1;i++) 
    {
        arr[i]=arr[i+1];
    }
    printf("\nArray after deleting element : ");
    for(i=0;i<n-1;i++) 
    {
        printf("%d\t",arr[i]);
    }
    getch();
}