//Problem statements : Write a program which accept range from user and display its digits in revers.

import java.util.*;

class Arithematic
{
    public int iNum;
    public Arithematic(int iNo)
    {
        iNum = iNo;
    }

    public void DisplayDigits()
    {
        int iDigit = 0;

        if( iNum < 0)
        {
            iNum = - iNum;
        }

        while(iNum != 0 )
        {
            iDigit = iNum % 10;
            System.out.println(iDigit);    
            iNum = iNum /10;  
        }
    }
}


class Program56
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter first number ");
        int iValue = sobj.nextInt();

        Arithematic aobj = new Arithematic(iValue);

        aobj.DisplayDigits();

    }
}


