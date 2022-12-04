//Problem Statement : Write a program which displays ASCII table . Table contain Symbol, decimal, Hexadecimal and octal representation of every member from 0 to 255.

#include<stdio.h>

void DisplayASCII()
{
	printf("__________________________________________\n");

	printf("Character\t Decimal\t Hex\t Octal\n");

	printf("__________________________________________\n");
	
	for(int i = 0; i <= 255; i++)
	{
		printf( "%c \t\t %d \t\t %x \t\t %o\n",i,i,i,i);
	}
}

int main()
{
	DisplayASCII();

	return 0;
}