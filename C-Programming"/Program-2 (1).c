//Accpet number from user and check whether number is even or odd
#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkEven(int iNo)
{
	if(iNo % 2 == 0)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}

}

int main()
{
	int iValue = 0;
	BOOL bRet = FALSE;

	printf("Enter number :");
	scanf("%d", &iValue);

	bRet = ChkEven(iValue);

	if(bRet == TRUE)
	{
		printf("%d is even number",iValue);
	}
	else
	{
		printf("%d is odd number",iValue);

	}

	

	return 0 ;


}