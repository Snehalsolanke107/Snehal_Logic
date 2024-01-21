
#include <stdio.h>
int main()
{
    int no = 21;      //21
    int *p = &no;     //100
    int *a = &no;     //100
    int **q = &p;     //200
    int **b = &p;     //200
    int ***r = &q;    //500
    int ****x = &r;   //600
    int *****y = &x;  //700

    printf("%d\n",no);
    printf("%d\n",&no);
    printf("%d\n",&no);
    printf("%d\n",&p);
    printf("%d\n",&p);
    printf("%d\n",&q);
    printf("%d\n",&r);
    printf("%d\n",&x);

    return 0;
}