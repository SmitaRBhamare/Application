//Problem Statement : Accept numbers of rows and number of columns from user and display below pattern.

/*
a  b  c  d  e
1  2  3  4  5
a  b  c  d  e
1  2  3  4  5 
a  b  c  d  e
  
*/


#include<stdio.h>

void pattern(int iRow, int iCol)
{
	int j = 0, i = 0;
	for(i = 1; i<=iRow; i++)
	{
		char ch ='a';
		for(j = 1; j<=iCol; j++)
		{
			if(i == 1 || (i % 2 != 0))
			{
				printf("%c\t",ch);
				ch++;		
			}
			else
			{
				printf("%d\t",j);	
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