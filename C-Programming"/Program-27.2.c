// Problem statement : Write the program which accepts string from user and accept one character and return frequency of that character.
#include<stdio.h>

int ChkChar(char *str, char ch)
{
    int iCnt = 0;
    while(*str != '\0')
    {
        if(*str == ch)
        {
            iCnt++;
        }
        str++; 
    }
    
    return iCnt;
}
int main()
{
    char Arr[20];
    int iRet = 0;
    char cValue = '\0';

    printf("Please enter string\n");
    scanf("%[^'\n']s",Arr);

    printf("Please enter the character :\n");
    scanf(" %c", &cValue);

    iRet = ChkChar(Arr, cValue);

    printf("%d",iRet);

    return 0;
}