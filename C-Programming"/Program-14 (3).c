//Problem Statement : Accept N numbers from users and display all such elements which are even and divisible by 5.

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iLength)
{
	int i = 0;
	for(int i = 0; i< iLength; i++)
	{
		if(Arr[i] % 2 == 0 && Arr[i] % 5 == 0)
		{
			printf("%d \t", Arr[i]);
		}
		
	}
	if(Arr[i] % 2 != 0 && Arr[i] % 5 != 0)
		{
			printf("There is no any even number divisible by 5");	
		}			
}

int main()
{
	int iSize = 0, iCnt = 0;
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

    Display(p, iSize);

	return 0;
}