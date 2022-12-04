//Write a program which accepts one number from user and
// print that number of even numbers on screen

#include<stdio.h>

void PrintEven(int iNo)
{

	int iCnt= 0;
	for(iCnt = 2; iCnt <= iNo*2 ; iCnt++)
	{
		if(iCnt % 2 == 0)
		{
			printf("%d\t", iCnt);
		}

	}
}


int main()
{
	int iValue = 0;

	printf("Enter number\n");
	scanf("%d",&iValue);
	
	PrintEven(iValue);

	return 0;
}
