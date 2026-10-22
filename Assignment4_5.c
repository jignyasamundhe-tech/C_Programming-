#include<stdio.h>
#include<stdlib.h>

void checkdivisibility(int iValue)
{
    if((iValue % 5)==0)
    {
        printf("Number is Divisible bu 5\n");

    }
    else
    {
        printf("Number is not Divisible by 5\n");
    }
    printf("\n");
}
int main()
{
    int iValue=0;

    printf("Enter Value\n");
    scanf("%d",&iValue);

    checkdivisibility(iValue);

    return EXIT_SUCCESS;
}