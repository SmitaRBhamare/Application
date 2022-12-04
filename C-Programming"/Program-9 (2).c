// Problem statement :  Accept amount in US dollar and return corresponding value in Indian currency.
#include<stdio.h>

int DollarTOINR(int iNo)
{
	int iMult = 1;

	iMult = iNo * 70;

	return iMult;

	
}

int main()
{
	int iValue = 0, iRet = 0;

	printf("Enter number of USD :\n");
	scanf("%d", &iValue);
	
	iRet = DollarTOINR(iValue);

	printf("Value in INR is %d", iRet);

	return 0;
}