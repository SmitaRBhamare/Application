//Problem statements : Write a program which accept N numbers from user and display summation of digits of each number.
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

     public void DigitisSum()
    {
        int iDigit = 0;
        int iSum = 0;
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            System.out.println("Summation of digits of "+ Arr[iCnt]+" is : ");
            while(Arr[iCnt] != 0)
            {
                iDigit = Arr[iCnt] % 10;
                iSum = iSum + iDigit;
                Arr[iCnt] = Arr[iCnt] / 10;
            }
            System.out.println(iSum);
            iSum = 0;
        } 
    }
}

class Program85
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter size of array : ");
        int iValue = sobj.nextInt();

        Arithematic aobj = new Arithematic(iValue);

        aobj.Accept();

        aobj.DigitisSum(); 
    }
}


