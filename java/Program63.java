//Problem statements : Write a program which accept range from user and return the count digits from the range between 3 and 7.

import java.util.*;

class Arithematic
{
    public int iNum;
    public Arithematic(int iNo)
    {
        iNum = iNo;
    }

    public int CountRange()
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
            if(iDigit >3 && iDigit <7)
            {
                iCnt++;
            }   
            iNum = iNum /10;  
        }
        return iCnt;
    }
}


class Program63
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter first number ");
        int iValue = sobj.nextInt();

        Arithematic aobj = new Arithematic(iValue);

        int iRet = aobj.CountRange();

        System.out.println("Number of  digits witihin range of 3 and 7 are :" +iRet);
    }
}


