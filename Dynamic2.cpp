#include<iostream>
using namespace std;

class Demo
{
    public:
        int i,j,k;
        Demo()
        {
            cout<<"Inside constructor\n";
        }
        ~Demo()
        {
           cout<<"Inside destrcutor\n"; 
        }
        void Display()
        {
            cout<<"Inside display\n";
        }
};

int main()
{
    Demo *ptr = new Demo;

    ptr->Display();

   //int *ptr1 = (int *)malloc(5 * sizeof(int));     // Dynamic in C
    
    delete ptr;
    
    return 0;
}