//Problem statements : Write a program which accept N numbers from user and accept another number as NO and return index of first occurance of that No
import java.util.*;

class Arithematic
{
    protected int Arr[];
    public int iNum ;

    public Arithematic(int iSize, int iNo)
    {
        Arr = new int [iSize]; 
        iNum = iNo;   
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

     public int FirstOcc()
    {
        int iCnt = 0;
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] == iNum)
            {
                break;
            }
        } 
        return iCnt; 
    }
}

class Program77
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter size of array : ");
        int iValue1 = sobj.nextInt();

        System.out.println("Enter size of array : ");
        int iValue2 = sobj.nextInt();

        Arithematic aobj = new Arithematic(iValue1, iValue2);

        aobj.Accept();

        int iRet = aobj.FirstOcc();

        System.out.println("First occurance of "+iValue2+ " is at index " + iRet);
        
    }
}


