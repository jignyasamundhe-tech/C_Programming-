#include<stdio.h>
#include<stdlib.h>

int SumNonFactors(int iNo)
{
    int iDigit =0;
    int iSum =0;

      if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iDigit = 1 ;iDigit < iNo;iDigit++)
    {
        if((iNo % iDigit)!=0)
        {
            iSum =iSum + iDigit;
        }

}
  return iSum;
}

int main()
{
    int iValue=0;
    int iRet =0;

    printf("Enter value:\n");
    scanf("%d",&iValue);

    iRet=SumNonFactors(iValue);
    printf("sum of non factors is :%d\n",iRet);

    return EXIT_SUCCESS;
}