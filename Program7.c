// problem statement : Accept 2 values form user and perform the addition.

//step 1 : Understand the problem statement 
// conclusion : we have to accept 2 integerS and perform its addition.

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

// step 3 : Decide the programming language (C/C++/Java/Python)
// We select the Programming

// step 4 : Write the Program

#include <stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
// Functio Name :       Addition
// Description :        it is used to perform addition of 2 integers
// Input Arguments :    Integer, Integer
// Output :             Integer
// Author :             Snehal Kalyanrao Solanke 
// Date :               25/09/2023
//
//////////////////////////////////////////////////////////////////////////////////

int Addition(int iNo1, int iNo2)
{
    int iSum = 0;
    iSum = iNo1 + iNo2;
    return iSum;
}

//////////////////////////////////////////////////////////////////////////////////
//
// Entry point function of an application which perform addition of 2 integers
//
//////////////////////////////////////////////////////////////////////////////////

int main()
{
    auto int iValue1 = 0; // Variable to store first input
    auto int iValue2 = 0; // Variable to store second input
    auto int iAns = 0;    // Variable to store the result

    printf("Enter first number : \n");
    scanf("%d",&iValue1);

    printf("Enter second number : \n");
    scanf("%d",&iValue2);

    iAns = Addition(iValue1,iValue2); // Function call to perform addition

    printf("Addition is : %d\n",iAns);

    return 0;
}
// step 5 : Test the code
/*
Test case 1 : 
Input 10   11
Output : 21

Test case 2 : 
Input 10   0
Output : 10

Test case 3 : 
Input 12  -6
Output : 6

Test case 4 : 
Input -6   -5
Output : -11
*/ 