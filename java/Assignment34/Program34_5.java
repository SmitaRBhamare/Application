//Problem statement  : Write a java program which accpet N number from user and return product of all odd elements

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

    public int Product()
    {
        int iMult = 1;
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] % 2 != 0)
            {
                iMult = iMult * Arr[iCnt];
            } 
        }
        return iMult;
    }
}

class Program34_5
{
      public static void main(String Arr[])
      {
            Scanner sobj = new Scanner(System.in);

             System.out.print("Enter the size: ");
            int iNo = sobj.nextInt();
           
           
            Number nobj = new Number(iNo);

            nobj.Accept();
            int iRet =nobj.Product();

            System.out.println("Product of all odd numbers is :" +iRet);       
      }
}