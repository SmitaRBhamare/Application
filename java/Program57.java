//Problem statements : Write a program which accept range from user and check wheather it contains 0 in it or not.

import java.util.*;

class Arithematic
{
    public int iNum;
    public Arithematic(int iNo)
    {
        iNum = iNo;
    }

    public boolean ChkZero()
    {
        int iDigit = 0;
        boolean flag = false;

        if( iNum < 0)
        {
            iNum = - iNum;
        }

        while(iNum != 0 )
        {
            iDigit = iNum % 10;
            if(iDigit == 0)
            {
                flag = true;
                break;
            }   
            iNum = iNum /10;  
        }
        return flag;
    }
}


class Program57
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter first number ");
        int iValue = sobj.nextInt();

        Arithematic aobj = new Arithematic(iValue);

        boolean bRet = aobj.ChkZero();

        if(bRet == true)
        {
            System.out.println("It contains Zero");
        }
        else
        {
            System.out.println("There is no Zero");
        }

    }
}


