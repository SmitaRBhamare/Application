// Problem statement : Write a program which accepts distance in kilometer and convert it into meter.
//(1 Kilometre = 1000 Meter)
#include<stdio.h>

double KMtoMeter(int iNo)
{
	 int iMeter = 0;

	 iMeter = iNo *1000;

	 return iMeter;
}

int main()
{
	int iValue = 0, iRet = 0;

	printf("Enter Distance :\n");
	scanf("%d", &iValue);

	iRet = KMtoMeter(iValue);

	printf("%d", iRet);

	return 0;
}