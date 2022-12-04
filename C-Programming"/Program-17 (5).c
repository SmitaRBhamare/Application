//Problem Statement : Accept N numbers from users and display summation of digits of each number.

#include<stdio.h>
#include<stdlib.h>

void DigitsSum(int Arr[], int iLength)
{
	int iCnt = 0, iDigit = 0;
	int *iSum = NULL;
	iSum =(int*)malloc(sizeof(int)*iLength) ;
	
	
	for(iCnt = 0; iCnt<iLength; iCnt++)
	{
		iSum[iCnt]= 0;
		while( Arr[iCnt]!= 0)
		{
			iDigit = Arr[iCnt] % 10;
			iSum[iCnt] = iSum [iCnt]+ iDigit;
			Arr[iCnt] = Arr[iCnt]/10;
		}	
		printf("Addition of array element is :%d\n",iSum[iCnt]);
	}	
}

int main()
{
	int iSize = 0, iCnt = 0;
	int *p = NULL;
	

	printf("Enter number of elements : ");
	scanf("%d", &iSize);

	p = (int*)malloc(iSize*sizeof(int));

	if(p == NULL)
	{
		printf("Unable to allocate memory");
		return -1;
	}

	for(iCnt =  0; iCnt<iSize; iCnt++)
	{
		printf("Enter the %d elements :", iCnt + 1);
		scanf("%d",&p[iCnt]);
	}

	DigitsSum(p,iSize);

	free(p);

	return 0;
}