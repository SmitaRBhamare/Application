// Problem Statement : Write the program which accepts total marks and obtained marks from user and calculate percetage.
#include<stdio.h>


float Percentage(int iNo1, int iNo2)
{
	float Percent = 0.0;
	
	Percent =(iNo2 * 100.0 )/iNo1;

	return Percent;
}

int main()
{
	int iValue1 = 0, iValue2 = 0;
	float fRet = 0.0;

	printf("Please enter total Marks:\n");
	scanf("%d", &iValue1);

	printf("Please enter obtained Marks:\n");
	scanf("%d", &iValue2);

	fRet = Percentage(iValue1,iValue2);

	printf("Percentage is :%f", fRet);

	return 0;
}