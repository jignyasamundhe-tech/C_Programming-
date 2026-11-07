#include<stdio.h>
#include<stdlib.h>

int MultiFactors(int iNo)
{
    int iDigit =0;
    int iMulti =1;

      if(iNo <= 0)
    {
        return 0;
    }

    for(iDigit = 1;iDigit <= iNo/2;iDigit++)
    {
        if((iNo %iDigit)==0)
        {
            iMulti = iMulti * iDigit;
        }

}
return iMulti;
}

int main()
{
    int iValue=0;
    int iRet =0;

    printf("Enter value:\n");
    scanf("%d",&iValue);

    iRet=MultiFactors(iValue);

    printf("Multiplication of Factors is:%d\n",iRet);


    return EXIT_SUCCESS;
}