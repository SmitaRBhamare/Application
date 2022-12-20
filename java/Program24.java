//Problem statements : Write a program which accpets number from user and return summation pf all its non factors.

import java.util.*;

class Arithematic
{
    public int FactSum(int iValue)
    {
        int iSum = 0;
        for(int iCnt = 1; iCnt <iValue; iCnt++)
        {
            if(iValue % iCnt != 0)
            {
                iSum = iSum + iCnt;
            }  
        }
        return iSum;
    }
}
class Program24
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the number");
        int iNo = sobj.nextInt();

        Arithematic aobj = new Arithematic();

        int iRet = aobj.FactSum(iNo);

        System.out.println("Summation of all non factors is : " +iRet);
    }
}