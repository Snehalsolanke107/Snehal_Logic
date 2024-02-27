// Find factor of input and print that sum.
#include<stdio.h>

int SumFactors(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    //      1               2       3
    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)   // 4
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}
int main()
{   
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    iRet = SumFactors(iValue);
    printf("Sum of factors are : %d",iRet);

    return 0;
}