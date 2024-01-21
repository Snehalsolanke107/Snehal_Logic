
#include <stdio.h>
//not use of pragma pack
struct Demo
{
    int i;
    char ch;
    float f;
    double d;
};
int main()
{
    struct Demo obj;

    printf("size of object is : %d",sizeof(obj)); //24
    return 0;
}