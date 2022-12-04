//Problem Statement : Accept N numbers from users and display all such elements which are divisible by 5.

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iLength)
{
	int i = 0;
	for(int i = 0; i< iLength; i++)
	{
		if(Arr[i] % 5 == 0)
		{
			printf("%d \t", Arr[i]);
		}
	}			
}

int main()
{
	int iSize = 0, iCnt = 0;
	
	int *ptr = NULL;

	printf("Enter the number of elements :");
	scanf("%d", &iSize);

	ptr = (int *)malloc(iSize * sizeof(int));

	if(ptr == NULL)
	{
		printf("Unable to allocate the memory :");
		return -1;
	}

	printf("Enter %d elements \n",iSize);

	for(iCnt = 0; iCnt< iSize; iCnt++)
	{
		scanf("%d", &ptr[iCnt]);
	}

	Display(ptr, iSize);

	free(ptr);

	return 0;
}