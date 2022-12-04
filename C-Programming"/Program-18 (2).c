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

	for(iCnt =iNo; iCnt> 0; iCnt--)
	{
			printf("\t%d\t#",iCnt);
		
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