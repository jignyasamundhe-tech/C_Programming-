#include<stdio.h>
#include<stdlib.h>

int RangeSumEven(int iStart,int iEnd)
{
    int iCnt=0;
    int iSum =0;

    if((iStart < 0)||(iEnd < 0)||(iStart > iEnd))
    {
        printf("Invalid input\n");
        return ;
    }

    for( iCnt = iStart ; iCnt <= iEnd ; iCnt++)
    {
        if((iCnt % 2)==0)
        {
            printf("",iCnt);
        }
       
        iSum = iSum + iCnt;    
    }
    return iSum;

        printf("\n");
}

int main()
{
    int iValue1 = 0 , iValue2 = 0,iRet = 0 ;

    printf("Enter first number\n");
    scanf("%d",&iValue1);

    printf("Enter second number\n");
    scanf("%d",&iValue2);

    iRet=RangeSumEven(iValue1,iValue2);

    printf("Addition of even numbers are : %d\n",iRet);

    return EXIT_SUCCESS;

}