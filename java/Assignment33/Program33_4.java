//Problem statement  : Write a java program which accpet number from user and return multiplication of all digits.

import java.util.*;
class Digit
{
      int iDigit = 0;
      int iMult = 1;
      public int Multiply(int iNo)
      {
            while(iNo != 0)
            {
                iDigit = iNo % 10;
                if(iDigit == 0)
                {
                  iDigit = 1;
                }
                iMult = iMult * iDigit;
                iNo = iNo /10;
            }
            return iMult;  
      }

}

class Program33_4
{
      public static void main(String Arg[])
      {
            Scanner sobj = new Scanner(System.in);

            System.out.println("Enter the number");
            int iValue = sobj.nextInt();

            Digit aobj = new Digit();

            int iRet =aobj.Multiply(iValue);

            System.out.println("Multiplication of digits of number is  :" +iRet);
            

      }
}