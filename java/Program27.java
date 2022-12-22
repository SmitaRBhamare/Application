//Problem statements : Write a program which accpets one number from user and check wheather that number is greater than 100 or not 

import java.util.*;

class Arithematic
{
    public int iValue;

    public Arithematic(int iNo)
    {
        iValue = iNo;
    }

    public boolean ChkGreater()
    {
        if(iValue > 100)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

class Program27
{
    public static void main(String arr[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the number");
        int iNo = sobj.nextInt();

        Arithematic aobj = new Arithematic(iNo);

        boolean iRet = aobj.ChkGreater();

        if(iRet == true)
        {
            System.out.println(iNo+"  is greather than 100");
        }
        else
        {
            System.out.println(iNo+"  is smaller than 100"); 
        }
    }
}

