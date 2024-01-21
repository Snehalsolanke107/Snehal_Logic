
#include <stdio.h>
int main()
{
    int i = 10;
    signed int j = 20;
    signed int k = -30;

    unsigned int a = 40;
    // unsigned int a = -40; //Na

    printf("%d\n",i); //10
    printf("%d\n",j); //20
    printf("%d\n",k); //-30
    printf("%d\n",a); //40
    

    return 0;
}