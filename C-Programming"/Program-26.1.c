// Problem statement : Write the program which accepts string from user and convert it into lower case.
#include<stdio.h>
//#include<ctype.h>    also use to convert lower to upper and upper to lower

void strlwrx(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 'A' && *str <='Z')
        {
            *str = *str + 32;
           // *str = tolower(*str);
        }
        else
        {
            *str = *str;
        }
        str++;
    }
}

int main()
{
    char Arr[20];

    printf("Enter the string : ");
    scanf("%[^'\n']s",Arr);

    strlwrx(Arr);

    printf("Modified string is : %s",Arr);

    return 0;
}