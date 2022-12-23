//Problem statements : Write a program which accept range from user and display all even numbers in between that range.

import java.util.*;

class Arithematic
{
    public void RangeDisplayEven(int iNo1, int iNo2)
    {
        if(iNo2 < iNo1)
        {
            System.out.println("Invalide range");
        }
        for(int iCnt = iNo1; iCnt <= iNo2; iCnt++)
        {
            if(iCnt % 2 == 0)
            {
                System.out.print(iCnt+"\t");
            }
           
        }
          
    }
}

class Program52
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter first number ");
        int iValue1 = sobj.nextInt();

        System.out.println("Enter second number ");
        int iValue2 = sobj.nextInt();

        Arithematic aobj = new Arithematic();

        aobj.RangeDisplayEven(iValue1, iValue2);

    }
}


