#include <stdio.h>

// Logical OR || -> if any the condition is True then it enters inside the if
// Logical AND && -> if all of the condition is True then it enters inside the if

void DisplayClass(float fMarks)
{
    if((fMarks >= 0.00) || (fMarks < 35.00))  // Filter
    {
        printf("Invalid input..\n");
    }
    if((fMarks >= 35.00) && (fMarks < 35.00))
    {
        printf("Your are fail..\n");
    }
    else if((fMarks >= 35.00) && (fMarks < 50.00))
    {
        printf("Your class is pass class..\n");
    }
    else if((fMarks >= 50.00) && (fMarks < 60.00))
    {
        printf("Your class is second class..\n");
    }
    else if((fMarks >= 60.00) && (fMarks < 75.00))
    {
        printf("Your class is first class..\n");
    }
    else if((fMarks >= 75.00) && (fMarks < 100.00))
    {
        printf("Your class is first with Distinction..\n");
    }
    else
    {
        printf("Your are fail..\n");
    }
}
int main()
{
    auto float fValue = 0.0f;
    printf("Enter your percentage : \n");
    scanf("%f",&fValue);

    DisplayClass(fValue);

    return 0;
}