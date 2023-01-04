#include<iostream>
using namespace std;

template <class T>
struct node
{
    T data;
    struct node *next;
};

template <class T>
class SinglyLL
{
    public:
        struct node<T> * First;

        SinglyLL();
        void InsertFirst(T no);
        void InsertLast(T no);
        void DeleteFirst();
        void DeleteLast();
        void Display();
        void InsertAtPosition(T no,int ipos);
        void DeleteAtPosition(int ipos);
        int Count();
};

template <class T>
SinglyLL<T> :: SinglyLL()
{
    First = NULL;
}

template <class T>
void SinglyLL<T> :: InsertFirst(T no)
{
    struct node<T> * newn = new node<T>;  

    newn -> data = no;
    newn->next = NULL;

    if(First == NULL)
    {
        First = newn;
    }
    else
    {
        newn->next = First;
        First = newn;
    }
}

template <class T>
void SinglyLL <T> :: InsertLast(T no)
{
    struct node<T>  * newn  = new  node<T>;

    newn-> data = no;
    newn->next = NULL;

    if(First == NULL)
    {
        First = newn;
    }
    else
    {
        struct node<T> * temp = First;
        while(temp->next !=NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
        newn->next = NULL;
    }
}

template<class T>
void SinglyLL<T> :: DeleteFirst()
{
    if(First == NULL)
    {
        return ;
    }
    else if(First->next == NULL)
    {
        delete First;
        First = NULL;
    }
    else
    {
        struct node<T> * temp = First;
        First = First->next;
        delete temp;
    }
}

template<class T>
void SinglyLL<T> :: DeleteLast()
{
    if(First == NULL)
    {
        return ;
    }
    else if(First->next == NULL)
    {
        delete First;
        First = NULL;
    }
    else
    {
        struct node<T> * temp = First;
        while(temp ->next ->next!= NULL)
        {   
             temp = temp->next;  
        }
        delete temp->next;
        temp->next = NULL;
        
    }
}

template<class T>
void SinglyLL<T> :: InsertAtPosition(T no,int ipos)
{
    int iCount = Count();

    if( ipos < 1 ||ipos > iCount + 1)
    {
        cout<<"Invalid position"<<"\n";
        return;
    }

    if(ipos == 1)
    {
        InsertFirst(no);   
    }
    else if( ipos == iCount + 1)
    {
        InsertLast(no);
    }
    else
    {
        struct node <T>* newn = new node<T>;
        newn->data = no;
        newn->next = NULL;

       struct node <T>* temp = First;

       for(int iCnt = 1; iCnt < ipos - 1 ; iCnt++)
       {
            temp = temp->next;
       }
       
       newn-> next = temp->next;
       temp->next = newn;   
    }


}

template <class T>
void SinglyLL<T> :: DeleteAtPosition(int ipos)
{
    int iCount = Count();


    if( ipos < 1 ||ipos > iCount)
    {
        cout<<"Invalid position"<<"\n";
        return;
    }

    if(ipos == 1)
    {
        DeleteFirst();   
    }
    else if( ipos == iCount)
    {
        DeleteLast();
    }
    else
    {
       struct node <T>* temp1 = First;

       for(int iCnt = 1; iCnt < ipos - 1 ; iCnt++)
       {
            temp1 = temp1->next;
       }

       struct node<T> * temp2 = temp1->next;
       temp1->next = temp2->next; 

       delete temp2; 

    }
}

template <class T>
void SinglyLL<T> :: Display()
{
    struct node<T> * temp = First;

    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp -> next;
    }
    cout<<"\n";
}

template <class T>
int SinglyLL<T> :: Count()
{
    struct node<T> *  temp = First;
    int iCnt = 0;

    while(temp != NULL)
    {
        iCnt++;
        temp = temp -> next;
    }
    return iCnt;
}

int main()
{
    int Ret = 0;
    SinglyLL <int>iobj;
    iobj.InsertFirst(51);
    iobj.InsertFirst(21);
    iobj.InsertFirst(11);
    iobj.Display();
    Ret = iobj.Count();
    cout<<"Number of nodes are : "<<Ret<<"\n";
    
    iobj.InsertLast(101);
    iobj.InsertLast(121);
    iobj.InsertLast(151);
    iobj.Display();
    Ret = iobj.Count();
    cout<<"Number of nodes are : "<<Ret<<"\n";

    iobj.InsertAtPosition(111, 5);
    iobj.Display();
    Ret = iobj.Count();
    cout<<"Number of nodes are : "<<Ret<<"\n";


    iobj.DeleteAtPosition(3);
    iobj.Display();
    Ret = iobj.Count();
    cout<<"Number of nodes are : "<<Ret<<"\n";

    iobj.DeleteFirst();
    iobj.Display();
    Ret = iobj.Count();
    cout<<"Number of nodes are : "<<Ret<<"\n";


    iobj.DeleteLast();
    iobj.Display();
    Ret = iobj.Count();
    cout<<"Number of nodes are : "<<Ret<<"\n";

     cout<<"___________________________________________\n";

     SinglyLL <char>cobj;
    cobj.InsertFirst('b');
    cobj.InsertFirst('a');
    cobj.Display();
    Ret = cobj.Count();
    cout<<"Number of nodes are : "<<Ret<<"\n";


    cobj.InsertLast('y');
    cobj.InsertLast('x');
    cobj.Display();
    Ret = cobj.Count();
    cout<<"Number of nodes are : "<<Ret<<"\n";

    cobj.DeleteLast();
    cobj.DeleteFirst();
    cobj.Display();
    Ret = cobj.Count();
    cout<<"Number of nodes are : "<<Ret<<"\n";

    
    cout<<"___________________________________________\n";

    SinglyLL <float>fobj;
    fobj.InsertFirst(210.1f);
    fobj.InsertFirst(51.1f);
    fobj.Display();
    Ret = fobj.Count();
    cout<<"Number of nodes are : "<<Ret<<"\n";

    
    cout<<"___________________________________________\n";

    SinglyLL <double>dobj;
    
    dobj.InsertFirst(101.678);
    dobj.InsertFirst(51.341);
    dobj.Display();
    Ret = dobj.Count();
    cout<<"Number of nodes are : "<<Ret<<"\n";

    dobj.InsertLast(11.678);
    dobj.InsertLast(501.341);
    dobj.Display();
    Ret = dobj.Count();
    cout<<"Number of nodes are : "<<Ret<<"\n";
    
    
    


    


    return 0;
}