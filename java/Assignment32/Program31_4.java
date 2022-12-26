//Problem statement  : Write a java program which accept string from user and check wheather it contains vowels or not.

import java.util.*;

class StringDemo
{
      public boolean ChkVowel(String ch)
      {
           boolean Flag = false;
           for(int iCnt = 0; iCnt < ch.length() ; iCnt++)
           {
                  if(ch.charAt(iCnt) =='a' || ch.charAt(iCnt)== 'e'|| ch.charAt(iCnt)== 'i'|| ch.charAt(iCnt)== 'o'|| ch.charAt(iCnt)== 'u'|| ch.charAt(iCnt)== 'A'|| ch.charAt(iCnt)== 'E'|| ch.charAt(iCnt)== 'I'|| ch.charAt(iCnt)== 'O'|| ch.charAt(iCnt)== 'U')
                  {
                       Flag = true;
                       break;
                  }
           }
           return Flag;     
      }

}

class Program31_4
{
      public static void main(String arr[])
      {
            Scanner sobj = new Scanner(System.in);

            System.out.println("Please enter the string : ");
            String str = sobj.nextLine();

            StringDemo dobj = new StringDemo();
            
            boolean bRet = dobj.ChkVowel(str);

            if(bRet == true)
            {
                  System.out.println("Vowels are present");

            }
            else
            {
                  System.out.println("Vowels are not  present");
            }

           
          
      }
}