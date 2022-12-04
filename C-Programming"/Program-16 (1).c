//Problem Statement : Accept N numbers from users and accept another number as No and check wether No is present or not.

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL; 

BOOL Check(int Arr[], int iLength, int iNo)
{
	int iCnt = 0;

	for(iCnt = 0; iCnt < iLength; iCnt++)
	{
		if(Arr[iCnt]== iNo)
		{
			break;
		}
	}

	if(iCnt == iLength)
	{
		return FALSE;
	}
	else
	{
		return TRUE;
	}

}

int main()
{
	int iSize = 0, iCnt = 0 , iValue = 0;
	int *p = NULL;
	BOOL bRet = FALSE;

	printf("Enter number of elements : ");
	scanf("%d", &iSize);

	p = (int*)malloc(iSize*sizeof(int));

	if(p == NULL)
	{
		printf("Unable to allocate memory");
		return -1;
	}

	printf("Enter %d elements : \n",iSize);
	for(iCnt =  0; iCnt<iSize; iCnt++)
	{
		printf("Enter the %d  elements :", iCnt+1);
		scanf("%d",&p[iCnt]);
	}

	printf("Enter the number you want to check whether it is present or not :");
	scanf("%d",&iValue);

	bRet =Check(p, iSize, iValue);

	if(bRet == TRUE) 
	{
		printf(" %d is present in array", iValue);

	}
	else
	{
		printf(" %d is not present in array", iValue);
	}

	free(p);

	return 0;

}