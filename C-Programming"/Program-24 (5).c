//Problem Statement :  Accept character from user and display its ASCII value in decimal , octal, hexadecimal format.
#include<stdio.h>
 #define TRUE 1
 #define FALSE 0

 typedef int BOOL;

void Display(char ch)
{
		printf("%d\n%o\n%x",ch,ch,ch);
}

int main()
{
	char cValue = '\0';
	BOOL bRet = FALSE;

	printf("Enter the character\n");
	scanf("%c",&cValue);

	Display(cValue);
	

	return 0;
}