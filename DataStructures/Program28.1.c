//Problem Statement : Write a program which search first occurence of particular element from signly linear linked list.
//Function should return position at which element is found.

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int Data;
    struct node *Next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE First, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->Data = no;
    newn->Next = NULL;

    if(*First == NULL)
    {
        *First = newn;
    } 
    else
    {
        newn->Next = *First;
        *First = newn;
    }
}

void Display(PNODE First)
{
    while(First !=NULL)
    {
        printf("|%d|->",First->Data);
        First = First->Next;
    }
    printf("NULL\n");
}

int SearchFirstOcc(PNODE First , int no)
{
    int index= 1;

    while(First != NULL)
    {
        if(First->Data ==no)
        {
            break;
        }
        First =First->Next;
        index++;
       
    }
    return index;
}



int main()
{
    //struct node *Head
    PNODE Head = NULL;
    int iNum = 0, iRet = 0;

    InsertFirst(&Head  , 70);
    InsertFirst(&Head  , 30);
    InsertFirst(&Head  , 50);
    InsertFirst(&Head  , 40);
    InsertFirst(&Head  , 30);
    InsertFirst(&Head  , 20);
    InsertFirst(&Head  , 10);

    Display(Head);
    printf("Enter the number you want to find the index :");
    scanf("%d", &iNum);
    

    iRet = SearchFirstOcc(Head ,iNum); 

    printf("First occurrence of number is : %d\n",iRet);

    return 0;
}

