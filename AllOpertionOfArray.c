#include<stdio.h>
#include<conio.h>
void main()
{
    system("CLS");
    int n,i,j,ch,temp,del,t;
    int s,f=0,p=0;
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
    printf("\n\e[7;35mYOU HAVE FOLLOWING OPERTION WHICH CAN BE PERFORMED ON ARRAY :\e[m");
    printf("\n\n\e[1;32mCHOICE 01\e[m \e[0;30m--->\e[m \e[1;33mFor sorting array in ascending order\e[m");
    printf("\n\e[1;32mCHOICE 02\e[m \e[0;30m--->\e[m \e[1;33mFor sorting array in descending order\e[m");
    printf("\n\e[1;32mCHOICE 03\e[m \e[0;30m--->\e[m \e[1;33mFor Selection Sort\e[m");
    printf("\n\e[1;32mCHOICE 04\e[m \e[0;30m--->\e[m \e[1;33mFor Bubble Sort\e[m");
    printf("\n\e[1;32mCHOICE 05\e[m \e[0;30m--->\e[m \e[1;33mFor Linear Search\e[m");
    printf("\n\e[1;32mCHOICE 06\e[m \e[0;30m--->\e[m \e[1;33mFor Binary Search\e[m");
    printf("\n\e[1;32mCHOICE 07\e[m \e[0;30m--->\e[m \e[1;33mFor Shifting Array Towards Right\e[m");
    printf("\n\e[1;32mCHOICE 08\e[m \e[0;30m--->\e[m \e[1;33mFor Shifting Array Towards Left\e[m");
    printf("\n\e[1;32mCHOICE 09\e[m \e[0;30m--->\e[m \e[1;33mFor Removing Duplicate Elements\e[m");
    printf("\n\e[1;32mCHOICE 10\e[m \e[0;30m--->\e[m \e[1;33mFor Removing All Duplicate Elements\e[m");
    printf("\n\e[1;32mCHOICE 11\e[m \e[0;30m--->\e[m \e[1;33mFor Deleting any Element by value\e[m");
    printf("\n\e[1;32mCHOICE 12\e[m \e[0;30m--->\e[m \e[1;33mFor Deleting any Element by position\e[m");
    printf("\n\n\e[1;31mYOUR CHOICE :\e[m ");
    scanf("%d",&ch);
    printf("\n");
    switch(ch)
    {
        case 1:
        printf("Array before sorting : ");
        for ( i = 0; i <n; i++)
        {
            printf("%d\t",arr[i]);
        }
        for(i=0;i<n-1;i++)
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
        printf("\n\nArray after sorting in Ascending order : ");
        for ( i = 0; i <n; i++)
        {
            printf("%d\t",arr[i]);
        }
        break;

        case 2:
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
        printf("\n\nArray after sorting in Descending order : ");
        for ( i = 0; i <n; i++)
        {
            printf("%d\t",arr[i]);
        }
        break;

        case 3:
        printf("Array before selection Sort : ");
        for ( i = 0; i <n; i++)
        {
            printf("%d\t",arr[i]);
        }
        for(i=0;i<n-1;i++)
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
        printf("\n\nArray after Selection Sort  : ");
        for ( i = 0; i <n; i++)
        {
            printf("%d\t",arr[i]);
        }
        break;

        case 4:
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
        break;

        case 5:
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
        break;

        case 6:
        printf("\nEnter the element to search : ");
        scanf("%d",&s);
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
        int low=0;
        int high=n-1;
        int mid=(low+high) /2;
        while(low!=high) 
        {
            if(arr[mid]==s) 
            {
                f=1;
                break;
            }
            else if(s<arr[mid]) 
            {
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
            mid=(low+high) /2;
        }
        if(f) 
        {
            printf("\nElement found");
        }
        else
        {
            printf("\nElement not Found");
        }
        break;

        case 7:
        printf("\nArray before Rotation : ");
        for(i=0;i<n;i++)
        {
            printf("%d\t",arr[i]);
        }
        printf("\n\nEnter the number of right rotation : ");
        scanf("%d",&t);
        for(j=1;j<=t;j++)
        {
            temp=arr[n-1];
            for(i=n-1;i>=0;i--)
            {
                arr[i]=arr[i-1];
            }
            arr[0]=temp;
        }
        printf("\nArray after rotating right side %d times : ",t);
        for(i=0;i<n;i++)
        {
            printf("%d\t",arr[i]);
        }
        break;

        case 8:
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
        break;

        case 9:
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
        break;

        case 10:
        int c=0,k=0;
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
        break;

        case 11:
        printf("\nEnter the array element to delete : ");
        scanf("%d",&del);
        for(i=0;i<n;i++) 
        {
            if(arr[i]==del) 
            {
                p=i;
                break;
            }
        }
        for(i=p;i<n-1;i++) 
        {
            arr[i]=arr[i+1];
        }
        printf("\nArray after deleting element : ");
        for(i=0;i<n-1;i++) 
        {
            printf("%d\t",arr[i]);
        }
        break;

        case 12:
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
        break;

        default :
        printf("\n\e[9;30mWRONG CHOICE\e[m");
        printf("\n\e[7;32mTRY AGAIN\e[m");
    }
    getch();
}