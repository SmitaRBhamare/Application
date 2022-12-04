//Problem Statement : Accept numbers of rows and number of columns from user and display below pattern.

/*
   1    2    3    4  
   5    6    7    8
   9    10   11   12
*/
#include<stdio.h>
//#include

void pattern(int iRow, int iCol)
{
	int iCnt = 0, i = 0;
	int iCount = 1;

	for(iCnt = 1; iCnt<=iRow; iCnt++)
	{
		
		for(i = 1; i<=iCol; i++)
		{
			printf("%d\t",iCount);
			iCount++;
		}
		printf("\n");	
	}
}
int main()
{
	int iValue1 = 0, iValue2 = 0;

	printf("Enter Row and coloumn respectively :\n");
	scanf("%d %d", &iValue1, &iValue2);

	pattern(iValue1, iValue2);

	return 0;
}