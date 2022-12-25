//Problem statements : Write a program which accept N numbers from user and accept range and return smallest number.
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

     public int Minimum()
    {
        int iMin = Arr[0];
        
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(iMin > Arr[iCnt])
            {
                iMin = Arr[iCnt]; 
            }
        } 
        return iMin;
    }
}

class Program82
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter size of array : ");
        int iValue = sobj.nextInt();

        Arithematic aobj = new Arithematic(iValue);

        aobj.Accept();

        int iRet = aobj.Minimum(); 

        System.out.println("Minimum number in elements is :" +iRet); 
    }
}


