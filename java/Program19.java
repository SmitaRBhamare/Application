//Problem statements : Write a program which accpets number from user and return summation of all its non factors.

import java.util.*;

class Factors
{
    public int SumNonFact(int iValue)
    {
        int iSum = 0;
        for(int iCnt = 1; iCnt < iValue; iCnt++)
        {
            if(iValue % iCnt != 0)
            {
                iSum = iSum + iCnt;
            } 
        }
        return iSum;
    }
}

class Program19
{
    public static void main(String arr[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number");
        int iNo = sobj.nextInt();

        Factors fobj = new Factors();

        int iRet = fobj.SumNonFact(iNo);

        System.out.println("Summation of all non factors is : "+iRet);
    }
}