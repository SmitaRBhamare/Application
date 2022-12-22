//Problem statements : Write a program which accpets total marks and obtained marks from user and calculate percentage.

import java.util.*;

class Arithematic
{
    public float Percentage(int iValue1, int iValue2)
    {
        float Percent = 0.0f;

        if( iValue2 == 0)
        {
            iValue2 = 1;
        }
        Percent = (iValue2 * 100.0f)/ iValue1;

        return Percent;
    }
}

class Program30
{
    public static void main(String arr[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the total marks ");
        int iNo1 = sobj.nextInt();

        System.out.println("Enter the marks obtained ");
        int iNo2 = sobj.nextInt();

        Arithematic aobj = new Arithematic();

        float fRet = aobj.Percentage(iNo1, iNo2);

        System.out.println("Percentage is  :" +fRet);   
    }
}

