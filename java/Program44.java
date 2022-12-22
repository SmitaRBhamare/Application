//Problem statements : Write a program to find odd factorial of given number.

import java.util.*;

class Pattern
{
    public int EvenFactorial(int iNo)
    {
        if(iNo < 0)
        {
            iNo = -iNo;
        }
        
        int iMult = 1;
        for(int iCnt = iNo; iCnt > 0 ; iCnt--)
        {
            if(iCnt % 2 != 0)
            {
                iMult = iCnt * iMult;
            }
        }
        return iMult;
    }
}

class Program44
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number ");
        int iValue = sobj.nextInt();

        Pattern aobj = new Pattern();

        int iRet = aobj.EvenFactorial(iValue);

        System.out.println(iRet);
    }
}


