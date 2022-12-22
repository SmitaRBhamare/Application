//Problem statements : Write a program which accept width and height of rectangle from user and calculate its area.
//consider value of PI as 3.14(Area = Width * Height)

import java.util.*;

class Arithematic
{
    public double RectArea(float Width, float Height)
    {
        double Area = 0;
        
        Area = ( Width* Height);    

        return Area;   
    }
}

class Program47
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter width of rectangle  ");
        float iValue1 = sobj.nextFloat();

        System.out.println("Enter height of rectangle");
        float iValue2 = sobj.nextFloat();

        Arithematic aobj = new Arithematic();

        double iRet = aobj.RectArea(iValue1, iValue2);

        System.out.println("Area of rectangle is  : "+iRet);
    }
}


