// Problem statement : Accept single number from user and print it into word
#include<stdio.h>
#include<string.h>

void Display(char *iNo)
{

	int iValue =strlen(iNo);

	if(iValue == 0)
	{
		printf(stderr,"empty string\n");
		return ;
	}

	char *single_digit[] ={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
	
	if(iValue ==1)
	{
		printf("%s\n",single_digit[*iNo -'0']);
		//return;
	}
			
		
	

}

int main()
{
	int iValue = 0;

	printf("Enter single digit :\n");
	scanf("%d", &iValue);

	Display(iValue);

	return 0;
}