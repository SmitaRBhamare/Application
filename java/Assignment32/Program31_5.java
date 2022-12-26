//Problem statement  : Write a java program which accept string from user and check wheather it contains vowels or not.

import java.util.*;

class StringDemo
{
      public void Reverse(String ch)
      {   
           for(int iCnt = ch.length()-1; iCnt >=0; iCnt--)
           {
                  System.out.print(ch.charAt(iCnt));     
           }          
      }
}

class Program31_5
{
      public static void main(String arr[])
      {
            Scanner sobj = new Scanner(System.in);

            System.out.println("Please enter the string : ");
            String str = sobj.nextLine();

            StringDemo dobj = new StringDemo();
            
            dobj.Reverse(str);

      }
}