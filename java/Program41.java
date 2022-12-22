//Problem statements : Write a program which accept number from user and display below pattern.

import java.util.*;

class Pattern
{
    public void Display(int iNo)
    {
        if(iNo < 0)
        {
            iNo =  (-iNo);
        }

        for(int iCnt = 1 ; iCnt <= iNo; iCnt++)
        {
            System.out.print("*\t");
        }
        for(int iCnt = 1 ; iCnt <= iNo; iCnt++)
        {
            
            System.out.print("#\t");
        }
    }
}

class Program41
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter single  number");
        int iValue = sobj.nextInt();

        Pattern aobj = new Pattern();

        aobj.Display(iValue);
    }
}


