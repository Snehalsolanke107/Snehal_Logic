// problem statement : Accept 2 values form user and perform the addition. 

//step 1 : Understand the problem statement 
// conclusion : we have to accept 2 integers and perform its addition. 

// step 2 : write the algorithm
/*

   START
   Accept first number from user and store it into no1
   Accept second number from user and store it into no2
   Create one variable to store the result named as Ans
   Perform Addition of no1 and no2, store the result in Ans
   Display the result from Ans to the user
   STOP
*/

// step 3 : Deside the programming language (C/C++/Java/Python)
// We select the Programming

// step 4 : Write the Program

#include <stdio.h>
int main()
{
    auto int iValue1 = 0; 
    auto int iValue2 = 0;
    auto int iAns = 0;

    printf("Enter first number : \n");
    scanf("%d",&iValue1);

    printf("Enter second number : \n");
    scanf("%d",&iValue2);

    iAns = iValue1 + iValue2;

    printf("Addition is : %d\n",iAns);

    return 0;
}