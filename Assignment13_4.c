#include<stdio.h>
#include<stdlib.h>

int MultiplicationDigits( int iNo)
{
    int iDigit =0;
    int iMulti =1;

      if(iNo == 0)
    {
        return 0;
    }

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
    iDigit = iNo % 10;
    if(iDigit != 0)
    {
    iMulti = iMulti * iDigit; 
    
   }
   iNo = iNo / 10;
}
return iMulti;
}

int main()
{
    int iValue=0;
    int iRet =0;

    printf("Enter values :\n");
    scanf("%d",&iValue);

    iRet =MultiplicationDigits(iValue);

    printf("Multiplication of number is :%d\n",iRet);

    return EXIT_SUCCESS;
}