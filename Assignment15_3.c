#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL CheckEqual(int iNo1,int iNo2)
{

    if(iNo1 == iNo2)
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
 int iValue1=0,iValue2 =0;
 BOOL bRet =FALSE;

 printf(" Enter  two numbers:\n");
 scanf("%d %d",&iValue1,&iValue2);

  bRet=CheckEqual(iValue1,iValue2);

 if(iValue1 == iValue2)
 {
    printf("Equal");
 }
 else
 {
    printf("Not Equal");
 }

    return EXIT_SUCCESS;
}