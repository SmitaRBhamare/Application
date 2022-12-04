//Accept one character from user and check whether that character is vowel (a,e,i,o,u)or not.

#include<stdio.h>


typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char C)
{
	if(C =='a'||C=='e' ||C=='i' ||C=='o'||C=='u' ||C=='A'||C=='E'||C=='I'||C=='O'||C=='U')
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
	char cValue ='\0';
	BOOL bRet = FALSE;
	
	printf("Enter an alphabet\n");
	scanf("%c",&cValue);

	bRet = ChkVowel(cValue);

	if(bRet == TRUE)
	{
		printf("It is Vowel");
	}
	else
	{
		printf("It is not Vowel");
	}

	return 0;
}
