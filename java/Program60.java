//Problem statements : Write a program which accept range from user and count frequency of 4 in it.

import java.util.*;

class Arithematic
{
    public int iNum;
    public Arithematic(int iNo)
    {
        iNum = iNo;
    }

    public int Count()
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
            if(iDigit < 6)
            {
                iCnt++;
            }   
            iNum = iNum /10;  
        }
        return iCnt;
    }
}


class Program60
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter first number ");
        int iValue = sobj.nextInt();

        Arithematic aobj = new Arithematic(iValue);

        int iRet = aobj.Count();

        System.out.println("Numbers which are less than 6 are  :" +iRet);
    }
}


