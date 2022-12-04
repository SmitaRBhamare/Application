//Problem Statement : Accept numbers of rows and number of columns from user and display below pattern.

#include<stdio.h>
//#include

void pattern(int iRow, int iCol)
{
	int i = 0, j = 0;
	char CapCh = 'A', SmallCh = 'a';
	for(i = 1; i<=iRow; i++)
	{
		CapCh = 'A',SmallCh = 'a';
		for(j= 0; j<iCol; j++)
		{
			
			if(i % 2 == 0)
			{
				printf("%c\t",SmallCh);
			}
			else
			{ 
				printf("%c\t",CapCh);
			}
			CapCh++;
			SmallCh++;
		}

		
		/*
		ch = 'A';
		for(j= 0; j<iCol; j++)
		{
			printf("%c\t",ch);
			ch++;
		}
		printf("\n");
		ch = 'a';
		for(j = 0; j<iCol; j++)
		{
			printf("%c\t",ch);
			ch++;
		}

		
		*/
		
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