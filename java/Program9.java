//Problem statements : Accept one number and display first number in second number of times.
import java.util.*;

class Pattern
{
    void Display(int iValue1, int iValue2)
    {
        if(iValue2 < 0)
        {
            iValue2 = -(iValue2);
        }

        int iCnt = 0;

        for(iCnt=0; iCnt < iValue2; iCnt++)
        {
            System.out.print( +iValue1+"\t" );
        }
    }
}

class Program9
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.print("Enter number you want print :");
        int iNo1 = sobj.nextInt();

        System.out.print("Enter frequency :");
        int iNo2 = sobj.nextInt();

        Pattern pobj = new Pattern();

        pobj.Display(iNo1, iNo2);
    }
}

