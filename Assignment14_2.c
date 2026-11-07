#include<stdio.h>
#include<stdlib.h>

void FactorsReverse(int iNo)
{
    int iDigit =0;

      if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iDigit = iNo/2;iDigit >= 1;iDigit--)
    {
        if((iNo % iDigit)==0)
        {
            printf("%d\t",iDigit);
        }

}
printf("\n");
}

int main()
{
    int iValue=0;

    printf("Enter value:\n");
    scanf("%d",&iValue);

    FactorsReverse(iValue);

    return EXIT_SUCCESS;
}