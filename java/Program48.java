//Problem statements : Write a program which accept distance in km and convert it into m.
// 1 Km = 1000 m.

import java.util.*;

class Arithematic
{
    public int KmToMeter(int distance)
    {
        int iNo = 0;
        
        iNo = ( 1000* distance);    

        return iNo;   
    }
}

class Program48
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter distance in meter ");
        int iValue = sobj.nextInt();

        Arithematic aobj = new Arithematic();

        int iRet = aobj.KmToMeter(iValue);

        System.out.println("Distance in cm is  : "+iRet);
    }
}


