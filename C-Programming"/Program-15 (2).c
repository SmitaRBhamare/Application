//Problem Statement : Accept N numbers from users and return difference between  frequency of even numbers and odd numbers.

#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[], int iLength)
{
	int i = 0, iEvenFreq = 0, iOddFreq = 0;
	for(int i = 0; i< iLength; i++)
	{
		if(Arr[i] % 2 == 0 )
		{
		   iEvenFreq++;
		}
		else
		{
			iOddFreq++;
		}	
	}

	return (iEvenFreq-iOddFreq);
				
}

int main()
{
	int iSize = 0, iCnt = 0, iRet = 0;
	int *p = NULL;

	printf("Enter the number of element\n");
	scanf("%d", &iSize);

	p = (int *)malloc(iSize * sizeof(int));

	if(p == NULL)
	{
		printf("Unable to allocate the memory");
		return -1;
	}

	printf("Enter the %d elements:\n", iSize);
	for(iCnt = 0 ; iCnt< iSize; iCnt++)
	{
		scanf("%d",&p[iCnt]);
	}

    iRet = CountEven(p, iSize);

	printf("%d", iRet);

	free(p);

	return 0;
}