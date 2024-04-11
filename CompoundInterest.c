#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    float P,R,T,A,CI;
    printf("Enter the Principal Amount : ");
    scanf("%f",&P);
    printf("\nEnter the Time Period : ");
    scanf("%f",&T);
    printf("\nEnter the Rate of Interest : ");
    scanf("%f",&R);
    A=P*(pow((1+(R/100)),T));
    CI=A-P;
    printf("\nCompound Interest calculated is %f",CI);
    getch();
}