//Problem statements : Write a program which accept N numbers from user and return difference between largest and smallest numbers.
import java.util.*;

class Arithematic
{
    protected int Arr[];

    public Arithematic(int iSize)
    {
        Arr = new int [iSize]; 
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

     public int Difference()
    {
        int iMin = Arr[0];
        int iMax = Arr[0];
        int iDiff = 0;
        
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(iMin > Arr[iCnt])
            {
                iMin = Arr[iCnt]; 
            }
            else if(iMax < Arr[iCnt])
            {
                iMax = Arr[iCnt];
            }
        } 

        iDiff = iMax - iMin;
        return iDiff;
    }
}

class Program83
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter size of array : ");
        int iValue = sobj.nextInt();

        Arithematic aobj = new Arithematic(iValue);

        aobj.Accept();

        int iRet = aobj.Difference(); 

        System.out.println("Difference between largest and smallest number is  :" +iRet); 
    }
}


