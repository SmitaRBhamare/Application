//Problem statements : Write a program which accept radius of circle from user and calculate its area.
//consider value of PI as 3.14(Area = PI* Radius* Radius)

import java.util.*;

class Arithematic
{
    public double CircleArea(float iNo)
    {
        double Area = 0;
        float PI = 3.14f;
        Area = (PI*iNo * iNo );    

        return Area;   
    }
}

class Program46
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter radius of circle ");
        float iValue = sobj.nextFloat();

        Arithematic aobj = new Arithematic();

        double iRet = aobj.CircleArea(iValue);

        System.out.println("Area of circle is  : "+iRet);
    }
}


