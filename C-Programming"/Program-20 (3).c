//Problem Statement : Accept numbers of rows and number of columns from user and display below pattern.
/*		
        A   A   A   A   A
		B   B   B   B   B
		C   C   C   C   C
		D   D   D   D   D
*/

#include<stdio.h>
//#include

void pattern(int iRow, int iCol)
{
	int i= 0, j = 0;
	char ch = 'A';
	for(i= 1; i<=iRow; i++)
	{
		
		for(j = 0; j<iCol; j++)
		{
			printf("%c\t",ch);
		}
		ch++;
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