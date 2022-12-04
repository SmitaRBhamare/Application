// Problem statement : Write a program which accpets number and return difference between summation of even digits and summation of odd digits.
#include<stdio.h>

int CountDiff (int iNo)
{
	int iDigit = 0 ,iEven= 0, iOdd = 0 ;
	int iDiff = 0;
	while(iNo != 0)
	{
		iDigit = iNo % 10;
		if(iDigit % 2 == 0)
		{
			iEven = iDigit + iEven;	
		}
		if(iDigit % 2 != 0)
		{
			iOdd = iDigit + iOdd;	
		}
		iDiff = iEven - iOdd;
		iNo = iNo /10;
	}
	return iDiff;
}

int main()
{
	int iValue = 0;
	int bRet = 0;
	
	printf("Enter Number:\t");
	scanf("%d",&iValue);

	bRet = CountDiff(iValue);

	printf("%d", bRet);

	return 0;
}