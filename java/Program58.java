//Problem statements : Write a program which accept range from user and count frequency of 2 in it.

import java.util.*;

class Arithematic
{
    public int iNum;
    public Arithematic(int iNo)
    {
        iNum = iNo;
    }

    public int CountTwo()
    {
        int iDigit = 0;
        int iCnt = 0;
        if( iNum < 0)
        {
            iNum = - iNum;
        }

        while(iNum != 0 )
        {
            iDigit = iNum % 10;
            if(iDigit == 2)
            {
                iCnt++;
            }   
            iNum = iNum /10;  
        }
        return iCnt;
    }
}


class Program58
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter first number ");
        int iValue = sobj.nextInt();

        Arithematic aobj = new Arithematic(iValue);

        int iRet = aobj.CountTwo();

        System.out.println("Frequency of 2 is :" +iRet);
    }
}


