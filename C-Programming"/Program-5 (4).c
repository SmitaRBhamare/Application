//write the program which accepts the number from user and returns summation of all its non factors

#include<stdio.h>

int SumNonFact(int iNo)
{
	int iCnt = 1;
	int iSum = 0;

	for(iCnt = 1; iCnt < iNo; iCnt++)
	{
		if(iNo % iCnt != 0)
		{
			iSum = iSum + iCnt;
					
		}
	}

	return iSum;	
}

int main()
{
	int iValue = 0;
	int iRet = 0;

	printf("Enter number");
	scanf("%d", &iValue);

	iRet = SumNonFact(iValue);

	printf("%d", iRet);

	return 0;
}