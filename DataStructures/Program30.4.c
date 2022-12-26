//Problem Statement : Write a program which display smallest digit of all the elements from singly linear linked list.

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


void DisplayProduct(PNODE First)
{
   int iDigit = 0;
  
    while(First != 0)
    {
        int iMin = 9;
        while(First->Data != 0)
        {
            iDigit = First->Data % 10;
            if(iDigit < iMin)
            {  
                iMin = iDigit;
            }
            First->Data =  First->Data /10;
        }
        printf("%d\t", iMin); 
       First = First->Next;  
    }      
}


int main()
{
   PNODE Head = NULL;

    InsertFirst(&Head, 415);
    InsertFirst(&Head, 532);
    InsertFirst(&Head, 250);
    InsertFirst(&Head, 11);

    Display(Head);

    DisplayProduct(Head);

    return 0;
}