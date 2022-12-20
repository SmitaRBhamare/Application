//Problem statements : Write a program which accpets number from user and return difference between summation of all its factors and non factors

import java.util.*;

class Factors
{
    public int DiffFact(int iValue)
    {
        int iSum1 = 0, iSum2 = 0;
        int iDiff = 0;
        for(int iCnt = 1; iCnt < iValue; iCnt++)
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

class Program20
{
    public static void main(String arr[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number");
        int iNo = sobj.nextInt();

        Factors fobj = new Factors();

        int iRet = fobj.DiffFact(iNo);

        System.out.println("Difference between all factors and non factors is : "+iRet);
    }
}