//Problem statements : Write a program which returns difference between even factorial and odd factorial of given number.

import java.util.*;

class Pattern
{
    public int EvenFactorial(int iNo)
    {
         int iMult1 = 1;
         int iMult2 = 1;
         int iDiff = 0;
        if(iNo < 0)
        {
            iNo = -iNo;
        }
        
        for(int iCnt = iNo; iCnt > 0 ; iCnt--)
        {
            if(iCnt % 2 == 0)
            {
                iMult1 = iCnt * iMult1;
            }
            if(iCnt % 2 != 0)
            {
                iMult2 = iCnt * iMult2;
            }
        }
        iDiff = iMult1 - iMult2;

        return iDiff;
    }
}

class Program45
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number ");
        int iValue = sobj.nextInt();

        Pattern aobj = new Pattern();

        int iRet = aobj.EvenFactorial(iValue);

        System.out.println("Difference between even and odd factorial is : "+iRet);
    }
}


