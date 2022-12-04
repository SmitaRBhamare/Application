// Problem statement : Write a program which accepts tempreture in Fahrenheit and convert it into celsius.
//(1 celsius = (Fahrenheit - 32)*(5/9))

#include<stdio.h>

double FhtoCs(float fTemps)
{
	 double Cs = 0;
	 Cs =(fTemps - 32)*5/9;

	 

	 return Cs ;
}

int main()
{
	float fValue = 0.0;
	double dRet = 0.0;

	printf("Enter temperature in Fahernheit :\n");
	scanf("%f", &fValue);

	dRet = FhtoCs(fValue);

	printf("%lf", dRet);

	return 0;
}