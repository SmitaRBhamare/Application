//Write the generic program which accept N numbers from user and return Largest value.

#include<iostream>
using namespace std;

template <class T>

T Max(T *Arr, int iSize)
{
  T Max;
  int i = 0;
  Max =  Arr[0];

  for(i  = 0; i< iSize; i++)
  {
    if(Max < Arr[i])
    {
      Max = Arr[i];
    }
  }
  return Max;
}

int main()
{
    int arr[] = {10,20,30,40,50};
    
    float brr[] = {10.0,3.7,9.8,8.7};

    int iMax = Max(arr, 5);
    printf("%d\n", iMax);

    float fMax = Max(brr, 4);
    printf("%f\n", fMax);

    return 0;
}