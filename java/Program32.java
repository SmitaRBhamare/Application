//Problem statements : Write a program which accpets number from user and print numbers till that numbers

/* 
  8

  1  2  3  4  5  6  7  8
*/

import java.util.*;

class Pattern
{
    public void Display(int iValue)
    {
        for(int iCnt = 0; iCnt <= iValue; iCnt++)
        {
            System.out.print(iCnt+"\t");
        }  
    }
}

class Program32
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

