#include<stdio.h>
#include<stdlib.h>

int CheckEligibility(int iAge)
    {
        if(iAge>=18)
        {
            printf("Is Eligible for Voting\n");
        }
        else
        {
            printf("Is Not Eligible\n");
        }
        printf("\n");
    }




int main()
{
    int iAge;

    printf("Enter your Age:\n");
    scanf("%d",&iAge);

    CheckEligibility(iAge);


    return EXIT_SUCCESS;
}