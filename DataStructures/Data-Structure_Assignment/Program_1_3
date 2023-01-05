//Problem Statement : Write a program which  returns largest elements from singly linear lined list.

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
     PNODE newn = (PNODE)malloc(sizeof(NODE));
     newn->data = no;
     newn->next = NULL;

     if(*First == NULL)
     {
        *First = newn;
     }
     else
     {
        newn->next = *First;
        *First = newn;
     }   
}

void Display(PNODE First)
{
    while(First != NULL)
    {
        printf("|%d|->", First->data);
        First = First->next;
    }
    printf("NULL\n");
}

int Maximum(PNODE First)
{
    int iMax = First->data;
    int Add = 0;
    while(First != NULL)
    {
        if(iMax < First->data)
        {
            iMax = First->data;
        } 
        First = First->next;
    }
    return iMax;
}


int main()
{
    PNODE  Head = NULL;
    int iRet = 0;

    InsertFirst(&Head  , 240);
    InsertFirst(&Head  , 320);
    InsertFirst(&Head  , 230);
    InsertFirst(&Head  , 110);
    InsertFirst(&Head  , 510);
    

    Display(Head);

    iRet = Maximum(Head);
    printf("Maximum number in element is : %d",iRet);

    return 0;
}



