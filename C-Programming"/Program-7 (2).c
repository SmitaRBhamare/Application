// Problem Statement : Write the program which accepts number from user and print number till that number.
#include<stdio.h>


#include<stdio.h>

void Display(int iNo)
{
	int iCnt= 0;

	for(iCnt =0; iCnt <=iNo; iCnt++)
	{
		printf("%d\t", iCnt);
	}

}


int main()
{
	int iValue = 0;
	

	printf("Enter numbers :\n");
	scanf("%d", &iValue);

    Display(iValue);

	return 0;
}