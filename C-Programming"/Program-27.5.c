// Problem statement : Write the program which accepts string from user and accept one character and reverse the string.
#include<stdio.h>

void FirstChar(char *str)
{
    char *Start = str;
    char *End = str;
    char temp = '\0'; 

    while(*End != '\0')
    {
        End++;
    }
    End--;

    while(Start < End)
    {
       temp = *Start;
       *Start = *End;
       *End = temp;

        Start++;
        End--;
    }
}

int main()
{
    char Arr[20];
    int iRet = 0;
    char cValue = '\0';

    printf("Please enter string\n");
    scanf("%[^'\n']s",Arr);

    FirstChar(Arr);

    printf("Reverse string is : %s\n",Arr);


    return 0;
}