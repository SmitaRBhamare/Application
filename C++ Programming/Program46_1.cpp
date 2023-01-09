#include<iostream>
using namespace std;

class Array
{
  protected :
      int *Arr;
      int size;

  public :
      Array(int value = 10)
      {
          cout<<"Inside constructor\n";

          this->size = value;
          this->Arr= new int[size];
      }    

      Array(Array &ref)
      {
          cout<<"Inside copy constructor\n";

          this->size = ref.size;
          this->Arr = new int[this->size];

          for(int i = 0; i< size; i++)
          {
            this->Arr[i] = ref.Arr[i];
          }
      }

      ~Array()
      {
        cout<<"Inside Destructor\n";

        delete []Arr;
      }

      inline void Accept();
      inline void Display();
};


void Array :: Accept()
{
    cout<<"Please enter the values\n";

    for(int i = 0; i<this->size; i++)
    {
      cin>>Arr[i];
    }
}

void Array :: Display()
{
    cout<<"Elements are : \n";
    for(int i = 0; i< this->size; i++)
    {
      cout<<Arr[i]<<" ";
    }
    cout<<"\n";
}
class ArrSearch : public Array
{
  public :
      ArrSearch() : Array()
      {}      


      int Frequency(int value);
      int SearchFirst(int value);
      int SearchLast(int value);
      int EvenCount();
      int OddCount();
      int SumAll();

};
 
int ArrSearch :: SearchFirst(int value)
{
  int i = 0;

  for(i = 0; i< size; i++)
  {
    if(Arr[i] == value)
    {
      break;
    }
  }

    if(i == size)
    {
      return -1;
    }
    else
    {
      return i + 1;
    }
}

int ArrSearch :: Frequency(int value)
{
  int iCnt = 0;
  for(int i = 0; i< size; i++)
  {
    if(Arr[i] == value)
    {
      iCnt++;
    }
  }
  return iCnt;
}


int ArrSearch :: SearchLast(int value)
{
  int i = 0;
  for(i = size - 1; i>= 0; i--)
  {
    if(Arr[i] == value)
    {
      break;
    }
  }
  return i;

}


int ArrSearch :: EvenCount()
{
  int iCnt = 0;
  for(int i = 0; i< size; i++)
  {
    if(Arr[i] % 2 == 0)
    {
      iCnt++;
    }
  }
  return iCnt;

}

int ArrSearch :: OddCount()
{
  int iCnt = 0;
  for(int i = 0; i< size; i++)
  {
    if(Arr[i] % 2 != 0)
    {
      iCnt++;
    }
  }
  return iCnt;

}

int ArrSearch :: SumAll()
{
  int Sum = 0;
  for(int i = 0; i< size; i++)
  {
     Sum = Sum + Arr[i];
  }
  return Sum;

}


int main()
{
    cout<< "Inside main\n";
    ArrSearch sobj1;
    sobj1.Accept();
    sobj1.Display();

    int iRet = sobj1.SearchFirst(11);
    cout<<"First occurance is : "<<iRet<<"\n";

    iRet = sobj1.SearchLast(11);
    cout<<"Last occurance is : "<<iRet<<"\n";

    iRet = sobj1.Frequency(11);
    cout<<"Frequency is : "<<iRet<<"\n";

    iRet = sobj1.EvenCount();
    cout<<"Even numbers are : "<<iRet<<"\n";

    iRet = sobj1.OddCount();
    cout<<"Odd numbers are :"<<iRet<<"\n";

    iRet = sobj1.SumAll();
    cout<<"Addition of all elements is :"<<iRet<<"\n";
    

    return 0;
}

