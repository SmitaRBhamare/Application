//Problem Statement : Accept numbers of rows and number of columns from user and display below pattern.

/*
	4  4  4  4  4
    3  3  3  3  3
	2  2  2  2  2
	1  1  1  1  1
*/
#include<stdio.h>
//#include

void pattern(int iRow, int iCol)
{
	int iCnt = 0, i = 0;

	for(iCnt = iRow; iCnt>0; iCnt--)
	{
		
		for(i = 0; i<iCol; i++)
		{
			printf("%d\t",iCnt);
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