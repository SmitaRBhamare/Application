#include<iostream>

using namespace std;
#pragma pack(1)

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node PNODE;

class DoublyLL
{
    public:
    PNODE First;
    int iCount;

    Doubly();
    void InsertFirst(int no);
    void InsertLast(int no);
    void InsertAtPosition(int no, int ipos);

    void DeleteFirst(int no);
    void DeleteLast(int no);
    void InsertAtPosition(int no, int ipos);

    void Display();

};

void DoublyLL ::InsertFirst(int no)
{
    PNODE newn = new(NODE);

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if(First == NULL)
    {
       First = newn;
      
       iCount++; 
    } 
    else
    {
        newn->next = First;
        First->prev = newn;
        First = newn;

        iCount++;  
    }  
}

void DoublyLL ::InsertLast(int no)
{
    PNODE newn = new(NODE);
    PNODE temp = First;

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if(First == NULL)
    {
       First = newn;
      
       iCount++; 
    } 
    else
    {
        while(temp -> next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
        newn->prev = temp; 
        iCount++;  
    }  
}

void DoublyLL:: InsertAtPosition(int no, int ipos)
{
    if(ipos <1 || ipos>iCount+1)
    {
        cout<<"Invalid position"<<"\n";
        return;
    }

    if(ipos == 1)
    {
        InsertFirst();
    }
    else if(ipos == iCount+1)
    {
        InsertLast();
    }
    else
    {
        PNODE newn = new NODE;

        newn->data = no;
        newn->next = NULL;
        newn->prev = NULL;

        PNODE temp = First;

        for(int iCnt = 1; iCnt < ipos; iCnt++)
        {
            temp = temp ->next;
        }
        newn->next = temp->next;
        temp->next->prev = newn;
        temp->next = newn;
        newn->prev = temp;
    }
}

void DoublyLL:: DeleteFirst()
{
    if(First == NULL)
    {
        return ;
    }
    else if(First->next == NULL)
    {
        delete First ;
        First = NULL;///////////////IMP
        iCount--;
    }
    else
    {
        PNODE temp = First;
        First = First->next;
        delete temp;
        iCount--;
    }
}

void DoublyLL:: DeleteLast()
{
    if(First == NULL)
    {
        return ;
    }
    else if(First->next == NULL)
    {
        delete First ;
        First = NULL;///////////////IMP
        iCount--;
    }
    else
    {
        PNODE temp = First;

        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }

        delete temp->next;
        temp->next = NULL;
        iCount--;
        
    }
}

void DoublyLL:: DeleteAtPosition(int ipos)
{
    if(ipos <1 || ipos>iCount+1)
    {
        cout<<"Invalid position"<<"\n";
        return;
    }
    
    if(ipos == 1)
    {
        DeleteFirst();
    }
    else if(ipos == iCount+1)
    {
        DeleteLast();
    }
    else
    {
        PNODE temp1 = First;

        for(int iCnt = 1; iCnt < ipos; iCnt++)
        {
            temp = temp ->next;
        }

        PNODE temp2 = temp1->next;

        temp1->next = temp2->next;
        temp2->next->prev = temp1;

        free(temp2);    
    }
}

Void DoublyLL::Display()
{
    while(First->next != NULL)
    {
        cout<<"|"<<First->data<<"|->";
        First = First->next;
    }
    cout<<"NULL\n";
}


int main()
{
    Doubly obj1;

    obj1.InsertFirst(51);
    obj1.InsertFirst(21);
    obj1.InsertFirst(11);
    obj1.Display();
    cout<<"Number of nodes are :"<<obj1.iCount<<"\n";


    return 0;
}