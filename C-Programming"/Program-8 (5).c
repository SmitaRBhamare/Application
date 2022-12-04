// Problem statement :  write a program which accept number from user and Display its table in revese .
#include<stdio.h>

void TableRev(int iNo)
{
	int iCnt = 0;

	if(iNo < 0)
	{
		iNo = -iNo;     //Updator
	}
	
	for(iCnt = 10; iCnt> 0; iCnt--)
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

	TableRev(iValue);

	return 0;
}