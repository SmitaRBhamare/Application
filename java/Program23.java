//Problem statements : Write a program which accpets number from user and display its non factors

import java.util.*;

class Arithematic
{
    public void Factors(int iValue)
    {
        for(int iCnt = 1; iCnt <iValue; iCnt++)
        {
            if(iValue % iCnt != 0)
            {
                System.out.print(iCnt+ "\t");
            }  
        }
    }
}
class Program23
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the number");
        int iNo = sobj.nextInt();

        Arithematic aobj = new Arithematic();

        aobj.Factors(iNo);
    }
}