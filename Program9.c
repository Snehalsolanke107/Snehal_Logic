// Problem statement : Accept radius from user and calculate the area of circle

// Step 1 : Understand the problem statement 
// Conclusion : We are going to use formula as PI*R*R

// Step 2 : Algorithm
/*
    START
    Accept raius from user and store into RADIUS
    Create variable as
   
   STOP 
*/

#include <stdio.h>

///////////////////////////////////////////////////////////
//
// Function Name : CalculateArea
// Description : It is used to calculate are of circle
// Input : Float 
// Output : Float
// Auther name : Snehal kalyanrao Solanke
// Date : 02/10/2023
//
///////////////////////////////////////////////////////////

float CalculateArea(float fValue)
{
    auto float fAns = 0.0f;
    auto const float PI = 3.14f;  // Don't change the value

    fAns = PI * fValue * fValue;
    return fAns;

}
///////////////////////////////////////////////////////////
//
// Entry point function
//
///////////////////////////////////////////////////////////
int main()
{
   auto float fRadius = 0.0f;
   auto float fArea = 0.0f;

printf("Enter a radius of circle :\n");
scanf("%f",&fRadius);

fArea = CalculateArea(fRadius);
printf("Area of circle is : %f",fArea);

    return 0;
}