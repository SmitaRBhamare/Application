//Problem statements : Write a program which accept N numbers from user and accept range and Display all elements from that range 
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

     public int Product()
    {
        int iMult = 1;
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] % 2  != 0)
            {
               iMult = iMult * Arr[iCnt];
            }
        } 
        return iMult;
    }
}

class Program80
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter size of array : ");
        int iValue = sobj.nextInt();

        Arithematic aobj = new Arithematic(iValue);

        aobj.Accept();

        int iRet = aobj.Product(); 

        System.out.println("Product of all odd elements is :" +iRet); 
    }
}


