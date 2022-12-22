//Problem statements : Write a program which accept temperature in Fahrenheit and convert it into celsius.
//1 celsius =( Fahrenheit - 32)*(5/9)

import java.util.*;

class Arithematic
{
    public double FstoCs(float iNo)
    {
        double Cel = 0;

        Cel = (iNo - 32) *5/9;
        return Cel;
    }
}

class Program49
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter temperature in Fahrenheit ");
        float iValue = sobj.nextFloat();

        Arithematic aobj = new Arithematic();

        double iRet = aobj.FstoCs(iValue);

        System.out.println("Temperature in celsius is : "+iRet);
    }
}


