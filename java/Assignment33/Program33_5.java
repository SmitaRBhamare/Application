//Problem statement  : Write a java program which accpet number from user and return difference betweem summation of even digits and  summation of odd digits.

import java.util.*;
class Digit
{
      int iDigit = 0;
      int iSum1 = 0, iSum2 = 0;
      int iDiff = 0;

      public int CountDiff(int iNo)
      {
            while(iNo != 0)
            {
                iDigit = iNo % 10;
                if(iDigit % 2 == 0)
                {
                  iSum1 = iSum1 + iDigit;
                }
                else
                {
                  iSum2 = iSum2 + iDigit;
                }
                iNo = iNo /10;
            }
            iDiff = iSum1 - iSum2;
            return iDiff;  
      }

}

class Program33_5
{
      public static void main(String Arg[])
      {
            Scanner sobj = new Scanner(System.in);

            System.out.println("Enter the number");
            int iValue = sobj.nextInt();

            Digit aobj = new Digit();

            int iRet =aobj.CountDiff(iValue);

            System.out.println("Difference between even digits and odd digits is :" +iRet);
            

      }
}