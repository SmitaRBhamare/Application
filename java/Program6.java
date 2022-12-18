//Problem statements : Accept one number and print that number of *.
import java.util.*;

class Pattern
{
    public void Display(int iValue)
    {
        while(iValue != 0)
        {
            System.out.print("* ");
            iValue--;
        }
    }
}

class Program6
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number :");
        int iNo = sobj.nextInt();

        Pattern pobj = new Pattern();

        pobj.Display(iNo);
    }
}


