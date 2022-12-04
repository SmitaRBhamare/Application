//Problem Statement : Accept division of student from user and depends on the division display exam timing.There are 4 division in school as A,B,CD exam 
//of division A at 7am, B  at 8:30am, C at 9:20am, D at 10:30am. 
//(Application should be insensitive)

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

void DisplaySchedule(char ch)
{
	if(ch == 'a'|| ch == 'A')
	{
		 printf("Your exam at 7 AM");
		
	}
	else if(ch == 'b'|| ch == 'B')
	{
		 printf("Your exam at 8:30 AM");
	}
	else if(ch == 'c'|| ch == 'C')
	{
		 printf("Your exam at 9:20 AM");
	}
	else if(ch == 'd'|| ch == 'D')
	{
		 printf("Your exam at 10:30 AM");
	}	
}

int main()
{
	char cValue ='\0';

	printf("Enter the character :");
	scanf("%c",  &cValue);

	DisplaySchedule(cValue);

	return 0;
}