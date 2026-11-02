#include<stdio.h>
#include<stdio.h>

double CircleArea(float fRadius)
{
    double dArea = 0.0;
    const float PI = 3.14f;

    dArea = PI * fRadius * fRadius;

    return dArea;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;
    
    printf("Enter radius: ");
    scanf("%f", &fValue);
    
    dRet = CircleArea(fValue);
    
    printf("Area is %lf\n", dRet);
    
    return EXIT_SUCCESS;
}
