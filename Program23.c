#include <stdio.h>

int Minimum(int iNo1, int iNo2)
{
    if(iNo1 < iNo2) // Find Smallest number 
    {
        return iNo1;
    }
    else 
    {
        return iNo2;
    }

}
int main()
{
    auto int iValue1 = 0;
    auto int iValue2 = 0;
    auto int iRet= 0;

    printf("Enter first number : \n");
    scanf("%d",&iValue1);

    printf("Enter second number : \n");
    scanf("%d",&iValue2);

    iRet = Minimum(iValue1, iValue2);

    printf("smallest number is : %d\n",iRet);

    return 0;
}