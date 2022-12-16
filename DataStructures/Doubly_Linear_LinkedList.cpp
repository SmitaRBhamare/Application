//program243
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
typedef struct node * PNODE;

class DoublyLL
{
    public :
       PNODE First;
       PNODE Last;

       DoublyLL();

       void InsertFirst(int no);
       void InsertLast(int no);
       void InsertAtPos(int no, int ipos);

       void DeleteFirst();
       void DeleteLast();
       void DeleteAtPos(int ipos);

       void Display();
       int Count();
};

DoublyLL:: DoublyLL()
{
    First = NULL;
    Last = NULL;
}

void DoublyLL :: InsertFirst(int no)
{
    PNODE newn = new NODE;
    newn->data = no;
    newn->next = NULL;
    newn -> prev = NULL;

    if((First == NULL) && (Last == NULL)) // LL is empty
    {
        First = newn;
        Last = newn;
    }
    else    // If LL contains one or more nodes
    {
        newn->next = First;
        First->prev = newn;
        First = newn; 
    }

    First->prev = Last;
    Last->next = First;
}

void DoublyLL :: InsertLast(int no)
{
    PNODE newn = new NODE; 

    newn->data = no;
    newn->next = NULL;
    newn -> prev = NULL;

    if((First == NULL) && (Last == NULL)) // LL is empty
    {
        First = newn;
        Last = newn;
    }
    else    // If LL contains one or more nodes
    {
        Last-> next = newn;
        newn->prev = Last;
        Last = newn;
    }

    First->prev = Last;
    Last->next = First;
}

void DoublyLL ::  Display()
{
    PNODE Temp = First;
    if(First == NULL && Last == NULL)
    {
        cout<<"Linked list i empty"<<"\n";
        return;
    }

    cout<<"Elements of Linked list are :"<<" \n";
    do
    {
        cout<<"|"<<Temp->data<<"|->";
        Temp = Temp-> next;
    }while(Temp!= Last->next);

    cout<<"\n";
}

int DoublyLL :: Count()
{
    int iCnt = 0;
    PNODE temp = First;

    if(First == NULL && Last == NULL)
    {
        return iCnt;
    }

    do
    {
        iCnt++;
        temp= temp-> next;
    }while(temp != Last->next);

    return iCnt;
}

void DoublyLL ::  DeleteFirst()
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
        First = First ->next;
        delete(Last->next);        // free((*First)->prev);

        First->prev = Last;
        Last->next = First;
    }
}

void DoublyLL ::  DeleteLast()
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

void DoublyLL ::  InsertAtPos(int no, int ipos)
{
    int iNodeCnt = Count();
    PNODE newn = NULL;
    PNODE temp = NULL;
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
        PNODE newn = new NODE;
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

void DoublyLL :: DeleteAtPos(int ipos)
{
    int iNodeCnt = Count();
    PNODE temp = NULL;
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

int main()
{
    int iRet = 0;
    DoublyLL dobj;


    dobj.InsertFirst(51);
    dobj.InsertFirst(21);
    dobj.InsertFirst(11);

    dobj.Display();
    iRet = dobj.Count();
    cout<<"Number of nodes are :"<<iRet<<"\n";
    
    dobj.InsertLast(101);
    dobj.InsertLast(111);
    dobj.InsertLast(121);

    dobj.Display();
    iRet = dobj.Count();
    cout<<"Number of nodes are :"<<iRet<<"\n";

    dobj.InsertAtPos(105,5);
    dobj.Display();
    iRet = dobj.Count();
    cout<<"Number of nodes are :"<<iRet<<"\n";

    dobj.DeleteAtPos(5);
    dobj.Display();
    iRet = dobj.Count();
    cout<<"Number of nodes are :"<<iRet<<"\n";

    dobj.DeleteFirst();
    dobj.DeleteLast();

    dobj.Display();
    iRet = dobj.Count();
    cout<<"Number of nodes are :"<<iRet<<"\n";

    return 0;
}
