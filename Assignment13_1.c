#include<stdio.h>
#include<stdlib.h>

int CountEven( int iNo)
{
    int iCnt = 0;
    int iCount = 0;
    
    if(iNo == 0)
    {
        return 1;
    }
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    while(iNo > 0)
    {  
        iCnt =iNo % 10;
        if(iCnt % 2 == 0)
        {
               iCount++;
        }
        iNo = iNo / 10;
       }
return iCount;
    
}
int main()
{
    int iValue = 0;
    int iRet =0;

    printf("enter the values:\n");
    scanf("%d",&iValue);

    iRet =CountEven(iValue);
    printf("count of evennumbers are: %d\n",iRet);

    return EXIT_SUCCESS;
}