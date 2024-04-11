#include<stdio.h>
#include<conio.h>
void main()
{
    float P,R,T,SI;
    printf("Enter the Principal Amount : ");
    scanf("%f",&P);
    printf("\nEnter the Time Period : ");
    scanf("%f",&T);
    printf("\nEnter the Rate of Interest : ");
    scanf("%f",&R);
    SI=(P*R*T)/100;
    printf("\nThe Simple Interest for %f amount for %f time at %f rate is %f",P,T,R,SI);
    getch();
}