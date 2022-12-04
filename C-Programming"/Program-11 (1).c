// Problem statement : Write a program which accpets range from user and display all numbers in between that range

#include<stdio.h>

void RangeDisplay(int iStart, int iEnd)
{

	for(int iCnt = iStart; iCnt<=iEnd; iCnt++)
	{
		printf("%d\t",iCnt);
	}
	 
}

int main()
{
	int iValue1 = 0 , iValue2 =0;

	printf("Enter starting point:\n");
	scanf("%d",&iValue1);

	printf("Enter ending point:\n");
	scanf("%d",&iValue2);

	RangeDisplay(iValue1, iValue2);

	return 0;
}