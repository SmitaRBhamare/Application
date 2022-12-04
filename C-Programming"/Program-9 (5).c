// Problem statement :  Write the proram which returns different between Even factorial and Odd Factorial of given number.
#include<stdio.h>


int FactorialDiff(int iNo)
{
	int iFactorial1 = 1;
	int iFactorial2 = 1;
	int FactDiff = 0;
	int iCnt = 1;
	if(iNo<0)
	{
		iNo = -iNo;
	}
	for(iCnt = iNo; iCnt>=2; iCnt--)
	{
		if(iCnt % 2 == 0)
	    {
			iFactorial1 = iFactorial1*iCnt;
		}

		if(iCnt % 2 != 0)
	    {
			iFactorial2 = iFactorial2*iCnt;
		}
	}
	FactDiff = iFactorial1 -iFactorial2;

	return FactDiff;
}

int main()
{
	int iValue = 0, iRet = 0;

	printf("Enter number :\n");
	scanf("%d", &iValue);
	
	iRet = FactorialDiff(iValue);

	printf("Factorial difference  is %d", iRet);

	return 0;
}