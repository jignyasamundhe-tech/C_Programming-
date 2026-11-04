#include<stdio.h>
#include<stdlib.h>

void RangeDisplayEven(int iStart,int iEnd)
{
    int iCnt=0;

    
    if(iStart>iEnd)
    {
        printf("Invalid range\n");
        return ;
    }
    for( iCnt = iStart ; iCnt <= iEnd ; iCnt++)
    {
        if((iCnt % 2)==0)
        {
            printf("%d\t",iCnt);
        }
        
    }
        printf("\n");

}
int main()
{
    int iValue1 = 0 , iValue2 = 0;

    printf("Enter first number\n");
    scanf("%d",&iValue1);

    printf("Enter second number\n");
    scanf("%d",&iValue2);

    RangeDisplayEven(iValue1,iValue2);

    return EXIT_SUCCESS;

}