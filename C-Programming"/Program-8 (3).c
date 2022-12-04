// Problem statement : write the program to find factorial of given number
#include<stdio.h>

int Factorial(int iNo)
{
	int iCnt = 0;
	int iFact =1;
	if(iNo < 0)
	{
		iNo = -iNo;     //Updator
	}
	for(iCnt = iNo ;iCnt > 0 ;iCnt--)
	{
		iFact = iFact *iCnt;
		//printf("%d",iFact);
	}
	return iFact;
}

int main()
{
	int iValue = 0, iRet = 0;

	printf("Enter number :\n");
	scanf("%d", &iValue);

	iRet = Factorial(iValue);
	printf("Factorial of numbers is :%d",iRet);

	return 0;
}