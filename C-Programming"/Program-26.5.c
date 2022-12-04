// Problem statement : Write the program which accepts string from user and count the number of white spaces
#include<stdio.h>

int CountWhite(char *str)
{
    int iCnt = 0;
    while(*str != '\0')
    {
        if(*str == ' ')
        {
            iCnt++;
        }
        str++;
    }

    return iCnt;
}
int main()
{
    char arr[20];
    int iRet = 0;
    
    printf("Enter the string : ");
    scanf("%[^'\n']s", arr);

   iRet =  CountWhite(arr);

   printf("%d",iRet);

    return 0;
}