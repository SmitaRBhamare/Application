// Problem statement : Write a program which accpets area in square feet and convert it into square meter.
//(1 Square feet = 0.0929 Square Meter)

#include<stdio.h>

double SquareMeter(int iNo)
{
	double SqMtr = iNo *0.0929;

	return SqMtr ;
	 
}

int main()
{
	int iValue = 0;
	double dRet = 0.0;

	printf("Emter area in square feet :\n");
	scanf("%d",&iValue);

	dRet = SquareMeter(iValue);
	printf("%lf",dRet);

	return 0;
}