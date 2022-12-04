//Problem Statement : Accept numbers of rows and number of columns from user and display below pattern.

//iRow = 4, iCol = 4;
/*
     *    #     #    # 
     *    *     #    #
	 *    *     *    #
	 *    *     *    *

*/

#include<stdio.h>

void pattern(int iRow, int iCol)
{
	int j = 0, i = 0;
	int iNo = 1;

	for(i = 1; i<=iRow; i++)
	{
		for(j = 1; j<=iCol; j++)
		{
			if(i >= j)
			{
				printf("*\t");
			}
			else
			{
				printf("#\t");
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