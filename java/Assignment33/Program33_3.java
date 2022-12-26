//Problem statement  : Write a java program which accpet number from user and return the count of digits in between 3 and 7.

import java.util.*;
class Digit
{
      int iDigit = 0;
      int Count = 0;
      public int CountRange(int iNo)
      {
            while(iNo != 0)
            {
                iDigit = iNo % 10;
                if(iDigit > 3 && iDigit < 7)
                {
                  Count++;
                }
                iNo = iNo /10;
            }
            return Count;  
      }

}

class Program33_3
{
      public static void main(String Arg[])
      {
            Scanner sobj = new Scanner(System.in);

            System.out.println("Enter the number");
            int iValue = sobj.nextInt();

            Digit aobj = new Digit();

            int iRet =aobj.CountRange(iValue);

            System.out.println("Digits between 3 and 7 are  :" +iRet);
            

      }
}