//Problem statements : Accept one number and print that number of *.

import java.util.*;

class Pattern
{
    public void Display(int iValue)
    {
        int iCnt = 0;

        for(iCnt = 0; iCnt< iValue; iCnt++)
        {
            System.out.print(" * ");
        }
    }
}

class Program5
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number");
        int iNo = sobj.nextInt();

        Pattern pobj = new Pattern();

        pobj.Display(iNo);
    }   
}


