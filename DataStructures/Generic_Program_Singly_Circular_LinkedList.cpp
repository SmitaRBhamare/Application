#include<iostream>
using namespace std;

template <class T>
struct node
{
    T data;
    struct node *next;
};

template <class T>
class SinglyCL
{
    public :
        struct node <T>* First;
        struct node <T>* Last;

        SinglyCL();
        void InsertFirst(T No);
        void InsertLast(T No);
        void InsertAtPos(T No, int ipos);
        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int ipos);
        void Display();
        int Count();
};

template <class T>
SinglyCL<T> :: SinglyCL()
{
    First = NULL;
    Last = NULL;
}

template <class T>
void SinglyCL <T> :: InsertFirst(T No)
{
    struct node<T> * newn = new node<T>;

    newn->data = No;
    newn->next = NULL;

    if((First ==NULL)&&( Last == NULL))
    {
        First = Last =  newn;
        Last->next = First;
    }
    else
    {
        newn->next = First;
        First = newn;
        Last->next = First;
    }
}


template <class T>
void SinglyCL <T> :: InsertLast(T No)
{
    struct node<T> * newn = new node<T>;

    newn->data = No;
    newn->next = NULL;

    if((First ==NULL)&&( Last == NULL))
    {
        First = Last =  newn;
        Last->next = First;
    }
    else
    {
        Last->next = newn;
        Last = newn;
        Last->next = First;    
    }
}

template<class T>
void SinglyCL <T> :: InsertAtPos(T No,int ipos)
{
    int iNodeCnt = Count();
    struct node <T>*newn = NULL;
    struct node <T>* temp = First;

    if(ipos < 1 || ipos > iNodeCnt + 1)
    {
        cout<<"Invalid Position\n";
        return ;
    }

    if(ipos == 1)
    {
        InsertFirst(No);
    }
    else if(ipos == iNodeCnt + 1)
    {
        InsertLast(No);
    }
    else
    {
        newn = new node<T>;
        newn-> data = No;
        newn->next = NULL;

        for(int iCnt = 1; iCnt < ipos - 1; iCnt++)
        {
            temp = temp->next;
        }
        newn->next= temp->next;
        temp->next = newn;
    }
}

template<class T>
void SinglyCL <T> :: DeleteAtPos(int ipos)
{
    int iNodeCnt = Count();
    int iCnt = 0;
    struct node <T>* temp1 = First;
    struct node<T> * temp2 = NULL;

    if(ipos < 1 || ipos > iNodeCnt)
    {
        cout<<"Invalid Position\n";
        return ;
    }

    if(ipos == 1)
    {
        DeleteFirst();
    }
    else if(ipos == iNodeCnt)
    {
        DeleteLast();
    }
    else
    {
        for(iCnt = 1; iCnt < ipos - 1; iCnt++)
        {
            temp1 = temp1->next;
        }

        temp2 = temp1->next;
        temp1->next = temp2->next;
        delete temp2;
    }
}

template <class T>
void SinglyCL<T> :: DeleteFirst()
{
   // struct node<T> * temp = First;
  
    if((First == NULL)&&(Last == NULL))
    {
        return;
    }
    else if(First == Last)
    {
        delete First;
        First = NULL;
        Last  = NULL;
    }
    else
    {
        First = First->next;
        delete Last->next;
        Last->next = First;      
    }
}

template <class T>
void SinglyCL<T> :: DeleteLast()
{
    
    if((First == NULL)&&(Last == NULL))
    {
        return;
    }
    else if(First == Last)
    {
        delete First;
        First = NULL;
        Last  = NULL;
    }
    else
    {
        struct node<T> * temp = First;
        while(temp->next != Last)
        {
            temp = temp ->next;
        }
        delete temp->next;
        Last = temp;
        Last->next = First;
    }
}



template <class T>
void SinglyCL <T> :: Display()
{   
    struct node<T> * temp = First;

    //while(temp != Last->next) 
    // while loop can not be use as temp = First and Last->next = First so whill not enter into the loop and can not print data.
    do
    {
        cout<<"|"<<temp->data<<"|->";
        temp = temp->next;

    }while(temp != Last->next);
    cout<<"\n";
}

template <class T>
int SinglyCL <T> :: Count()
{   
    struct node<T> * temp = First;
    int Count = 0;

    //while(temp != Last->next) 
    // while loop can not be use as temp = First and Last->next = First so whill not enter into the loop and can not print data.
    do
    {
        Count++;
        temp = temp->next;

    }while(temp != Last->next);
    return Count;
}


int main()
{
    int Ret = 0;
    
    SinglyCL <double>dobj;

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
    dobj.InsertAtPos('w', 3);
    dobj.Display();
    Ret = dobj.Count();
    cout<<"Number of nodes are : "<<Ret<<"\n";


    dobj.DeleteAtPos(2);
    dobj.Display();
    Ret = dobj.Count();
    cout<<"Number of nodes are : "<<Ret<<"\n";


    dobj.DeleteLast();
    dobj.DeleteFirst();
    dobj.Display();
    Ret = dobj.Count();
    cout<<"Number of nodes are : "<<Ret<<"\n";

    
    return 0;

   
}