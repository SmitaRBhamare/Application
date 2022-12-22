//Problem statements : Write a program which accpets three numbers from user and print its multiplication.

import java.util.*;

class Arithematic
{
    public int iValue1;
    public int iValue2;
    public int iValue3;

    public Arithematic(int iNo1, int iNo2, int iNo3)
    {
        iValue1 = iNo1;
        iValue2 = iNo2;
        iValue3 = iNo3;
    }

    public int Multiplication()
    {
        int iMult = 1;

        if( iValue1 == 0 )
        {
            iValue1 = 1;
        }
        else if( iValue2 == 0)
        {
            iValue2 = 1 ;
        }
        else if( iValue3 == 0)
        {
            iValue3 = 1;
        }

        iMult = iValue1 *iValue2* iValue3;

        return iMult;
    }
}

class Program29
{
    public static void main(String arr[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the number");
        int iNo1 = sobj.nextInt();

        System.out.println("Enter the number");
        int iNo2 = sobj.nextInt();

        System.out.println("Enter the number");
        int iNo3 = sobj.nextInt();

        Arithematic aobj = new Arithematic(iNo1, iNo2, iNo3);

        int iRet = aobj.Multiplication();

        System.out.println("Multiplication of given number is :"+iRet);

       
    }
}

