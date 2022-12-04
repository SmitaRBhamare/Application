// Problem statement : Write a program which accpets number from user and count frequency of 4 in it

#include<stdio.h>

int CountFour(int iNo)
{
	int iDigit = 0 ,iCount = 0;
	while(iNo != 0)
	{
		iDigit = iNo % 10;
		if(iDigit == 4)
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

	bRet = CountFour(iValue);
	printf("%d", bRet);

	return 0;
}