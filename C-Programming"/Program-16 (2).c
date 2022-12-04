//Problem Statement : Accept N numbers from users and accept another number as No and return index of first occurence of that No.

#include<stdio.h>
#include<stdlib.h>


int FirstOcc(int Arr[], int iLength, int iNo)
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
		return -1;
	}

}

int main()
{
	int iSize = 0, iCnt = 0 , iValue = 0,iRet = 0;
	int *p = NULL;
	

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

	printf("Enter the number :");
	scanf("%d",&iValue);

	iRet =FirstOcc(p, iSize, iValue);

	if(iRet == -1) 
	{
		printf("There is no such a number ");

	}
	else
	{
		printf("First occurrence of number is %d", iRet);
	}

	free(p);

	return 0;

}