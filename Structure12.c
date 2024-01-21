#include <stdio.h>
# pragma pack(1)
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

    printf("size of object is : %d",sizeof(obj)); //17
    return 0;
}