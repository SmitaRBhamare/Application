//Write the generic program to find largest number from three numbers.

#include<iostream>
using namespace std;

template <class T>

T Max(T no1,T no2, T no3)
{
    T Maximum = no1;
    if(Maximum < no2)
    {
       Maximum = no2;
    }
    
    if(Maximum < no3)
    {
      Maximum = no3;
    }

  return Maximum;
}

int main()
{

  int iRet = Max(110,15 ,50);
  printf("Maximum number is : %d\n", iRet);
  


 float fRet = Max(51.67, 15.12 , 5.11);
 printf("Maximum number is : %f\n", fRet);

 char  Ret = Max('z','s','d');
 printf("Maximum number is : %c\n", Ret);
  


  return 0;
}