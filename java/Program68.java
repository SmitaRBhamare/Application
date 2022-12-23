//Problem statements : Write a program which accept N numbers from user and  check wheather that number contain 11 in it or not.
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

     public boolean Check()
    {
        boolean Flag = false;
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
          if(Arr[iCnt]  == 11)
          {
             Flag = true;
             return Flag ;
          }
        }   
        return Flag;
    }
}

class Program68
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter size of array : ");
        int iValue = sobj.nextInt();

        Arithematic aobj = new Arithematic(iValue);

        aobj.Accept();
    
       boolean bRet = aobj.Check();

        if( bRet == true)
        {
            System.out.println(" 11 is preset");
        }
        else
        {
            System.out.println("11 is absent");
        }  
    }
}


