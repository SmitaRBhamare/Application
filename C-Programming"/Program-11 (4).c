// Problem statement : Write a program which accpets range from user and return Addition of alleven  numbers in between that range.
// (range should contain positive number)

#include<stdio.h>

void  RangeSumEven(int iStart, int iEnd)
{ 
	int iCnt = 0, iSum = 0;
     if(iStart > 0 && iEnd > 0)
	{
		for(iCnt = iStart; iCnt <=iEnd; iCnt++)
	    {
			if(iCnt % 2 ==0)
			{
				iSum = (iSum + iCnt);
			}		
	    }
		printf("%d", iSum); 
	}
	else if(iStart < 0 || iEnd < 0)
	{
		printf("Invalid number");	
	}
}		

int main()
{
	int iValue1 = 0 , iValue2 =0;

	printf("Enter starting point:\n");
	scanf("%d",&iValue1);

	printf("Enter ending point:\n");
	scanf("%d",&iValue2);

	RangeSumEven(iValue1, iValue2);

	return 0;
}