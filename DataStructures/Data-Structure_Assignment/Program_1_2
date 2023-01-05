//Problem Statement : Write a program which  returns addition of all the elements from singly linear linked list


#include<stdio.h>
#include<stdlib.h>


struct node
{
    int data;
    struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First, int no)
{

    PNODE newn =(PNODE)malloc(sizeof(NODE)); 
    newn->data = no;
    newn->next = NULL;

    if(*First ==NULL)
    {
        (*First) = newn;
    }
    else
    {
        newn->next = (*First);
        (*First) = newn;
    }
}

void Display(PNODE First)
{
    while(First!= NULL)
    {
        printf("|%d|->", First->data);
        First = First->next;
    }
    printf("NULL\n");
}

int addition(PNODE First)
{
    int Add = 0;
    while(First != NULL)
    {
        Add = Add + (First->data);
        First = First->next;
    }

    return Add;
}

int main()
{
    PNODE Head = NULL;
    int iRet = 0;
    
    InsertFirst(&Head  , 70);
    InsertFirst(&Head  , 30);
    InsertFirst(&Head  , 50);
    InsertFirst(&Head  , 40);
    InsertFirst(&Head  , 30);
    InsertFirst(&Head  , 20);
    InsertFirst(&Head  , 10);

    Display(Head);

    iRet = addition(Head);

    printf("Addition of data is :%d ", iRet);

    return 0;
}

