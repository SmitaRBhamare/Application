//Problem Statement : Write a program which return the addition of all even elements from signly linear linked list.

#include<stdio.h>
#include<stdlib.h>


struct node
{
    int Data;
    struct node* Next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE First, int iNo)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc (sizeof(NODE));
    
    newn->Data = iNo;
    newn->Next = NULL;

    if(*First == NULL)
    {
       *First =newn;
    }
    else
    {
        newn->Next = *First;
        *First = newn;
    }
}

void Display(PNODE First)
{
   
    while(First != 0)
    {
        printf("|%d|->",First->Data);
        First = First->Next;
    }
    printf("NULL\n");
}


int AdditionEven(PNODE First)
{
    int iSum = 0;
    while(First != 0)
    {
        if(First->Data % 2 == 0)
        {
            iSum = iSum + First->Data;
        }
        First = First->Next;
    }

    return iSum;
}


int main()
{
   PNODE Head = NULL;

    InsertFirst(&Head, 41);
    InsertFirst(&Head, 32);
    InsertFirst(&Head, 20);
    InsertFirst(&Head, 11);

    Display(Head);

    int iRet = AdditionEven(Head);

    printf("Addition of even number is : %d", iRet);
    return 0;
}