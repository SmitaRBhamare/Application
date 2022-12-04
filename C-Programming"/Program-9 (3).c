// Problem statement :  Write a program to find even factorial of given number.
#include<stdio.h>

int EvenFactorial(int iNo)
{
	int iFactorial = 1;
	int iCnt = 1;
	if(iNo<0)
	{
		iNo = -iNo;
	}
	for(iCnt = iNo; iCnt>=2; iCnt--)
	{
		if(iCnt % 2 == 0)
	    {
			iFactorial = iFactorial*iCnt;
		}
	}
	return iFactorial;
}

int main()
{
	int iValue = 0, iRet = 0;

	printf("Enter number :\n");
	scanf("%d", &iValue);
	
	iRet = EvenFactorial(iValue);

	printf("Even Factorial of number is %d", iRet);

	return 0;
}