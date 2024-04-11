#include<stdio.h>
#include<conio.h>
void main()
{
    float C,F;
    printf("Enter Temperature in Fahrenheit : ");
    scanf("%f",&F);
    C=(F-32.0)*(5.0/9.0);
    printf("\n%f Fahrenheit Temperature is %f Celsius",F,C);
    getch();
}