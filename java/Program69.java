//Problem statements : Write a program which accept N numbers from user and  return frequency of  11 from it .
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
        int iCount = 0;
        
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
          if(Arr[iCnt]  == 11)
          {
             iCount++;
          }
        }   
       return iCount;
    }
}

class Program69
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter size of array : ");
        int iValue = sobj.nextInt();

        Arithematic aobj = new Arithematic(iValue);

        aobj.Accept();
    
       int iRet = aobj.Frequecy();

        System.out.println(" Frequency of 11 is :" + iRet);  
    }
}


