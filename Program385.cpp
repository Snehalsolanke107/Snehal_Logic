// Doubly Linear
#include<iostream>
using namespace std;

template <class T>
struct node
{
    T data;
    struct node *next;
    struct node *prev;
};

template <class T>
class DoublyLL
{
    private:
        struct node<T> * first;
        int Count;

    public:
        DoublyLL();
        void InsertFirst(T no);
        void InsertLast(T no);
        void Display();
        int CountNode();
        void DeleteFirst();
        void DeleteLast();
        void InsertAtPos(T no,int ipos);
        void DeleteAtPos(int ipos);
};

template <class T>
DoublyLL<T>::DoublyLL()
{
    first = NULL;
    Count = 0;
}

template <class T>
void DoublyLL<T>::InsertFirst(T no)
{
    struct node<T> * newn = NULL;

    newn = new struct node<T>;
    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if(first == NULL)
    {
        first = newn;
    }
    else
    {
        newn->next = first;
        first->prev = newn;
        first = newn;
    }
    Count++; 
}

template <class T>
void DoublyLL<T>::InsertLast(T no)
{
    struct node<T> * newn = NULL;

    newn = new struct node<T>;
    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if(first == NULL)
    {
        first = newn;
    }
    else
    {
        struct node<T> * temp = first;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
        newn->prev = temp;
    }
    Count++;
}

template <class T>
void DoublyLL<T>::Display()
{
    struct node<T> * temp = first;

    cout<<"Elements of the linked list are : \n";

    cout<<"NULL <=>";
    while(temp != NULL)
    {
		cout<<"| "<<temp->data<<" | -> ";
		temp = temp -> next;
    }
    cout<<"NULL \n";
}

template <class T>
int DoublyLL<T>::CountNode()
{
    return Count;
}

template <class T>
void DoublyLL<T>::DeleteFirst()
{
    if(first == NULL)   
    {
        return;
    }
    else if((first -> next == NULL) && (first -> prev == NULL))
    {                                                               
        delete first;
        first = NULL;
    }
    else
    {
        first = first -> next;
        delete(first->prev);
        first->prev = NULL;
    }
    Count--;
}

template <class T>
void DoublyLL<T>::DeleteLast()
{
    if(first == NULL)   // empty LL
    {
        return;
    }
    else if((first -> next == NULL) && (first -> prev == NULL)) 
    {                                                                 
        delete first;
        first = NULL;
    }
    else
    {
        struct node<T> * temp = first;
        while(temp->next->next != NULL)
        {
            temp = temp -> next;
        }
        delete(temp->next);
        temp->next = NULL;
    }
    Count--;
}

template <class T>
void DoublyLL<T>::InsertAtPos(T no,int ipos)
{
    if((ipos < 1) || (ipos > Count+1))
    {
        return;
    }
     
    if(ipos == 1)
    {
        InsertFirst(no);
    }
    else if(ipos == Count+1)
    {
        InsertLast(no);
    }
    else
    {
        struct node<T> * newn = new struct node<T>;

        newn->data = no;
        newn->next = NULL;
        newn->prev = NULL;

        struct node<T> * temp = first;
        int i = 0;

        for(i = 1; i < ipos-1; i++)
        {
            temp = temp -> next;
        }

        newn->next = temp->next;
        temp->next->prev = newn;
        temp->next = newn;
        newn->prev = temp;

        Count++;
    } 
}

template <class T>
void DoublyLL<T>::DeleteAtPos(int ipos)
{
    if((ipos < 1) || (ipos > Count))
    {
        return;
    }
     
    if(ipos == 1)
    {
        DeleteFirst();
    }
    else if(ipos == Count)
    {
        DeleteLast();
    }
    else
    {
        struct node<T> * temp = first;
        int i = 0;

        for(i = 1; i < ipos-1; i++)
        {
            temp = temp -> next;
        }

        temp->next = temp->next->next;
        delete(temp->next->prev);     // #
        temp->next->prev = temp;

        Count--;
    }
}

int main()
{
    DoublyLL <int> iobj;
    DoublyLL <float> fobj;
    DoublyLL <double> dobj;
    DoublyLL <char> cobj;

    iobj.InsertLast(11);
    iobj.InsertLast(21);
    iobj.InsertLast(51);
    iobj.InsertLast(91);

    iobj.Display();
    cout<<"Linkedlist of Integers"<<"\n";

    fobj.InsertLast(11.67);
    fobj.InsertLast(21.89);
    fobj.InsertLast(51.45);
    fobj.InsertLast(91.34);

    fobj.Display();
    cout<<"Linkedlist of Floats"<<"\n";

    dobj.InsertLast(11.9999);
    dobj.InsertLast(21.9999);
    dobj.InsertLast(51.9999);
    dobj.InsertLast(91.9999);
    
    dobj.Display();
    cout<<"Linkedlist of Doubles"<<"\n";

    cobj.InsertLast('A');
    cobj.InsertLast('B');
    cobj.InsertLast('C');
    cobj.InsertLast('D');

    cobj.Display();
    cout<<"Linkedlist of characters"<<"\n";

    return 0;
}