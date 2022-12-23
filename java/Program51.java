//Problem statements : Write a program which accept range from user and display all numbers in between that range.

import java.util.*;

class Arithematic
{
    public void RangeDisplay(int iStart, int iEnd)
    {
        if(iEnd < iStart)
        {
            System.out.println("Invalid range");
        }
        for(int iCnt = iStart; iCnt <= iEnd; iCnt++)
        {
            System.out.print(iCnt+"\t");
        }     
    }
}

class Program51
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter first number ");
        int iValue1 = sobj.nextInt();

        System.out.println("Enter second number ");
        int iValue2 = sobj.nextInt();

        Arithematic aobj = new Arithematic();

        aobj.RangeDisplay(iValue1, iValue2);

    }
}


