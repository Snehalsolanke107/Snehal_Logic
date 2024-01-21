#include <iostream>
using namespace std;

class Demo
{
    public:
    int addition(int A ,int B)
    {
        int Ans = 0;
        Ans = A+B;
        return Ans;
    }
    int addition(int A,int B,int C)
    {
        int Ans = 0;
        Ans = A+B+C;
        return Ans;
    }
    float addition(float A,float B)
    {
    float Ans = 0.0f;
    Ans = A+B;
    return Ans;
    }
};
int main()
{
    Demo obj;

    int i = 10, j = 20, k = 30;
    int Ret = 0;
    float p = 90.0, q = 80.0, fRet = 0.0;

    fRet = obj.addition(p,q);     //3000
    cout<<"Addition is : "<<Ret<<"\n";
    Ret = obj.addition(i,j);      //2000
    cout<<"Addition is : "<<Ret<<"\n";
    Ret = obj.addition(i,j,k);
    cout<<"Addition is : "<<Ret<<"\n";

    return 0;
}