//Problem Statement :  Write a program which accept string from user and return difference between frequency of small characters and frequency of capital letter

#include<stdio.h>
#include<stdbool.h>

bool ChkVowel(char *str)
{	
	while(*str != '\0')
	{
		if(*str == 'a'||*str == 'e'||*str == 'i'||*str == 'o'||*str == 'u')
		{
			break;
		}
		str++;
	}

	if(*str == '\0')
	{
		return false;
	}
	else
	{
		return true;
	}
	
}

 int main()
 {
	char arr[20];
	bool bRet = 0;

	printf("Enter the string :");
	scanf("%[^'\n']s",arr);

	bRet = ChkVowel(arr);

	if(bRet == true)
	{
		printf("Contains Vowel");
	}
	else
	{
		printf("There is no Vowel");
	}
	
	return 0;
 }