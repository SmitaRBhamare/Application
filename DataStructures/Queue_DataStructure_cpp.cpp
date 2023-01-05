// 
#include<iostream>
using namespace std;

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};

class Queue
{
    public :
        struct node *First;
        int iCount;

       Queue();

        bool IsQueueEmpty();
        void  EnQueue(int no);  //Insert
        int  DeQueue();          //delete
        void Display();
};

Queue :: Queue()
{
    First = NULL;
    iCount = 0;
}

bool Queue :: IsQueueEmpty()
{
    if(iCount == 0)
    {
        return true;
    }
    else
    {
        return false;
    }

}

void Queue :: EnQueue(int no)  // InsertLast
{
    struct node *newn = new node;
    newn->data = no;
    newn->next =NULL;

    if(First == NULL)
    {
        First = newn;
    }
    else
    {
        struct node * temp = First;
        while(temp ->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newn;
        
    }
    iCount++;
    cout<<no<<" gets pushed in the Queue successfully."<<"\n";
} 

int Queue :: DeQueue()          // Delete First
{
    if(First == NULL)
    {
        cout<<"Unable to pop the element as  Queue is empty."<<"\n";
        return -1;
    }
    else
    {
        int Value = First->data;
        struct node * temp = First;
        First = First->next;
        delete temp;

        iCount--;

        return Value;   
    }
}

void Queue :: Display()
{
    if(First == NULL)
    {
         cout<<"Queue is empty";

    }
    else
    {
        cout<<"Elements of Queue are :"<<"\n";

        struct node * temp = First;

        while(temp != NULL)
        {
            cout<<"|"<<temp->data<<"|->";
            temp = temp->next;
        }
        cout<<"NULL"<<"\n";
    }
}

int main()
{
    Queue obj;

    obj.EnQueue(11);
    obj.EnQueue(21);
    obj.EnQueue(51);
    obj.EnQueue(101);

    obj.Display();

    int iRet = obj.DeQueue();
    cout<<"Popped element is :"<<iRet<<"\n";

    iRet = obj.DeQueue();
    cout<<"Popped element is :"<<iRet<<"\n";

    obj.Display();


    return 0;
}