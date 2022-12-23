//Problem statements : Write a program which accept range from user and display all  numbers in between that range in reverse order.

import java.util.*;

class Arithematic
{
    public void RangeDisplayRev(int iStart, int iEnd)
    {
        if(iEnd< iStart)
        {
            System.out.println("Invalid range");
        }
        for(int iCnt = iEnd; iCnt >= iStart; iCnt--)
        {
            System.out.print(iCnt+"\t");
        }
          
    }
}

class Program55
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter first number ");
        int iValue1 = sobj.nextInt();

        System.out.println("Enter second number ");
        int iValue2 = sobj.nextInt();

        Arithematic aobj = new Arithematic();

        aobj.RangeDisplayRev(iValue1, iValue2);

    }
}


