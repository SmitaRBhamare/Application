// Problem statement :  write a program which accept number from user and display below pattern
#include<stdio.h>

void Display(int iNo)
{
	for(int iCnt = 0; iCnt< iNo; iCnt++)
	{
		printf("*\t");
	}

	for(int iCnt = 0; iCnt< iNo; iCnt++)
	{
		printf("#\t");
	}
	
}

int main()
{
	int iValue = 0;

	printf("Enter number");
	scanf("%d", &iValue);

	Display(iValue);

	return 0;
}