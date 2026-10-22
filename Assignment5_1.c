#include<stdio.h>
#include<stdlib.h>

void FindGreatest(int iFirst,int iSecond,int iThird)

{
    if((iFirst>iSecond)&&(iFirst>iThird))
    {
        printf("%d Is Gretest\n",iFirst);
    }
    else if((iSecond>iFirst)&&(iSecond>iThird))
    {
        printf("%d Is Gretest\n",iSecond);

    }
    else if((iThird>iFirst)&&(iThird>iSecond))
    {
        printf("%d Is Gretest\n",iThird);
    }
    else
    {
        printf("\n");
    }
}

int main()
{
    int iValue1=0,iValue2=0,iValue3=0;

    printf("enter first number:\n");
    scanf("%d",&iValue1);

      printf("enter second number:\n");
    scanf("%d",&iValue2);

      printf("enter third number:\n");
    scanf("%d",&iValue3);

    FindGreatest(iValue1,iValue2,iValue3);

    return EXIT_SUCCESS;







    return EXIT_SUCCESS;
}