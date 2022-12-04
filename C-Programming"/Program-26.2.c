// Problem statement : Write the program which accepts string from user and convert it into upper case.
#include<stdio.h>
//#include<ctype.h>    also use to convert lower to upper and upper to lower

void struprx(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 'a' && *str <='z')
        {
            *str = *str - 32;
           // *str = toupper(*str);
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

    struprx(Arr);

    printf("Modified string is : %s",Arr);

    return 0;
}