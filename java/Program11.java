//Problem statements : Accept one number and print that number of even number on screen.
import java.util.*;

class Display
{
    void DisplayEven(int iNo)
    {
        int iCnt = 0;

        for(iCnt = 2; iCnt <= iNo*2; iCnt+=2)
        {
            if(iCnt % 2 == 0)
            {
                System.out.println(+iCnt);
            }

        }
        
    }

}

class Program11
{
    public static void main(String ard[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number");
        int iValue = sobj.nextInt();

        Display dobj = new Display();

        dobj.DisplayEven(iValue);

    }
}


