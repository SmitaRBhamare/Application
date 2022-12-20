//program285.c 
// problem statements accept N- numbers and display perfect  number from linked list.

#include<stdio.h>
#include<stdlib.h>
#include <stdbool.h>

#pragma pack(1)
struct node
{
  int data;
  struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node **  PPNODE;  



void InsertLast(PPNODE First, int no)
{
  PNODE newn = (PNODE)malloc(sizeof(NODE));   
  PNODE temp = *First;
  newn->data = no;
  newn->next = NULL;

  if(*First == NULL)
  {
    *First = newn;  
  }
  else              
  {
     while(temp ->next != NULL)
     {
       temp = temp->next;
     }
     temp->next = newn;
  }
}

void Display(PNODE First)
{
  printf("Elements from Linked List are :\n");

  while(First != NULL)
  {
    printf("| %d |->",First->data);
    First = First->next;
  }
  printf("Null\n");

}

bool ChkPerfect(int iNo)
{
  int iSum = 0;
  int iTemp = iNo;
  int iCnt = 0;

  for(iCnt = 1; iCnt < iNo ; iCnt++)
  {
     if(iNo % iCnt == 0)
     {
      iSum = iSum + iCnt;
     }

  }
  return (iSum == iTemp);  // new way to return true value .
}

void DisplayPerfect(PNODE First)
{
   while(First != NULL)
   {
    if(ChkPerfect(First->data) == true)
    {
      printf("%d is a perfect number\n", First->data);
    }
    First = First->next;
   }
}


int main()
{
  PNODE Head = NULL;
  

  InsertLast(&Head, 11);
  InsertLast(&Head, 6);
  InsertLast(&Head, 51); 
  InsertLast(&Head, 496);
  InsertLast(&Head, 111);
  InsertLast(&Head, 8128);

  Display(Head);

  DisplayPerfect(Head);
  
  return 0;
}
