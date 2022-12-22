//Problem statements : Write a program which accpets two numbers from user and check wheather that numbers are equal or not.

import java.util.*;

class Arithematic
{
    public int iValue1;
    public int iValue2;

    public Arithematic(int iNo1, int iNo2)
    {
        iValue1 = iNo1;
        iValue2 = iNo2;
    }

    public boolean ChkGreater()
    {
        if(iValue1 == iValue2)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

class Program28
{
    public static void main(String arr[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the number");
        int iNo1 = sobj.nextInt();

        System.out.println("Enter the number");
        int iNo2 = sobj.nextInt();

        Arithematic aobj = new Arithematic(iNo1, iNo2);

        boolean iRet = aobj.ChkGreater();

        if(iRet == true)
        {
            System.out.println("Equal");
        }
        else
        {
            System.out.println("Not equal"); 
        }
    }
}

