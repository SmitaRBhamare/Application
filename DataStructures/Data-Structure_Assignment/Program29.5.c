//Problem Statement : Write a program which display the addition of digits of elements from singly linear linked list.

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


void SumDigits(PNODE First)
{
   int iDigit = 0;
   int iSum = 0;
    while(First != 0)
    {
        while(First->Data != 0)
        {
            iDigit = First->Data % 10;
            iSum = iSum + iDigit;
            First->Data =  First->Data /10;
        }
       printf("%d\t", iSum);
       iSum = 0;
       First = First->Next;  
    } 
     
}


int main()
{
   PNODE Head = NULL;

    InsertFirst(&Head, 640);
    InsertFirst(&Head, 20);
    InsertFirst(&Head, 230);
    InsertFirst(&Head, 110);

    Display(Head);

    SumDigits(Head);

    return 0;
}