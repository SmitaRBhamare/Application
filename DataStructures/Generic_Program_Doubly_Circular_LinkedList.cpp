#include<iostream>
using namespace std;

template <class T>
struct node
{
    T data;
    struct node<T> * next;
    struct node<T> * prev;
};

template <class T>
class DoublyCL
{
    public :
    struct node<T>* First;
    struct node<T>* Last;
    DoublyCL();
    void InsertFirst(T no);
    void InsertLast(T no);
    void InsertAtPos(T no, int ipos);
    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int ipos);
    void Display();
    int Count();
};

template <class T>
DoublyCL<T> :: DoublyCL()
{
    First = NULL;
    Last = NULL;
}

template <class T>
void DoublyCL<T> :: InsertFirst(T no)
{
    struct node<T> * newn = new node<T>;
    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if((First == NULL) && (Last == NULL))
    {
        First = newn;
        Last = newn;
    }
    else
    {
        First->prev = newn;
        newn->next = First;
        First = newn;
    }

    First->prev = Last;
    Last->next = First;
}

template <class T>
void DoublyCL<T> :: InsertLast(T no)
{
    struct node<T> * newn = new node<T>;
    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if((First == NULL) && (Last == NULL))
    {
        First = newn;
        Last = newn;
    }
    else
    {
        newn->prev = Last;
        Last->next = newn;
        Last = newn;
    }
    First->prev = Last;
    Last->next = First;
}

template <class T>
void DoublyCL <T>:: InsertAtPos(T no, int ipos)
{
    int iNodeCnt = Count();
    struct node <T>*newn = NULL;
    struct node <T>* temp = NULL;
    int iCnt = 0;

    if((ipos < 1) || (ipos > iNodeCnt+1))
    {
        cout<<"Invalid position\n";
        return;
    }

    if(ipos ==1)
    {
        InsertFirst(no);
    }
    else if(ipos == iNodeCnt+1)
    {
         InsertLast(no);
    }
    else
    {
        struct node <T>* newn = new node<T>;
        newn->data = no;
        newn->next = NULL;
        newn->prev = NULL;

        temp = First;
        for(iCnt = 1; iCnt < ipos-1; iCnt++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next->prev = newn;

        temp->next = newn;
        newn->prev = temp;
        
    }
    
}

template<class T>
void DoublyCL <T>:: DeleteAtPos(int ipos)
{
    int iNodeCnt = Count();
    struct node<T> * temp = NULL;
    int iCnt = 0;

    if((ipos < 1) || (ipos > iNodeCnt))
    {
        printf("Invalid position\n");
        return;
    }

    if(ipos ==1)
    {
        DeleteFirst();
    }
    else if(ipos == iNodeCnt)
    {
        DeleteLast();
    }
    else
    {
        temp = First;
        for(iCnt = 1; iCnt < ipos-1; iCnt++)
        {
            temp = temp->next;
        }

        temp->next = temp->next->next;
        delete(temp->next->prev);
        temp->next->prev = temp;
    }
}


template <class T>
void DoublyCL<T> :: DeleteFirst()
{
    if((First == NULL)&& (Last ==NULL))
    {
        return;
    }
    else if(First == Last)
    {
        delete First;
        First = NULL;
        Last = NULL;
    }
    else
    {
        First = First ->next;
        delete(Last->next);        // free((*First)->prev);

        First->prev = Last;
        Last->next = First;
    }
}

template <class T>
void DoublyCL<T> ::  DeleteLast()
{
    if(First == NULL && Last == NULL) // Empty LL
    {
        return;
    }
    else if(First == Last)    // Single node
    {
        delete(First);
        First = NULL;
        Last= NULL;
    }
    else    // More than one node
    {
        Last = Last-> prev;
        delete(First)->prev;       // free((*Last)->next);

        First->prev = Last;
        Last->next = First;
    }
}


template <class T>
void DoublyCL<T> :: Display()
{
    struct node <T>* temp = First;
    do
    {
        cout<<"|"<<temp->data<<"|->";
        temp = temp->next;
    }while(temp != Last->next);
    cout<<"\n";

}

template <class T>
int DoublyCL<T> :: Count()
{
    int iCnt = 0;
    struct node <T>* temp = First;
    do
    {
        iCnt++;
        temp = temp->next;
    }while(temp != Last->next);
    
    return iCnt;

}


int main()
{

     int Ret = 0;
    DoublyCL <char>cobj;



    cobj.InsertFirst('a');
    cobj.InsertFirst('v');
    cobj.InsertFirst('e');

    cobj.Display();
    Ret = cobj.Count();
    cout<<"Number of nodes are :"<<Ret<<"\n";

    cobj.InsertAtPos('s', 2);
    cobj.Display();
    Ret = cobj.Count();
    cout<<"Number of nodes are :"<<Ret<<"\n";
    
    cobj.InsertLast('y');
    cobj.InsertLast('u');
    cobj.InsertLast('o');
    cobj.Display();
    Ret = cobj.Count();
    cout<<"Number of nodes are :"<<Ret<<"\n";

    

    cobj.DeleteAtPos(4);
    cobj.Display();
    Ret = cobj.Count();
    cout<<"Number of nodes are :"<<Ret<<"\n";

    cobj.DeleteFirst();
    cobj.DeleteLast();
    cobj.Display();
    Ret = cobj.Count();
    cout<<"Number of nodes are :"<<Ret<<"\n";


    return 0;
}