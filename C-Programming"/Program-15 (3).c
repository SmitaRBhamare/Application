//Problem Statement : Accept N numbers from users and check whether that number contain 11 or not.

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Check(int Arr[], int iLength)
{
	int iCnt = 0;
	for(iCnt = 0; iCnt < iLength; iCnt++)
	{
		if(Arr[iCnt] == 11)
		{
			break;
		}
	}

	if(iCnt == iLength)
	{
		return false;
	}
	else
	{
		return true;
	}
	
}

int main()
{	int iSize = 0, i = 0; 
	bool bRet = false;
	int *ptr = NULL;

	printf("Enter Number of elements :");
	scanf("%d", &iSize);

	ptr = (int *)malloc(iSize * sizeof(int));
	
	if(ptr == NULL)
	{
		printf("Unable to allocate the memory:");
	    return -1;
	}

	printf("Enter %d elements\n", iSize);
	for(i = 0; i< iSize; i++)
	{
	   printf("Enter the %d element : ", i + 1);
	   scanf("%d", &ptr[i]);
	}
	
	bRet = Check(ptr, iSize);

	if(bRet == true)
	{
		printf("11 is present");
	}
	else
	{
		printf("11 is not present");
	}

	free(ptr);
	

	return 0;
}