//Problem statements : Write a program which accpets number from user and display its multiplication of factors.

import java.util.*;

class Arithematic 
{
    public int FactMult(int iValue)
    {
        int iMult = 1;
        for(int iCnt = 1; iCnt < iValue; iCnt++)
        {
            if(iValue % iCnt == 0)
            {
                iMult = iMult * iCnt;
            }
        }
        return iMult;
    }
}

class Program21
{
    public static void main(String arr[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number");
        int iNo = sobj.nextInt();

        Arithematic fobj = new Arithematic();

        int iRet = fobj.FactMult(iNo);

        System.out.println("Multiplication of factors is : "+iRet);
    }
}