// Problem statement : Write a program which accpets number and return the count of even Digit.

#include<stdio.h>


int CountEven(int iNo)
{
	int iDigit = 0 ,iCount = 0;
	while(iNo != 0)
	{
		iDigit = iNo % 10;
		if(iDigit % 2 == 0)
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

	bRet = CountEven(iValue);

	printf("%d", bRet);

	return 0;
}