//Problem Statement : Accept numbers of rows and number of columns from user and display below pattern.
/*
    *  #  *  #  *
	*  #  *  #  *
	*  #  *  #  *
	*  #  *  #  *

*/

#include<stdio.h>
//#include

void pattern(int iRow, int iCol)
{
	int i = 0, j = 0;
	for(i = 0; i<iRow; i++)
	{
		for(j = 1; j<=iCol; j++)
		{
			if(j % 2 == 0 )
			{
				printf("#");
			}
			else
			{
				printf("*");
			}
			
		}

		printf("\n");	
	}
}
int main()
{
	int iValue1 = 0, iValue2 = 0;

	printf("Enter Row :");
	scanf("%d", &iValue1);

	printf("Enter coloumn :");
	scanf("%d", &iValue2);


	pattern(iValue1, iValue2);

	return 0;
}