// Problem Statement : Write the program which accptes  numbers from user and print that number of $ & *.

#include<stdio.h>

void Pattern(int iNo)
{
	int iCnt= 0;

	for(iCnt =0; iCnt <iNo; iCnt++)
	{
		printf("$\t*\t");
	}

}


int main()
{
	int iValue = 0;
	

	printf("Enter numbers :\n");
	scanf("%d", &iValue);

    Pattern(iValue);

	return 0;
}