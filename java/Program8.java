//Problem statements : Accept one number and if the number is less than 10 then print "Hello" otherwise print "Demo".

import java.util.*;

class Pattern
{
    void Display(int iValue)
    {
        if(iValue < 10)
        {
            System.out.print("Hello");
        }
        else
        {
            System.out.print("Demo");
        }

    }
}
class Program8
{

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the number");
        int iNo = sobj.nextInt();

        Pattern pobj = new Pattern();

        pobj.Display(iNo);


    }
}