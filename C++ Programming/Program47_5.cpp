//Write the generic program which accept N numbers from user and return smallest value.

#include<iostream>
using namespace std;

template <class T>

T Min(T *Arr, int iSize)
{
  T Min;
  int i = 0;
  Min =  Arr[0];

  for(i  = 0; i< iSize; i++)
  {
    if(Min > Arr[i])
    {
      Min = Arr[i];
    }
  }
  return Min;
}

int main()
{
    int arr[] = {10,20,30,40,50};
    
    float brr[] = {10.0,3.7,9.8,8.7};

    int iMin= Min(arr, 5);
    printf("%d\n", iMin);

    float fMin = Min(brr, 4);
    printf("%f\n", fMin);

    return 0;
}