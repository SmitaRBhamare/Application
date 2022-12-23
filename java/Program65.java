//Problem statements : Write a program which accept range from user and return difference between summation of even digits and summation of odd digits.

import java.util.*;

class Arithematic
{
    public int iNum;
    public Arithematic(int iNo)
    {
        iNum = iNo;
    }

    public int MultDigits()
    {
        int iDigit = 0;
        int iDiff = 0, iSum1 = 0, iSum2 = 0;
        if( iNum < 0)
        {
            iNum = - iNum;
        }

        while(iNum != 0 )
        {
            iDigit = iNum % 10;
            if(iDigit % 2 == 0)
            {
                iSum1 = iSum1 + iDigit;
            }
            else
            {
                iSum2 = iSum2 + iDigit;
            }
            iNum = iNum /10;  
        }

        iDiff = iSum1 - iSum2;

        return iDiff;
    }
}


class Program65
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter first number ");
        int iValue = sobj.nextInt();

        Arithematic aobj = new Arithematic(iValue);

        int iRet = aobj.MultDigits();

        System.out.println("Difference between even and odd  digit is  :" +iRet);
    }
}


