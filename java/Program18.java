//Problem statements : Write a program which accpets number from user and display all its non factors.

import java.util.*;

class Factors
{
    public void NonFact(int iValue)
    {
        for(int iCnt = 1; iCnt < iValue; iCnt++)
        {
            if(iValue % iCnt != 0)
            {
                System.out.print(iCnt+"\t");
            } 
        }
    }
}

class Program18
{
    public static void main(String arr[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number");
        int iNo = sobj.nextInt();

        Factors fobj = new Factors();

        fobj.NonFact(iNo);
    }
}