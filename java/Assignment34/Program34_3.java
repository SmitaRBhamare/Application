//Problem statement  : Write a java program which accpet N number from user and accept one another number as NO , return index Of last occurrence of that NO.

import java.util.*;

class NumberX
{ 
    protected int Arr[];

    public NumberX(int iSize)
    {
        Arr = new int[iSize];
    }

    protected void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter "+Arr.length + " elements ");
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            System.out.print("Enter the element no "+ (iCnt)+" :");
            Arr[iCnt] = sobj.nextInt();
        }
    }

    protected void Display()
    {
      System.out.println("elements in array are : ");
      for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            System.out.println(Arr[iCnt]+"\t");    
        }
    }

    public int LastOcc(int iNum)
    {
        int iCnt = 0;
        for(iCnt = Arr.length - 1; iCnt >= 0; iCnt--)
        {
            if(Arr[iCnt] == iNum)
            {
                break;
            }   
        }

        if(iCnt == Arr.length)
        {
            {
                return -1;
            }
        }

        return iCnt;
    }
}

class Program34_3
{
      public static void main(String Arr[])
      {
            Scanner sobj = new Scanner(System.in);
            System.out.println("Enter the size of an array");
            int iNo1 = sobj.nextInt();

            System.out.print("Enter the number you want to search in array : ");
            int iNo2 = sobj.nextInt();

            NumberX nobj = new NumberX(iNo1);

            nobj.Accept();
            nobj.Display();
            int iRet = nobj.LastOcc(iNo2);

            if(iRet == -1)
            {
                System.out.println("Number is not present in array");
            }
            else
            {
                System.out.println("Last occrance of given number is :"+iRet );
            }
            
      }
}