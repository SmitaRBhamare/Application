//Problem statement  : Write a java program which accept string from user and count number of small characters.

import java.util.*;

class StringDemo
{
      public int CountSmall(String ch)
      {
           int iCount = 0;
           for(int iCnt = 0; iCnt < ch.length() ; iCnt++)
           {
                  if(ch.charAt(iCnt) >='a' && ch.charAt(iCnt)<= 'z')
                  {
                      iCount++;  
                  }
           }

            return iCount;
      }

}

class Program31_2
{
      public static void main(String arr[])
      {
            Scanner sobj = new Scanner(System.in);

            System.out.println("Please enter the string : ");
            String str = sobj.nextLine();

            StringDemo dobj = new StringDemo();
            
            int iRet = dobj.CountSmall(str);

            System.out.println(iRet);
          
      }
}