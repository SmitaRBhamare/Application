// Problem statement : write a program which accept number from user and Display its table

#include<stdio.h>

void Table(int iNo)
{
	int iCnt = 0;

	if(iNo < 0)
	{
		iNo = -iNo;     //Updator
	}
	
	for(iCnt = 1; iCnt<11 ; iCnt++)
	{
		int iTable = iNo *iCnt;
		printf("%d\t",iTable);
	}
}

int main()
{
	int iValue = 0;

	printf("Enter number");
	scanf("%d", &iValue);

	Table(iValue);

	return 0;
}