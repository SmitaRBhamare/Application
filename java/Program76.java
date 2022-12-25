//Problem statements : Write a program which accept N numbers from user and accept another number as NO and check wheather No is present or not.
import java.util.*;

class Arithematic
{
    protected int Arr[];
    public int iNum ;

    public Arithematic(int iSize, int iNo)
    {
        Arr = new int [iSize]; 
        iNum = iNo;   
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the " +Arr.length+ " elements :");
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }
    }

     public boolean Check()
    {
        boolean Flag = false;

        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] == iNum)
            {
                Flag = true;
                break;
            }
        } 
        return Flag; 
    }
}

class Program76
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter size of array : ");
        int iValue1 = sobj.nextInt();

        System.out.println("Enter size of array : ");
        int iValue2 = sobj.nextInt();

        Arithematic aobj = new Arithematic(iValue1, iValue2);

        aobj.Accept();

        boolean bRet = aobj.Check();

        if(bRet == true)
        {
            System.out.println(iValue2+ " is present in array");
        }
        else
        {
           System.out.println(iValue2+ " is not present in array"); 
        }
    }
}


