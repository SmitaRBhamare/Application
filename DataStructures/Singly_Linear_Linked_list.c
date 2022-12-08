#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node
{
  int data;
  struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node **  PPNODE;    // PPNODE is a typedef of struct node *.

void InsertFirst(PPNODE First, int no)
{
  PNODE newn = (PNODE)malloc(sizeof(NODE)); // 1: Allocate memory.  // 12 byte 
  newn->data = no;
  newn->next = NULL;

  if(*First == NULL)
  {
    *First = newn;  // If linked list is empty
  }
  else              // if linked list contain atleast one node
  {
     newn->next = *First;
    *First = newn;
  }
}

void InsertLast(PPNODE First, int no)
{
  PNODE newn = (PNODE)malloc(sizeof(NODE)); // 1: Allocate memory.  // 12 byte 
  PNODE temp = *First;
  newn->data = no;
  newn->next = NULL;

  if(*First == NULL)
  {
    *First = newn;  // If linked list is empty
  }
  else              // if linked list contain atleast one node
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

int Count(PNODE First)
{
  int iCnt = 0;
  while(First != NULL)
  {
    iCnt++;
    First = First->next;
  }
  return iCnt;
}

void DeleteFirst(PPNODE First)
{
    PNODE temp = *First;
    if(*First == NULL)     //empty linkedlist  //A: page No49
    {
        return ;
    }
    else if((*First)-> next == NULL)   // 1 node in linkedlist // B:Page no 49
    {
       free(*First);
       *First = NULL;
    }
    else   // More than 1 node in LinkedList   //  C:Page no 49
    {
      (*First )= (*First)->next;
      free(temp);
    }
}

void DeleteLast(PPNODE First)
{
    if(*First == NULL)     //empty linkedlist
    {
        return ;
    }
    else if((*First)-> next == NULL)   // 1 node in linkedlist
    {
       free(*First);
       *First = NULL;
    }
    else   // More than 1 node in LinkedList
    {
      PNODE temp = *First;
      while(temp->next->next != NULL)
      {
           temp = temp->next;
      }

      free(temp ->next);
      temp->next = NULL;
    }
}

void InsertatPos(PPNODE First, int no, int ipos)// program175.c
{
    int NodeCnt = 0, iCnt = 0;;
    PNODE newn = NULL;
    PNODE temp = NULL;

    NodeCnt = Count(*First);

    if((ipos < 1) ||(ipos> (NodeCnt +1)))   //Filter
    {
      printf("Invalid Position.\n");
      return ;
    }

    if(ipos ==1)
    {
        InsertFirst(First,no);
    }
    else if(ipos == NodeCnt+1)
    {
        InsertLast(First, no);
    }
    else
    {
      newn = (PNODE )malloc(sizeof (NODE));

      newn->data = no;
      newn->next = NULL;

      temp = *First;

      for(iCnt = 1; iCnt < ipos - 1 ; iCnt++)
      {
        temp = temp->next;
      }

      newn->next = temp->next;
      temp->next = newn;
    }
}

    void DeleteatPos(PPNODE First , int ipos)
    {
      PNODE temp1 = NULL;
      PNODE temp2 = NULL;
      int iCnt = 0, NodeCnt = 0;

      NodeCnt = Count(*First);
 
    if((ipos < 1) ||(ipos> (NodeCnt))) 
    {
      printf("Invalid Position.\n");
      return ;
    }

    if(ipos ==1)
    {
        DeleteFirst(First);
    }
    else if(ipos == NodeCnt)
    {
        DeleteLast(First);
    }
    else
    {
       temp1 = *First;

       for(iCnt = 1; iCnt < ipos-1; iCnt++)
       {
        temp1 = temp1->next;
       }

       temp2 = temp1->next;

       temp1->next = temp2->next;   //temp1->next = temp1->next->next;
      
       free(temp2);
    }
    
}

int main()
{
  //struct node * Head = NULL;
  PNODE Head = NULL;  // head is the pointer which holds address of  struct node and currenrtly hodling nothing.
  int iRet =0;

  InsertFirst(&Head, 51);
  InsertFirst(&Head, 21);
  InsertFirst(&Head, 11); 

  Display(Head);
  iRet =  Count(Head);
  printf("Number of nodes are :%d\n", iRet);

  InsertLast(&Head, 101);
  InsertLast(&Head, 111);
  InsertLast(&Head, 121);

  Display(Head);

  iRet =  Count(Head);
  printf("Number of nodes are :%d\n", iRet);

  InsertatPos(&Head, 105,5);
  Display(Head);
  iRet =  Count(Head);
  printf("Number of nodes are :%d\n", iRet);

  DeleteatPos(&Head,5);
  iRet =  Count(Head);
  printf("Number of nodes are :%d\n", iRet);
  Display(Head);
  
  
  DeleteFirst(&Head);
  iRet =  Count(Head);
  printf("Number of nodes are :%d\n", iRet);
  Display(Head);

  DeleteLast(&Head);
  iRet =  Count(Head);
  printf("Number of nodes are :%d\n", iRet);
  Display(Head);

  return 0;
}
