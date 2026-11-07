#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL CheckGreater(int iNo)
{
    if(iNo > 100)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
    return FALSE;
}

int main()
{
 int iValue=0;
 BOOL bRet =FALSE;

 printf("Please enter number:\n");
 scanf("%d",&iValue);

  bRet=CheckGreater(iValue);

 if(iValue > 100)
 {
    printf("Greater");
 }
 else
 {
    printf("Smaller");
 }

 bRet=CheckGreater(iValue);



    return EXIT_SUCCESS;
}