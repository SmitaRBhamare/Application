//Problem statements : Write a program which accpets  number and print all odd numbers upto N.

/* 
  18

 1  3  5  7  9  11  13  15  17
*/

import java.util.*;

class Pattern
{
    public void OddDisplay(int iValue)
    {
        for(int iCnt = 1 ; iCnt <= iValue ; iCnt+=2 )
        {
            if(iCnt % 2 != 0 )
            {
                System.out.print(iCnt+"\t");
            }  
        } 
    }
}

class Program34
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

