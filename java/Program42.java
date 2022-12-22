//Problem statements : Accept amount in US dollar and return its corresponding value in Indian currency.

import java.util.*;

class Pattern
{
    public void DollarToINR(int iNo)
    {
        int Dollar = iNo* 70;

        System.out.println(Dollar+" rupees");
    }
}

class Program42
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of USD");
        int iValue = sobj.nextInt();

        Pattern aobj = new Pattern();

        aobj.DollarToINR(iValue);
    }
}


