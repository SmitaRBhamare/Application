//Problem statements : Write a program which accpets number from user and return difference between summation of all its factors and non factors.

import java.util.*;

class Arithematic
{
    public int FactSum(int iValue)
    {
        int iSum1 = 0, iSum2 = 0;
        int iDiff = 0;
        for(int iCnt = 1; iCnt <iValue; iCnt++)
        {
            if(iValue % iCnt == 0)
            {
                iSum1 = iSum1 + iCnt;
            }
            else
            {
                iSum2 = iSum2 + iCnt;
            }  
        }
        return iDiff = iSum1 - iSum2;
    }
}
class Program25
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the number");
        int iNo = sobj.nextInt();

        Arithematic aobj = new Arithematic();

        int iRet = aobj.FactSum(iNo);

        System.out.println("difference  of all factors and non factors are : " +iRet);
    }
}