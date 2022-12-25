//Problem statements : Write a program which accept N numbers from user and accept range and Display all elements from that range 
import java.util.*;

class Arithematic
{
    protected int Arr[];
    public int iStart;
    public int iEnd;

    public Arithematic(int iSize, int iNo1, int iNo2)
    {
        Arr = new int [iSize]; 
        iStart = iNo1;
        iEnd = iNo2;   
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

     public void Range()
    {
         System.out.println("Elments of given range are :");
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] > iStart && Arr[iCnt] < iEnd)
            {
                System.out.print(Arr[iCnt]+"\t");
            }
        } 
    }
}

class Program79
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter size of array : ");
        int iValue1 = sobj.nextInt();

        System.out.println("Enter starting number : ");
        int iValue2 = sobj.nextInt();

        System.out.println("Enter Ending number : ");
        int iValue3 = sobj.nextInt();

        Arithematic aobj = new Arithematic(iValue1, iValue2, iValue3);

        aobj.Accept();

        aobj.Range();  
    }
}


