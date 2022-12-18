//Problem statements : Accept one number and check whether is divisible by 5 or not.
import java.util.*;

class Arithematic
{
    public Boolean bAns;
    public int iNum;

    public Arithematic(int iValue)
    {
        bAns = false;
        iNum = iValue;
    }

    public boolean check()
    {
        if(iNum % 5 == 0)
        {
            return true;
        }
        else
        {
            return false;
        }

    }
}
class Program4
{
    public static void main(String arr[])
    {
        boolean bRet = false;
        
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter the number :");
        int iNo = sobj.nextInt();

        Arithematic aobj = new Arithematic(iNo);

        bRet = aobj.check();

        if(bRet == true)
        {
            System.out.println(+iNo +" is divisible by 5");
        }
        else
        {
            System.out.println(+iNo+ " is not divisible by 5");
        }  
    }   
}

