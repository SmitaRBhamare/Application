// Problem statement : Write a program which accpets number and return multiplication of all digit.
#include<stdio.h>


int MultDigits (int iNo)
{
	int iDigit = 0 ,iMult= 1 ;
	
	while(iNo != 0)
	{
		iDigit = iNo % 10;
		if(iDigit == 0)
		{
			iDigit = 1;	
		}
		
		iMult = iMult * iDigit;
		iNo = iNo /10;
	}
	return iMult;
}

int main()
{
	int iValue = 0;
	int bRet = 0;
	
	printf("Enter Number:\t");
	scanf("%d",&iValue);

	bRet =  MultDigits(iValue);

	printf("%d", bRet);

	return 0;
}