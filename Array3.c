
#include <stdio.h>
int main()
{
    //1
    int Arr[5] = {10,20,30,40,50};

    //2
    int Brr[0] = {10,20,30,40,50};
    
    //3
    int Crr[7] = {10,20,30};

    //4
    int Drr[5];
    Drr[0] = 10;
    Drr[1] = 20;
    Drr[2] = 30;
    Drr[3] = 40;
    Drr[4] = 50;

    printf("%d\n",Arr[5]);
    printf("%d\n",Brr[0]);
    printf("%d\n",Crr[7]);
    printf("%d\n",Drr[7]);
    
    return 0;
}