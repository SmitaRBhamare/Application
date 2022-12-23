//Problem statements : Write a program which accept range from user and return addition of all numbers in between that range.
//Rnage should comtain positive number.

import java.util.*;

class Arithematic
{
    public int RangeSum(int iStart, int iEnd)
    {
        int iSum = 0;
        if(iStart < 0 || iEnd < 0)
        {
            System.out.println("Invalid range");
            return 0;
        }
        
        for(int iCnt = iStart; iCnt <= iEnd; iCnt++)
        {   
            if(iCnt % 2 == 0)
            {
                iSum = iCnt + iSum;
            }
        }
        return iSum; 
              
    }
}

class Program54
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter first number ");
        int iValue1 = sobj.nextInt();

        System.out.println("Enter second number ");
        int iValue2 = sobj.nextInt();

        Arithematic aobj = new Arithematic();

        int iRet = aobj.RangeSum(iValue1, iValue2);

        System.out.println("Addtion of numbers of that range is : "+iRet);

    }
}


