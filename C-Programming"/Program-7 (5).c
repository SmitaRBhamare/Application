// Problem Statement : Write the program which accepts N numbers from user  and print first five multiples of N

#include<stdio.h>

void MultipleDisplay(int iNo)
{
	int iCnt = 0;

	for(iCnt= 1 ; iCnt <= 5; iCnt++)
	{
		printf("%d\t",iCnt*iNo);
	}
}
int main()
{
	int iValue = 0;

	printf("Enter the number: \n");
	scanf("%d",&iValue);

	MultipleDisplay(iValue);

	return 0;
}