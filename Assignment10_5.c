#include<stdio.h>
#include<stdlib.h>

double SquareMeter(int iValue)
{
    double dSqMeter = 0.0;
    const double CONVERSION_FACTOR = 0.0929;

    dSqMeter = iValue * CONVERSION_FACTOR;

    return dSqMeter;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;
    
    printf("Enter area in square feet: ");
    scanf("%d", &iValue);
    
    dRet = SquareMeter(iValue);
    
    printf("Area in square meters is %lf\n", dRet);
    
    return EXIT_SUCCESS;
}
