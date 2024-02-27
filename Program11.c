// Calculate Cube of accept number.

#include <stdio.h>

int CalculateCube(int iValue)
{
    int iCube = 0;

    iCube = iValue * iValue * iValue;
    return iCube;
}
int main()
{
    auto int iNo = 0;
    auto int iAns = 0;

    printf("Enter a number :\n");
    scanf("%d",&iNo);

    iAns = CalculateCube(iNo);

    printf("Cube is : %d\n",iAns);

    return 0;
} 