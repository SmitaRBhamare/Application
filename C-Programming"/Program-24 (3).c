//Problem Statement : Accept character from user. If character is capital then display all the caracter from the input
//characters till Z . if input character is small then print all the character in reverse order till a. In other cases return directly.
#include<stdio.h>

void Display(char ch)
{
	if(ch >='A' && ch<='Z')
	{
		int i = 0 ;
		while(ch <='Z')
		{
			printf("%c\t",ch);
			ch++;
		}
	}
	else if(ch >='a' && ch<='z')
	{
		int i = 0 ;
		while(ch >='a')
		{
			printf("%c\t",ch);
			ch--;
		}

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