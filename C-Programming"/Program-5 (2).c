//write the program which accepts the number from user and display its factors in decresing order

#include<stdio.h>

void FactRev(int iNo)
{
	int iCnt = 1;

	for(iCnt = iNo/2 ; iCnt <= iNo; iCnt--)
	{
	
		if(iNo % iCnt == 0)
		{
			printf("%d\t",iCnt);		
		}
	}	
}

int main()
{
	int iValue = 0;

	printf("Enter number");
	scanf("%d", &iValue);

	FactRev(iValue);

	return 0;
}