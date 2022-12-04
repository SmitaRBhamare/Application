// Problem statement : Write a program which accpets number from user and count frequency of 2 in it

#include<stdio.h>


int CountTwo(int iNo)
{
	int iDigit = 0 ,iCount = 0;
	while(iNo != 0)
	{
		iDigit = iNo % 10;
		if(iDigit == 2)
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

	bRet = CountTwo(iValue);

	printf("%d", bRet);

	return 0;
}