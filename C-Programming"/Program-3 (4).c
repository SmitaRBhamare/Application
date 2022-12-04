//Accept one character from user and covert case of that character.

#include<stdio.h>
#include<ctype.h>

void DisplayConvert(char CValue)
{
	if(CValue>='a' && CValue<='z')
	{
		CValue = toupper(CValue);
		printf("%c",CValue);
	}
	else if(CValue>='A' && CValue<='Z')
	{
		CValue = tolower(CValue);
		printf("%c",CValue);
	}
}

int main()
{
	char cValue ='\0';
	
	printf("Enter character\n");
	scanf("%c",&cValue);

	DisplayConvert(cValue);

	

	return 0;
}
