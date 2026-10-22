#include<stdio.h>
#include<stdlib.h>

 void Display(int iNo, int iFrequency)
 {
    int icnt=0;
    if(iFrequency<0)
    {
        iFrequency=-iFrequency;
    }

    for(icnt=1;icnt<=iFrequency;icnt++)
    {
        printf(" %d ",iNo);
    }
    printf(" \n");

 }
 int main()
 {
    int iValue=0;
    int iCount=0;

    printf("Enter first number:\n");
    scanf("%d",&iValue);

    printf("Enter second number (frequency):\n");
    scanf("%d",&iCount);

    Display(iValue,iCount);




    return EXIT_SUCCESS;
 }

