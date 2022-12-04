// Problem statement : Write the program which accepts string from user and accept one character . check whether that character is present in string or not.
#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkChar(char *str, char ch)
{
    BOOL bFlag = FALSE;
    while(*str != '\0')
    {
       if(*str == ch)
       {
          bFlag = TRUE;
          break;
       }
       str++;
    }
    
    return bFlag;
}
int main()
{
    char Arr[20];
    BOOL bRet = FALSE;
    char cValue = '\0';

    printf("Please enter string\n");
    scanf("%[^'\n']s",Arr);

    printf("Please enter the character :\n");
    scanf(" %c", &cValue);

    bRet = ChkChar(Arr, cValue);

    if(bRet == TRUE)
    {
        printf("Character is present in the string\n");
    }
    else
    {
        printf("Character is not present in the string\n");
    }

    return 0;
}