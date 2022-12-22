//Problem statements : Write a program which accept area in sq.feet and convert it into square meter.
//( 1 Sq. feet = 0.0929 sq m)

import java.util.*;

class Arithematic
{
    public double SquareMeter(float iNo)
    {
        double SqFt = 0;

        SqFt = 0.0929 * iNo;
        
        return SqFt;
    }
}

class Program50
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter temperature in Fahrenheit ");
        float iValue = sobj.nextFloat();

        Arithematic aobj = new Arithematic();

        double iRet = aobj.SquareMeter(iValue);

        System.out.println("Temperature in celsius is : "+iRet);
    }
}


