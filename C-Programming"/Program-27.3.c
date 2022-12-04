// Problem statement : Write the program which accepts string from user and accept one character and return Index of first occurrence of that character.
#include<stdio.h>

int FirstChar(char *str, char ch)
{
    char Flag = 0;
    while(*str != '\0')
    {
        if(*str == ch)
        {
            break;
        }
        str++;
        Flag++; 
    }
    return Flag;
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

    iRet = FirstChar(Arr, cValue);

    printf("%d",iRet);

    return 0;
}