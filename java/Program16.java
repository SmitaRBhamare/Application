//Problem statements : Accept number from user and display its multiplication of factors 

import java.util.*;

class Factors
{
    public int FactMult(int iValue)
    {
        int iCnt = 0;
        int iMult = 1;

        for(iCnt = 1; iCnt <= (iValue/2) ; iCnt++)
        {
            if(iValue % iCnt == 0)
            {
                iMult = iMult * iCnt;
            }
        }
        return iMult;
    }
}

class Program16
{
    public static void main(String arr[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number");
        int iNo = sobj.nextInt();

        Factors fobj = new Factors();

        int iRet = fobj.FactMult(iNo);

        System.out.println("Multiplication of factors of "+iNo +" is : "+iRet);

    }
}