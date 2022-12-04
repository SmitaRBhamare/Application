// Problem statement :  Write the program which accepts radius of circle from  user and calculate its area.
//consider value of PI as 3.14 (Area = PI *Radius* Radius)
#include<stdio.h>


double CircleArea(float fRadius)
{
	float PI = 3.14f;
	double Area = 0.0f;

	Area = (PI *fRadius* fRadius);

	return Area;
}

int main()
{
	float fValue = 0.0;
	double dRet = 0.0;

	printf("Enter Radius :\n");
	scanf("%f", &fValue);
	
	dRet = CircleArea(fValue);

	printf("Area of cirlce  is : %lf",dRet);

	return 0;
}