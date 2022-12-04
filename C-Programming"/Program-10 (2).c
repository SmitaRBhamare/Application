// Problem statement :  Write the program which accepts width and hight of rectangle from user and calculate its area 
//(Area = width* Hight)
#include<stdio.h>

double RectArea(float fWidth, float fHight)
{
	double Area = 0.0f;

	Area = (fWidth* fHight);

	return Area;
}

int main()
{
	float fValue1 = 0.0 , fValue2 = 0.0;;
	double dRet = 0.0;

	printf("Enter Width :\n");
	scanf("%f", &fValue1);

	printf("Enter Hight:\n");
	scanf("%f", &fValue2);
	
	dRet = RectArea(fValue1,fValue2);

	printf("Area of rectangle is : %lf",dRet);

	return 0;
}