//Problem statement  : Write a java program which accpet N number from user and accept range , Display all elements from that range.

import java.util.*;

class Number
{ 
    protected int Arr[];

    public Number(int iSize)
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

    public void Display(int iNum1, int iNum2)
    {
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] > iNum1 && Arr[iCnt]< iNum2)
            {
                System.out.println(Arr[iCnt]);
            }
           
        }
    }
}

class Program34_4
{
      public static void main(String Arr[])
      {
            Scanner sobj = new Scanner(System.in);

             System.out.print("Enter the size: ");
            int iNo = sobj.nextInt();
           
            System.out.print("Enter the starting number: ");
            int iNo1 = sobj.nextInt();

            System.out.print("Enter the Ending number: ");
            int iNo2 = sobj.nextInt();

            Number nobj = new Number(iNo);

            nobj.Accept();
            nobj.Display(iNo1, iNo2);        
      }
}