
#include <stdio.h>
int main()
{

    char ch = 'A';
    int i = 0;
    float f = 31.90f;
    double d = 90.7865;

    char *cp = &ch;
    int *ip = &i;
    float *fp = &f;
    double *dp = &d;
    
    printf("%d\n",ch);
    printf("%d\n",&ch);
    printf("%d\n",i);
    printf("%d\n",&i);
    printf("%d\n",f);
    printf("%d\n",&f);
    printf("%d\n",&d);
    printf("%d\n",&d);
    
    return 0;
}