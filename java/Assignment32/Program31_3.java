//Problem statement  : Write a java program which accept string from user and return difference between frequency of small characters and frequency of capital characters.

import java.util.*;

class StringDemo
{
      public int CountDiff(String ch)
      {
           int iCount1 = 0 ,iCount2 = 0;
           int iDiff = 0;
           for(int iCnt = 0; iCnt < ch.length() ; iCnt++)
           {
                  if(ch.charAt(iCnt) >='a' && ch.charAt(iCnt)<= 'z')
                  {
                      iCount1++;  
                  }
                  else
                  {
                      iCount2++;  
                  }
           }
            iDiff = iCount1 - iCount2 ;
            return iDiff;
      }

}

class Program31_3
{
      public static void main(String arr[])
      {
            Scanner sobj = new Scanner(System.in);

            System.out.println("Please enter the string : ");
            String str = sobj.nextLine();

            StringDemo dobj = new StringDemo();
            
            int iRet = dobj.CountDiff(str);

            System.out.println("Difference between smaller and capital letter is : "+iRet);
          
      }
}