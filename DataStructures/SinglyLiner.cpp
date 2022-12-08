
//Singly Linear 
#include<iostream>
using namespace std;

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;

class SinglyLL
{
    public:
     PNODE First;
     int iCount;

     SinglyLL();
     void InsertFirst(int no);
     void InsertLast(int no);
     void InsertAtPosition(int no , int ipos);

     void DeleteFirst();
     void DeleteLast();
     void DeleteAtPosition(int ipos);

     void Display();

};

SinglyLL :: SinglyLL()
{
    First = NULL;
    iCount = 0;
     
}

void SinglyLL :: InsertFirst(int no)
{
    //Step1 : Allocate the memory for node
    PNODE newn = new NODE;

    //step2 : Initialise node
    newn->data = no;
    newn->next = NULL;

    //step3 : Check if LL is empty or not
    if(First == NULL)
    {
        First = newn;
        iCount++;
    }
    else // If LL contains atleast one node
    {
        newn->next = First;
        First = newn;
        iCount++;
    }

}

void SinglyLL :: InsertLast(int no)
{
    
    //Step1 : Allocate the memory for node
    PNODE newn = new NODE;

    //step2 : Initialise node
    newn->data = no;
    newn->next = NULL;

    //step3 : Check if LL is empty or not
    if(First == NULL)
    {
        First = newn;
        iCount++;
    }
    else // If LL contains atleast one node
    {
        PNODE temp = First;
        while(temp->next  !=NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
        iCount++;
    }
}

void SinglyLL :: InsertAtPosition(int no, int ipos)
{
    if( ipos < 1 ||ipos > iCount+1)
    {
        cout<<"Invalid position"<<"\n";
        return;
    }

    if(ipos ==1)
    {
        InsertFirst(no);
    }
    else if(ipos == iCount +1)
    {
        InsertLast(no);
    }
    else
    {
        PNODE newn = new NODE;

        newn->data = no;
        newn->next = NULL;

        PNODE temp = First;

        for(int iCnt = 1; iCnt < ipos-1; iCnt++)
        {
            temp = temp->next;
        }
        
        newn->next = temp->next;
        temp->next = newn;

        iCount++;

    }
}

void SinglyLL :: DeleteFirst()
{
    if(First == NULL) //if(iCount == 0)
    {
        return;
    }
    else if(First->next == NULL) //if(iCount == 1)
    {
        delete First;
        First = NULL;
        iCount--;
    }
    else
    {
        PNODE Temp = First;
        First = First->next;
        delete Temp;
        iCount--;
    }
}

void SinglyLL :: DeleteLast()
{
     if(First == NULL) //if(iCount == 0)
    {
        return;
    }
    else if(First->next == NULL) //if(iCount == 1)
    {
        delete First;
        First = NULL;
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

void SinglyLL :: DeleteAtPosition(int ipos)
{
    if( ipos < 1 ||ipos > iCount)
    {
        cout<<"Invalid position"<<"\n";
        return;
    }

    if(ipos ==1)
    {
        DeleteFirst();
    }
    else if(ipos == iCount)
    {
        DeleteLast();
    }
    else
    {
        PNODE temp1 = First;

        for(int iCnt = 1; iCnt<ipos-1; iCnt++)
        {
            temp1 = temp1->next;
        }

        PNODE temp2 = temp1->next;

        temp1->next = temp2->next;
        delete temp2;

        iCount--;
    }
}

void SinglyLL:: Display()
{
    cout<<"Elements of Linked List are :"<<"\n";
    PNODE temp = First;

    while(temp != NULL)
    {
        cout<<"|"<<temp->data<<"|->";
        temp = temp->next;
    }
    cout<<"NULL"<<"\n";
}

int main()
{
    SinglyLL obj1;
    cout<<"Number of nodes are :"<<obj1.iCount<<"\n";

    obj1.InsertFirst(51);
    obj1.InsertFirst(21);
    obj1.InsertFirst(11);
    obj1.Display();
    cout<<"Number of nodes are :"<<obj1.iCount<<"\n";

    obj1.InsertLast(101);
    obj1.InsertLast(111);
    obj1.InsertLast(121);
    obj1.Display();
    cout<<"Number of nodes are :"<<obj1.iCount<<"\n";

    obj1.InsertAtPosition(105,5);
    obj1.Display();
    cout<<"Number of nodes are :"<<obj1.iCount<<"\n";
    
    obj1.DeleteAtPosition(5);
    obj1.Display();
    cout<<"Number of nodes are :"<<obj1.iCount<<"\n";

    obj1.DeleteFirst();
    obj1.Display();
    cout<<"Number of nodes are :"<<obj1.iCount<<"\n";

    obj1.DeleteLast();
    obj1.Display();
    cout<<"Number of nodes are :"<<obj1.iCount<<"\n";

    
    
    return 0;
}
