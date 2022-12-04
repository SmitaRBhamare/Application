//Problem Statement : Accept N numbers from users and return frequency of  11 from it.

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength)
{
	int iCnt = 0, iFrequency = 0;
	for(iCnt = 0; iCnt < iLength; iCnt++)
	{
		if(Arr[iCnt] == 11)
		{
			iFrequency++;
		}
	}

	return iFrequency;
	
}

int main()
{	int iSize = 0, i = 0; 
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
	
	bRet = Frequency(ptr, iSize);
	printf("Frequency of 11 in array is : %d",bRet);

	free(ptr);

	return 0;
}