//Problem statements : Write a program which accept N numbers from user and  return summation of even elements and odd elements
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
        int iSum1 = 0 , iSum2 = 0;
        int iDiff = 0;
        
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
          if(Arr[iCnt] % 2 == 0)
          {
             iSum1 = iSum1 + Arr[iCnt];
          }
          else
          {
            iSum2 = iSum2 + Arr[iCnt];
          }
        }  
        iDiff = iSum1 - iSum2; 
       return iDiff;
    }
}

class Program71
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter size of array : ");
        int iValue = sobj.nextInt();

        Arithematic aobj = new Arithematic(iValue);

        aobj.Accept();
    
       int iRet = aobj.Difference();

        System.out.println(" Difference between even and odd numbers are :" + iRet);  
    }
}


