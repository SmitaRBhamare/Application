//Problem statements : Write a program to find factorial of given number.

import java.util.*;

class Arithematic
{
    public int Display(int iNo)
    {
        int Factorial = 1;

        if(iNo < 0)
        {
            iNo = (-iNo);
        }

        for(int iCnt = iNo; iCnt > 0; iCnt--)
        {
            Factorial = Factorial * iCnt;
        }
        return Factorial;
    }
}

class Program38
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter  number");
        int iValue = sobj.nextInt();

        Arithematic aobj = new Arithematic();

        int iRet = aobj.Display(iValue);

        System.out.println("Factorial of"+iValue +" is : " +iRet);
    }
}


