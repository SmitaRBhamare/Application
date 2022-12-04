// Problem statement : Write a program which accpets number from user and count frequency of sunch  a Digit which are less than 6.

#include<stdio.h>


int Count(int iNo)
{
	int iDigit = 0 ,iCount = 0;
	while(iNo != 0)
	{
		iDigit = iNo % 10;
		if(iDigit <6)
		{
            iCount= iCount + 1 ;
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

	bRet = Count(iValue);

	printf("%d", bRet);

	return 0;
}