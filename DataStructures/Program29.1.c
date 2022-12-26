//Problem Statement : Write a program which returns perfect elements from singly linear lined list.

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
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
        newn->next = (*First);
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

void DisplayPerfect(PNODE First)
{
    int Num = 1;
    int iSum = 0;
    int iCnt = 0;

    while(First !=NULL)
    {
        for(iCnt = Num; iCnt < First->data;iCnt++)
        {
            if(First->data % Num == 0)
            {
                iSum =iSum + iCnt; 
            }
        }

        if(First->data == iSum)
        {
            printf(" Perfect number is :%d\n",First->data);
        }
        iSum = 0;
        First = First->next;
    }  
}

int main()
{
    PNODE Head = NULL;
    
    InsertFirst(&Head  , 6);
    InsertFirst(&Head  , 89);
    InsertFirst(&Head  , 41);
    InsertFirst(&Head  , 17);
    InsertFirst(&Head  , 28);
    InsertFirst(&Head  , 11);

    Display(Head);
    DisplayPerfect(Head);

    return 0;
}