#include<stdio.h>

void Number(int iNo)
{
    if(iNo <=iNo)
    {
        printf("one\n");
    }
    else
    {
        print("Invalis input\n");

    }
    printf("\n");
}

int main()
{
    int iValue = 0;
    
    printf("Enter number: ");
    scanf("%d", &iValue);
    
    Number(iValue);
    
    return 0;
}
