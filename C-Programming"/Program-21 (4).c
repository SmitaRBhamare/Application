//Problem Statement : Accept numbers of rows and number of columns from user and display below pattern.

/*
1  2  3  4  5  6  
7  8  9  1  2  3
4  5  6  7  8  9 
1  2  3  4  5  6
7  8  9  1  2  3 
4  5  6  7  8  9
*/


#include<stdio.h>

void pattern(int iRow, int iCol)
{
	int j = 0, i = 0;
	int iCount = 1;

	for(i = 1; i<=iRow; i++)
	{
		for(j = 1; j<=iCol; j++)
		{
			printf("%d\t",iCount);

			iCount++;
			
			if(iCount >= 10)
			{
				iCount = 1;
			}
					
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