// Problem Statement : Write the program which accepts N numbers from user  and print all odd numbers upto N.
#include<stdio.h>


void OddDisplay(int iNo)
{
	int iCnt = 0;

	for(iCnt= 0 ; iCnt <= iNo; iCnt++)
	{
		if(iCnt % 2 !=0)
		{
			printf("%d\t", iCnt);
		}
	}
}
int main()
{
	int iValue = 0;

	printf("Enter the number: \n");
	scanf("%d",&iValue);

	OddDisplay(iValue);

	return 0;
}