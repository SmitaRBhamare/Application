//Problem statements : Accept number from user and display factors in decresing order.

import java.util.*;

class Factors
{
    public void FactRev(int iValue)
    {
        for(int iCnt = (iValue/2); iCnt >0; iCnt--)
        {
            if(iValue % iCnt == 0)
            {
                System.out.print(iCnt+"\t");
            } 
        }
    }
}

class Program17
{
    public static void main(String arr[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number");
        int iNo = sobj.nextInt();

        Factors fobj = new Factors();

        fobj.FactRev(iNo);
    }
}