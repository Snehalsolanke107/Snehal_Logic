// Singly Circular

class node
{
    public int data;
    public node next;

    public node(int no)
    {
        data = no;
        next = null;
    }
}

class SinglyLL
{
    private node first;
    private node last;
    private int Count;

    public SinglyLL()
    {
        first = null;
        last = null;
        Count = 0;
    }

    public void InsertFirst(int no)
    {
        node newn = new node(no);

        if((first == null) && (last == null))  // LL is empty
        {
            first = newn;
            last = newn;
        }
        else
        {
            newn.next = first;
            first = newn;
        }
        last.next = first;
        Count++;
    }

    public void InsertLast(int no)
    {
        node newn = new node(no);

        if((first == null) && (last == null))  // LL is empty
        {
            first = newn;
            last = newn;
            last.next = first;
        }
        else
        {
            last.next = newn;
            last = newn;
            last.next = first;
        }
        Count++;
    }

    public void DeleteFirst()
    {
        if((first == null) && (last == null))    // LL is empty
        {
            return;
        }
        else if(first == last) // LL contains single node
        {
            first = null;
            last = null;
        }
        else        // LL contains more than one node
        {
            first = first.next;
            last.next = first;
        }
        Count--;
    }
    
    public void DeleteLast()
    {
        if((first == null) && (last == null))    // LL is empty
        {
            return;
        }
        else if(first == last) // LL contains single node
        {
            first = null;
            last = null;
        }
        else        // LL contains more than one node
        {
            node temp = first;

            while(temp.next != last)
            {
                temp = temp.next;
            }
            last = temp;
            last.next = first;
        }
        Count--;
    }
    
    public void Display()
    {
        node temp = first;

        System.out.println("Elements of the Linked List are : ");

        if((first != null) && (last != null))
        {
            do
            {
                System.out.print("| "+ temp.data +" |->");
                temp = temp.next;
            }while(temp != last.next);
        }
        System.out.println("null");
    }

    public int Count()
    {
        return Count;
    }

    public void InsertAtPos(int no, int ipos)
    {
        if((ipos < 1) || (ipos > (Count+1)))
        {
            System.out.println("Invalid position");
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
            node newn = new node(no);
            node temp = first;

            for(int i = 1; i< ipos-1; i++)
            {
                temp = temp.next;
            }
            newn.next = temp.next;
            temp.next = newn;

            Count++;
        }
    }

    public void DeleteAtPos(int ipos)
    {
        if((ipos < 1) || (ipos > (Count)))
        {
            System.out.println("Invalid position");
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
            node temp = first;

            for(int i = 1; i< ipos-1; i++)
            {
                temp = temp.next;
            }

            temp.next = temp.next.next;

            Count--;
        }
    }
}

class Program421
{
    public static void main(String arg[])
    {
        int iRet = 0;

        SinglyLL obj = new SinglyLL();

        obj.InsertFirst(51);
        obj.InsertFirst(21);
        obj.InsertFirst(11);

        obj.Display();

        iRet = obj.Count();
        System.out.println("Number of elements are : "+iRet);

        obj.InsertLast(101);
        obj.InsertLast(111);
        obj.InsertLast(121);
        
        obj.Display();

        iRet = obj.Count();
        System.out.println("Number of elements are : "+iRet);

        obj.InsertAtPos(105,5);

        obj.Display();

        iRet = obj.Count();
        System.out.println("Number of elements are : "+iRet);

        obj.DeleteAtPos(5);
        obj.Display();

        iRet = obj.Count();
        System.out.println("Number of elements are : "+iRet);

        obj.DeleteFirst();
        obj.Display();

        iRet = obj.Count();
        System.out.println("Number of elements are : "+iRet);

        obj.DeleteLast();
        obj.Display();

        iRet = obj.Count();
        System.out.println("Number of elements are : "+iRet);
    }
}