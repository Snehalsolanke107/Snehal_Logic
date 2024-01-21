#include <stdio.h>
int addition (int no1,int no2)
{
    int sum = 0;
    sum = no1 + no2;
    return sum;
}
int Substraction (int data1,int data2)
{
int Result = 0;
Result = data1 - data2;
return Result;
}

int main()
{
    int value1 = 10;
    int value2 = 11;
    int ans = 0;
    
    ans = addition(value1,value2);
    printf("addition is : %d\n",ans);

    ans = substraction(value1,value2);
    printf("substraction is : %d\n",ans);
    return 0;
}