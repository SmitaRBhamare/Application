//Problem statements : Accept one number and print that number of *.
import java.util.*;

class Pattern
{
    void star(int iValue)
    {
        int iCnt = 0;

        for(iCnt = 0; iCnt< iValue; iCnt++)
        {
            System.out.print(" * ");
        }

    }
   

}

class Program7
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.print("Enter one number :");
        int iNo = sobj.nextInt();

        Pattern pobj = new Pattern();

        pobj.star(iNo);

    }
}

