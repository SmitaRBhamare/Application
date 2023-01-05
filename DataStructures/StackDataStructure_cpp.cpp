#include<iostream>
using namespace std;

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};

class Stack
{
    public :
        struct node *First;
        int iCount;

        Stack();

        bool IsStackEmpty();
        void Push(int no);  //Insert
        int Pop();          //delete
        void Display();
};

Stack :: Stack()
{
    First = NULL;
    iCount = 0;
}

bool Stack :: IsStackEmpty()
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

void Stack :: Push(int no)  // Insert First
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
        newn->next = First;
        First = newn;
        
    }
    iCount++;
    cout<<no<<" gets pushed in the stack successfully."<<"\n";
} 

int Stack :: Pop()          // Delete First
{
    if(First == NULL)
    {
        cout<<"Unable to pop the element as Stack is empty."<<"\n";
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

void Stack :: Display()
{
    if(First == NULL)
    {
         cout<<"Stack is empty";

    }
    else
    {
        cout<<"Elements of stack are :"<<"\n";

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
    Stack obj;

    obj.Push(11);
    obj.Push(21);
    obj.Push(51);
    obj.Push(101);

    obj.Display();

    int iRet = obj.Pop();
    cout<<"Popped element is :"<<iRet<<"\n";

    iRet = obj.Pop();
    cout<<"Popped element is :"<<iRet<<"\n";

    obj.Display();


    return 0;
}