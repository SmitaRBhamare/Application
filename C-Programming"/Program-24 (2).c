//Problem Statement : Accept character from user. If character is small display its corresponding capital character and if it is small 
//then display its corresponding capital. In other cases display as it is.
#include<stdio.h>
#include<ctype.h>


void Display(char ch)
{
	if(ch >='A' && ch<='Z')
	{
		ch = tolower(ch);
		printf("%c",ch);
	}
	else if(ch>='a' || ch<='z')
	{
		ch = toupper(ch);
		printf("%c",ch);	
	}
}

int main()
{
	char cValue = '\0';

	printf("Enter the character\n");
	scanf("%c",&cValue);

	Display(cValue);

	return 0;
}