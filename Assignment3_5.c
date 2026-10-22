#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL CheckVowel(char Cvalue)
{
     if (Cvalue == 'a' || Cvalue == 'e' || Cvalue == 'i' || Cvalue == 'o' || Cvalue == 'u' ||
        Cvalue == 'A' || Cvalue == 'E' || Cvalue == 'I' || Cvalue == 'O' || Cvalue == 'U')
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
    char cValue='\0';
    BOOL bRet=FALSE;

    printf("Enter Initial:\n");
    scanf("%c",&cValue);

   bRet=CheckVowel(cValue);

   if(bRet==TRUE)
   {
    printf("It is  a Vowel\n");
   }
   else
   {
    printf("It is not a Vowel\n");
   }


    return EXIT_SUCCESS;
}