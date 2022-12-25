//Problem statements : Write a program which accept N numbers from user and display below pattern.
/*
5

5   #   4   #   3   #   2   #   1   #
*/
import java.util.*;

class Pattern
{
    public void Display(int iValue)
    {
        for(int iCnt = iValue; iCnt > 0; iCnt--)
        {
            System.out.print(iCnt+" # ");  
        }
    }
}

class Program87
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