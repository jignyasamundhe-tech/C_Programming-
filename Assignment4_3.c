#include<stdio.h>
#include<stdlib.h>

void FindGreaterNumber(int iNo1,int iNo2)
{
    if(iNo1>iNo2)
    {
        printf("%d Is Greater\n",iNo1);

    }
    else if(iNo2>iNo1)
    {
        printf("%d is Greater\n",iNo2);
    }
    else 
    {
        printf("Both numbers are Equal");
    }
    printf("\n");
}
int main()
{
    int iValue1=0;
    int iValue2=0;

    printf("Enter first Number\n");
    scanf("%d",&iValue1);

     printf("Enter second number\n");
    scanf("%d",&iValue2);

    FindGreaterNumber(iValue1,iValue2);

  

    return EXIT_SUCCESS;


}