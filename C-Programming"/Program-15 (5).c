//Problem Statement : Accept N numbers from users and accept another number as No and return frequency of  No from it.

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength, int No)
{
	int iCnt = 0, iFrequency = 0;
	for(iCnt = 0; iCnt < iLength; iCnt++)
	{
		if(Arr[iCnt] == No)
		{
			iFrequency++;
		}
	}

	return iFrequency;
	
}

int main()
{	int iSize = 0, i = 0, iValue = 0; 
	int bRet = 0;
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

	printf("Enter the number of which you want to check freuency :");
	scanf("%d", &iValue);
	
	bRet = Frequency(ptr, iSize, iValue);
	printf("Frequency of %d in array is : %d", iValue, bRet);

   free(p);
	return 0;
}