//Problem Statement :  Write a program which accept string from user and return difference between frequency of small characters and frequency of capital letter

#include<stdio.h>

int Difference(char *str)
{
	int iCap = 0, iSmall = 0 , iDiff = 0;
	
	while(*str != '\0')
	{
		if(*str >= 'A' && *str<= 'Z')
		{
			iCap++;
		}
		else if(*str >= 'a' && *str<= 'z')
		{
			iSmall++;
		}
		str++;
	}
	
	iDiff = iSmall - iCap;

	return iDiff;
}

 int main()
 {
	char arr[20];
	int iRet = 0;

	printf("Enter the string :");
	scanf("%[^'\n']s",arr);

	iRet = Difference(arr);

	printf("%d", iRet);
	return 0;
 }