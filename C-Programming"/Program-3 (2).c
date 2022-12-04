//Write a program which accepts  number from user and
// print  factors of that numbers on screen

#include<stdio.h>

void DisplayFactors(int iNo)
{
	int i = 0;
	
	for(i = 1; i <= (iNo/2);i++)
	{
		if(iNo % i == 0)
		printf("%d\t",i);
	}
}

int main()
{
	int iValue = 0;

	printf("Enter number\n");
	scanf("%d",&iValue);
	
	DisplayFactors(iValue);

	return 0;
}
