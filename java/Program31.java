//Problem statements : Write a program which accpets number and print that number of $ *.

/* 
 $  *  $  * $  *  $  *  $  *
*/

import java.util.*;

class Pattern
{
    public void Display(int iValue)
    {
        if(iValue  < 0)
        {
            iValue = (-iValue);

        }

        for(int iCnt = 0; iCnt < iValue; iCnt++)
        {
            System.out.print(" $  *");
        }
       
        
    }
}

class Program31
{
    public static void main(String arr[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the number ");
        int iNo = sobj.nextInt();

        Pattern aobj = new Pattern();

        aobj.Display(iNo);
 
    }
}

