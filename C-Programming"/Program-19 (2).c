//Problem Statement : Accept numbers of rows and number of columns from user and display below pattern.

1   2   3   4
1   2   3   4
1   2   3   4
1   2   3   4

#include<stdio.h>
//#include

void pattern(int iRow, int iCol)
{
	int iCnt = 0, i = 0;
	for(iCnt = 0; iCnt<iRow; iCnt++)
	{
		for(i = 1; i<=iCol; i++)
		{
			printf("%d",i);
		}
		printf("\n");	
	}
}
int main()
{
	int iValue1 = 0, iValue2 = 0;

	printf("Enter number :");
	scanf("%d", &iValue1);

	printf("Enter number :");
	scanf("%d", &iValue2);


	pattern(iValue1, iValue2);

	return 0;
}