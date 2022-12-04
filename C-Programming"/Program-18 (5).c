//Problem Statement : Accept numbers from users and display below pattern.

#include<stdio.h>
//#include

void pattern(int iNo)
{
	int iCnt = 0;

	if(iNo < 0)
	{
		iNo = -iNo;
	}

	for(iCnt = 1; iCnt <= iNo; iCnt++)
	{
		printf("%d\t", iCnt*2);
	}
}
int main()
{
	int iValue = 0;

	printf("Enter number :");
	scanf("%d", &iValue);

	pattern(iValue);

	return 0;
}