//Problem statement  : Write a java program which accept string from user and count number of capital characters.

import java.util.*;

class StringDemo
{
      public int CountCap(String ch)
      {
           char Arr[]= ch.toCharArray();

           int iCount = 0;
           for(int iCnt = 0; iCnt < Arr.length ; iCnt++)
           {
                  if(Arr[iCnt] >='A' && Arr[iCnt] <= 'Z')
                  {
                      iCount++;  
                  }
           }
            return iCount;
      }

}

class Program31_1
{
      public static void main(String arr[])
      {
            Scanner sobj = new Scanner(System.in);

            System.out.println("Please enter the string : ");
            String str = sobj.nextLine();

            StringDemo dobj = new StringDemo();
            
            int iRet = dobj.CountCap(str);

            System.out.println(iRet);
          
      }
}