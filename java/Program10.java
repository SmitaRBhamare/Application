//Problem statements : Accept one number and check whether number is even or odd.

import java.util.*;

class Arithematic
{
    boolean CheckEvenOdd(int iValue)
    {
        if(iValue % 2 == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

class Program10
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number");
        int iNo = sobj.nextInt();

        Arithematic aobj = new Arithematic();

        boolean bRet = false;
        bRet = aobj.CheckEvenOdd(iNo);

        if(bRet == true)
        {
            System.out.println(+iNo+" is even");
        }
        else
        {
            System.out.println(+iNo+" is odd");
        }






    }
}
