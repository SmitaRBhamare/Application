//Problem Statement : Accept numbers of rows and number of columns from user and display below pattern.
/*
2  4  6  8  10
1  3  5  7  9
2  4  6  8  10
1  3  5  7  9

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
            if((i == 1 )|| (i % 2 != 0))
			{	
				printf("%d\t", j*2);
			}
			else 
			{
		     	printf("%d\t",(j*2)-1);		
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