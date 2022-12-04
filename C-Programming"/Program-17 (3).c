//Problem Statement : Accept N numbers from users and return the Difference between largest and  smallest number

#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iLength)
{
	int iCnt = 0, iMin =Arr[0], iMax =Arr[0], iDiff = 0;
	for(iCnt = 0; iCnt<iLength; iCnt++)
	{
		if(iMin > Arr[iCnt])
		{
			iMin = Arr[iCnt];
		}
		if(iMax < Arr[iCnt])
		{
			iMax = Arr[iCnt];
		}	
	}
    iDiff=  iMax - iMin;

	return iDiff;	
}

int main()
{
	int iSize = 0, iCnt = 0 , iRet = 0;
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
		printf("Enter the %d elements :", iCnt);
		scanf("%d",&p[iCnt]);
	}

	iRet = Difference (p,iSize);

	printf("Difference between maximum and minimum number is : %d", iRet);

	free(p);

	return 0;
}