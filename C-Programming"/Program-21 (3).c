//Problem Statement : Accept numbers of rows and number of columns from user and display below pattern.

//iRow = 4, iCol = 4;
/*
 1   2   3   4   
 2   3   4   5 
 3   4   5   6
 4   5   6   7

*/


#include<stdio.h>

void pattern(int iRow, int iCol)
{
	int j = 0, i = 0;
	int iNo = 0;

	for(i = 1; i<=iRow; i++)
	{
		iNo = i;	
		for(j = 1; j<=iCol; j++)
		{
			printf("%d\t", iNo);	
			iNo++;		
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