#include<stdio.h>
#include<stdlib.h>

int FactorsDifference(int iNo)
{
    int iDigit =0;
    int iSumFact=0;
    int iSumNonFact=0;

      if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iDigit = 1 ;iDigit < iNo;iDigit++)
    {
        if((iNo % iDigit)==0)
        {
            iSumFact =iSumFact + iDigit;
        }
        else
        {
            iSumNonFact = iSumNonFact + iDigit;
        }

}
  return iSumFact - iSumNonFact;
}

int main()
{
    int iValue=0;
    int iRet =0;

    printf("Enter value:\n");
    scanf("%d",&iValue);

    iRet=FactorsDifference(iValue);
    printf("Difference in factors is :%d\n",iRet);

    return EXIT_SUCCESS;
}