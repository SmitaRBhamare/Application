//Problem statements : Write a program which accpets  number and print first 5 multiples of that number.

/* 
 4

 4   8   12   16   20
*/

import java.util.*;

class Pattern
{
    public void OddDisplay(int iValue)
    {
        for(int iCnt = 1 ; iCnt <= 5; iCnt++ )
        {
            System.out.print((iCnt * iValue )+"\t"); 
        } 
    }
}

class Program35
{
    public static void main(String arr[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the number ");
        int iNo = sobj.nextInt();

        Pattern aobj = new Pattern();

        aobj.OddDisplay(iNo);
    }
}

