//Problem Statement : Accept N numbers from users and return difference between summation of even elements and  summation of Odd elements .

#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iLength)
{
	int i = 0, iEvenSum = 0, iOddSum = 0, iDiff = 0;
	for(int i = 0; i< iLength; i++)
	{
		if(Arr[i] % 2 == 0)
		{
			iEvenSum = iEvenSum + Arr[i];
		}
		else
		{
			iOddSum = iOddSum + Arr[i];
		}
	}
	iDiff = iEvenSum - iOddSum ;

	return iDiff;
}

int main()
{
	int iSize = 0, iRet = 0, iCnt = 0;
	
	//int iLength = 0;
	int *p = NULL;

	printf("Enter the number of elements :");
	scanf("%d", &iSize);

	p = (int *)malloc(iSize * sizeof(int));

	if(p == NULL)
	{
		printf("Unable to allocate the memory :");
		return -1;
	}

	printf("Enter %d elements \n",iSize);

	for(iCnt = 0; iCnt< iSize; iCnt++)
	{
		scanf("%d", &p[iCnt]);
	}

	iRet = Difference(p, iSize);

	printf("Result is %d", iRet);

	free(p);

	return 0;
}