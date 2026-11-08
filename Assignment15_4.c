#include<stdio.h>
#include<stdlib.h>

int Multiply(int iNo1, int iNo2, int iNo3)
{
    int iAns = 1;
    int iCount = 0;

    if(iNo1 != 0)
    {
        iAns = iAns * iNo1;
        iCount++;
    }
    if(iNo2 != 0)
    {
        iAns = iAns * iNo2;
        iCount++;
    }
    if(iNo3 != 0)
    {
        iAns = iAns * iNo3;
        iCount++;
    }

    if(iCount == 0)
    {
        return 0;
    }

    return iAns;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;
    int iRet = 0;

    printf("Please enter three numbers: ");
    scanf("%d %d %d", &iValue1, &iValue2, &iValue3);

    iRet = Multiply(iValue1, iValue2, iValue3);

    printf("Output: %d\n", iRet);

    return EXIT_SUCCESS;
}
