//Problem statements : Accept one number and print factors of that number.
import java.util.*;

class Display
{
    void DisplayFactors(int iNo)
    {
        int iCnt = 0;

        for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
        {

            if(iNo % iCnt == 0 )
            {
                System.out.println(+iCnt);
            }

        }
        
    }

}

class Program12
{
    public static void main(String ard[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number");
        int iValue = sobj.nextInt();

        Display dobj = new Display();

        dobj.DisplayFactors(iValue);

    }
}


