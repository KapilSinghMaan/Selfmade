#include<stdio.h>
#include<conio.h>
void main()
{
    char ch;
    float a,b;
    printf("Enter any operation(+,-,*,/) : ");
    scanf("%c",&ch);
    printf("\nEnter the first operand(a) to perform operation : ");
    scanf("%f",&a);
    printf("\nEnter the second operand(b) to perform operation : ");
    scanf("%f",&b);
    switch (ch)
    {
    case '+':
        printf("\n%0.2f %c %0.2f = %0.2f",a,ch,b,(a+b));
        break;
    case '-':
        printf("\n%0.2f %c %0.2f = %0.2f",a,ch,b,(a-b));
        break;
    case '*':
        printf("\n%0.2f %c %0.2f = %0.2f",a,ch,b,(a*b));
        break;
    case '/':
        printf("\n%0.2f %c %0.2f = %f",a,ch,b,(a/b));
        break;
    default:
        printf("\nWrong Choice!!! Try again");
        break;
    }
    getch();
}