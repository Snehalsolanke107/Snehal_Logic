#include<iostream>
#include <stack>
using namespace std;

typedef struct node
{
    int data;
    struct node *next;
}NODE, *PNODE, **PPNODE;

class Stack
{
    private:
    PNODE first;

    public:
    Stack();
    void Push(int no);
    int Pop();
    void Display();
};

Stack::Stack()
{
    cout<<"Inside constructor\n";
    first = NULL;
}

void Stack::Push(int no)
{
    PNODE newn = NULL;

    newn = new NODE;
    newn->data = no;
    newn->next = NULL;

    if(first = NULL)
    {
        first = newn;
    }
    else
    {
        newn->next = first;
        first = newn;
    }
}
int Stack::Pop()
{
    int value = 0;
    PNODE temp = first;

    if(first = NULL)
    {
        cout<<"Stackis is empty..";
    }
    else
    {
        value = first->data;
        first = first->next;
        delete(temp);
    }
    return value;
}

void Stack::Display()
{
    PNODE temp = first;

    cout<<"Elements of the stack are : \n";
    
    while(temp != NULL) // Type 1
    {
        cout<<"| "<<temp->data<<" | -> ";
        temp = temp ->next;
    }
    cout<<"NULL \n";
}

int main()
{
    Stack obj;
    int iRet = 0;

    obj.Push(11);
    obj.Push(21);
    obj.Push(51);
    obj.Push(71);
    obj.Push(91);

    obj.Display();

    iRet = obj.Pop();
    cout<<"elements in the stack are pop : "<<iRet<<"\n";

    iRet = obj.Pop();
    cout<<"elements in the stack are pop : "<<iRet<<"\n";

    iRet = obj.Pop();
    cout<<"elements in the stack are pop : "<<iRet<<"\n";

    return 0;
}