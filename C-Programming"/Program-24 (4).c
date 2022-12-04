//Problem Statement :  Accept character from user and check whether it is special character or not.
#include<stdio.h>
 #define TRUE 1
 #define FALSE 0

 typedef int BOOL;

BOOL ChkSpecial(char ch)
{
	if( ch>= 'A' && ch<= 'Z' || ch>= 'a' && ch<= 'z' )
	{
		return FALSE;
	}
	else
	{
		return TRUE;
	}
}

int main()
{
	char cValue = '\0';
	BOOL bRet = FALSE;

	printf("Enter the character\n");
	scanf("%c",&cValue);

	bRet = ChkSpecial(cValue);
	if(bRet == TRUE)
	{
		printf("It is Special character");
	}
	else
	{
		printf("It is  not Special character");
	}

	return 0;
}