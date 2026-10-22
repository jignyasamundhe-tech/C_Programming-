#include<stdio.h>

void Accept(int iNo1)
{
   int icnt=0;
   for(icnt=1;icnt<=iNo1;icnt++)
   {
    printf("*");
   }
}
int main()
{
    int iValue=0;
    iValue=10;

    Accept(iValue);
    return 0;
}