//Problem statements : Write a program which accept number from user and display its table.

import java.util.*;

class Arithematic
{
    public void Display(int iNo)
    {
        for(int iCnt = 1; iCnt <= 10; iCnt++)
        {
            System.out.print(iNo * iCnt+"\t");
        }
    }
}

class Program39
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number");
        int iValue = sobj.nextInt();

        Arithematic aobj = new Arithematic();

        aobj.Display(iValue);
    }
}


