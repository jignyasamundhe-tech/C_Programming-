#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL CheckEven(int iNo)
{
    int iCnt=0;

    if(iNo % 2 == 0)
    {
        return TRUE;
    }
    else
    {

        return FALSE;
    }
    
    
}
int main()
{
    int iValue=0;
   BOOL bRet=FALSE;

   printf("Enter a Number:\n");
   scanf("%d",&iValue);


   bRet=CheckEven(iValue);

   
   if(bRet == TRUE)
    {
        printf("%d is an Even number.\n", iValue);
    }
    else
    {
        printf("%d is an Odd number.\n", iValue);
    }

  return EXIT_SUCCESS;
}