//Problem statement  : Write a java program which accpet number from user and return the count of odd digits

import java.util.*;
class Digit
{
      int iDigit = 0;
      int Count = 0;
      public int CountOdd(int iNo)
      {
            while(iNo != 0)
            {
                iDigit = iNo % 10;
                if(iDigit % 2 != 0)
                {
                  
                  Count++;
                }
                iNo = iNo /10;
            }
            return Count;  
      }

}

class Program33_2
{
      public static void main(String Arg[])
      {
            Scanner sobj = new Scanner(System.in);

            System.out.println("Enter the number");
            int iValue = sobj.nextInt();

            Digit aobj = new Digit();

            int iRet =aobj.CountOdd(iValue);

            System.out.println("odd digits in number are :" +iRet);
            

      }
}