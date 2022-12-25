//Problem statements : Write a program which accept N numbers from user and display below pattern.
/*
 8

 2   4   6   8   10    12   14   16
*/
import java.util.*;

class Pattern
{
    public void Display(int iValue)
    {
        int iNum = 2;
        for(int iCnt = 1 ; iCnt <= iValue; iCnt++)
        {
            System.out.print(iNum+"\t");
            iNum+=2;  
        }
    }
}

class Program90
{
    public static void main(String arr[])
    {
        System.out.println("Enter the number");
        Scanner sobj = new Scanner(System.in);

        int iNo = sobj.nextInt();


        Pattern pobj = new Pattern();

        pobj.Display(iNo);
    }
}