//Problem statements : Write a program which accpets number and print its number line.

/* 
  4

 -4  -3  -2  -1  0  1  2  3  4
*/

import java.util.*;

class Pattern
{
    public void Display(int iValue)
    {
        for(int iCnt = (-iValue) ; iCnt <= iValue; iCnt++)
        {
            System.out.print(iCnt+"\t");
        }  
    }
}

class Program33
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

