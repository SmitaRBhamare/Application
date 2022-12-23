//Problem statements : Write a program which accept N numbers from user and  return difference between even and odd number..
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

     public int Frequecy()
    {
        int iCount1 = 0, iCount2 = 0;
        int iDiff = 0;

        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
          if(Arr[iCnt] % 2 == 0)
          {
            iCount1++;
          }
          else
          {
            iCount2++;
          }
        }  
        iDiff = iCount1 - iCount2; 
        return iDiff;
    }
}


class Program67
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter size of array : ");
        int iValue = sobj.nextInt();

        Arithematic aobj = new Arithematic(iValue);

        aobj.Accept();
    
       int iRet = aobj.Frequecy();

        System.out.println("Difference between even numbers and odd numbers are :" +iRet);
    }
}


