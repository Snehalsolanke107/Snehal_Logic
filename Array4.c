
#include <stdio.h>
int main()
{

    int Arr[4] = {11,12,13,14};

    printf("Base address of array : %d\n",Arr);  //100

    printf("Base address of first element of array : %d\n",&(Arr[0])); //100
    
    printf("First element is : %d\n",Arr[0]); //11
    
    printf("Size of whole array : %d\n",sizeof(Arr)); //16
    
    printf("Size of second element of array : %d\n",sizeof(Arr[1])); //4
    return 0;
}