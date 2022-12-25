//Problem statements : Write a program which accept N numbers from user and display all such number which contain 3 digits in it.
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

     public void Display()
    {
        System.out.println("Number containing 3 digits are ");
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] > 99 )
            {
                System.out.println(Arr[iCnt]);   
            }   
        } 
    }
}

class Program84
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter size of array : ");
        int iValue = sobj.nextInt();

        Arithematic aobj = new Arithematic(iValue);

        aobj.Accept();

        aobj.Display(); 
    }
}


