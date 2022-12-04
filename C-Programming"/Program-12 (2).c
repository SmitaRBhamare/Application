// Problem statement : Write a program which accpets number from user and checks whether it contains 0 in it or not.

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL ;

BOOL ChkZero(int iNo)
{
	int iDigit = 0;
  
     while(iNo != 0)
	 {
	    iDigit = iNo % 10;

		if(iDigit == 0)
		{
			return TRUE;
		}
		iNo = iNo/10;
	 }
}

int main()
{
	int iValue = 0;
	BOOL bRet = FALSE;
	
	printf("Enter Number:\t");
	scanf("%d",&iValue);

	bRet = ChkZero(iValue);

	if(bRet == TRUE)
	{
		printf("There is Zero");
	}
	else
	{
		printf("There is no Zero");
	}

	return 0;
}