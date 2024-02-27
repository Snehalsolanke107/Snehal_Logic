#include <stdio.h>

int DisplayExamTime(int iStanard)
{
    if (iStanard == 1)
    {
        printf("Your exam is at 8 AM\n");
    }
    else if (iStanard == 2)
    {
        printf("Your exam is at 9 AM\n");
    }
    else if (iStanard == 3)
    {
        printf("Your exam is at 10 AM\n");
    }
    else if (iStanard == 4)
    {
        printf("Your exam is at 11 AM\n");
    }
    else if (iStanard == 5)
    {
        printf("Your exam is at 12 PM\n");
    }
    else
    {
        printf("Valid input..\n");
    }
    
}
int main()
{
    auto int iValue = 0;

    printf("Enter your standard : \n");
    scanf("%d",&iValue);

    DisplayExamTime(iValue);

    return 0;
}