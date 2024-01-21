
#include <stdio.h>
struct Demo
{
    int *p;    //8
    float *q;  //8
    double d;  //8
    
};

int main()
{
    struct Demo obj;

    int i = 11;
    float f = 90.90;

    obj.p = &i;
    obj.q = &f;
    obj.d = 90.90;
    
    printf("%d",*(obj.p));  //11
    printf("%d",*(obj.q));  //90.90

    return 0;
}