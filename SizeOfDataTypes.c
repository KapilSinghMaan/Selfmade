#include<stdio.h>
#include<conio.h>
void main()
{
    int Interger;
    float Float;
    double Double;
    char Character;
    long Long;
    printf("Size of Integer Data Type : %ld",sizeof(Interger));
    printf("\nSize of Float Data Type : %ld",sizeof(Float));
    printf("\nSize of Double Data Type : %ld",sizeof(Double));
    printf("\nSize of Character Data Type : %ld",sizeof(Character));
    printf("\nSize of Long Data Type : %ld",sizeof(Long));
    getch();
}