//Problem statements : Write a program which accept range from user and return the multiplication of all digits.

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
        int iMult = 1;
        if( iNum < 0)
        {
            iNum = - iNum;
        }

        while(iNum != 0 )
        {
            iDigit = iNum % 10;
            if(iDigit == 0)
            {
                iDigit = 1;
            }
            iMult = iMult * iDigit; 
            iNum = iNum /10;  
        }
        return iMult;
    }
}


class Program64
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter first number ");
        int iValue = sobj.nextInt();

        Arithematic aobj = new Arithematic(iValue);

        int iRet = aobj.MultDigits();

        System.out.println("Multiplication of digit is  :" +iRet);
    }
}


