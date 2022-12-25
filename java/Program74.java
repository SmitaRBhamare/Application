//Problem statements : Write a program which accept N numbers from user and display all such elements which are even and divisible by 5 
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
         System.out.println("Elements that divisible by 3 and 5 are : ");
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] % 3 == 0) && (Arr[iCnt] % 5 == 0))
            {
                System.out.println(+Arr[iCnt]);
            }
        }  
    }
}

class Program74
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


