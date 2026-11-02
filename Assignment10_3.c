#include<stdio.h>
#include<stdlib.h>

int KMtoMeter(int iNo)
{
    int iMeter = 0;

    iMeter = iNo * 1000;

    return iMeter;
}

int main()
{
    int iValue1 = 0, iRet = 0;
    
    printf("Enter distance: ");
    scanf("%d", &iValue1);
    
    iRet = KMtoMeter(iValue1);
    
    printf("Distance in meters is %d\n", iRet);
    
    return EXIT_SUCCESS;
}
