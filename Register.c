#include <stdio.h>
 
 void Display()
 {
    register no = 11; //auto int no = 11;
    register i; //auto int i;

    printf("Value of no : %d\n",no);
    printf("Value of i : %d\n",i);
 }
    int main()
    {
        Display();
    
    return 0;
 }  