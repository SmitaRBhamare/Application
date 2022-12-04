//Problem Statement : Accept numbers of rows and number of columns from user and display below pattern.

#include<stdio.h>
//#include

void pattern(int iRow, int iCol)
{
	int iCnt = 0, i = 0;
	char ch = 'A';
	for(iCnt = 1; iCnt<=iRow; iCnt++)
	{
		ch = 'A';
		for(i = 0; i<iCol; i++)
		{
			printf("%c\t",ch);
			ch++;
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