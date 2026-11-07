#include<stdio.h>
#include<stdlib.h>

void NonFactors(int iNo)
{
    int iDigit =0;

      if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iDigit = 1 ;iDigit < iNo;iDigit++)
    {
        if((iNo % iDigit)!=0)
        {
            printf("%d\t",iDigit);
        }

}
printf("\n");
}

int main()
{
    int iValue =0;

    printf("Enter value:\n");
    scanf("%d",&iValue);

    NonFactors(iValue);

    return EXIT_SUCCESS;
}