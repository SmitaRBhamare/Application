// Problem statement : Write a program which accpets number and return the count of digits in between 3 and 7.

#include<stdio.h>


int CountRange(int iNo)
{
	int iDigit = 0 ,iCount = 0;
	while(iNo != 0)
	{
		iDigit = iNo % 10;
		if(iDigit > 3 && iDigit< 7)
		{
            iCount = iCount + 1 ;
		}
		iNo = iNo /10;
	}
	return iCount;
}

int main()
{
	int iValue = 0;
	int bRet = 0;
	
	printf("Enter Number:\t");
	scanf("%d",&iValue);

	bRet = CountRange(iValue);

	printf("%d", bRet);

	return 0;
}