#include<iostream>
using namespace std;

template <class T>
struct node
{
    T data;
    struct node *next; // no <T>;
};

template <class T>
class Stack
{
    public :
        struct node<T> *First;
        int iCount;

        Stack();

        bool IsStackEmpty();
        void Push(T no);  //Insert
        T Pop();          //delete
        void Display();
};

template <class T>
Stack <T>:: Stack()
{
    First = NULL;
    iCount = 0;
}

template <class T>
bool Stack<T> :: IsStackEmpty()
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

template <class T>
void Stack <T>:: Push(T no)  // Insert First
{
    struct node <T>*newn = new node<T>;
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

template <class T>
T Stack <T> :: Pop()          // Delete First
{
    if(First == NULL)
    {
        cout<<"Unable to pop the element as Stack is empty."<<"\n";
        return -1;
    }
    else
    {
        T Value = First->data;
        struct node <T>* temp = First;
        First = First->next;
        delete temp;

        iCount--;

        return Value;   
    }
}

template <class T>
void Stack <T>:: Display()
{
    if(First == NULL)
    {
         cout<<"Stack is empty";

    }
    else
    {
        cout<<"Elements of stack are :"<<"\n";

        struct node<T> * temp = First;

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
    Stack<int> obj;

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