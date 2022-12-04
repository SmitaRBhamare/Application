// Problem statement : Write the program which accepts string from user and Display digits from that string 
#include<stdio.h>
//#include<ctype.h>    also use to convert lower to upper and upper to lower

void  DisplayDigit(char *str)
{
    while(*str != '\0')
    {
        if(*str >= '0' && *str<= '9')
        {
            printf("%c",*str);
        }
        str++;
    }
}
int main()
{
    char arr[20];

    printf("Enter the string : ");
    scanf("%[^'\n']s", arr);

    DisplayDigit(arr);

    return 0;
}