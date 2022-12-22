//Problem statements : Write a program which accpets  number from user and if number is less than 50
// then print small, if it is greater than 50 then and less than 100 then print medium and if it is greater than 100 then print large.

import java.util.*;

class Arithematic
{
    public void Number(int iNo)
    {
        if(iNo < 50)
        {
            System.out.println("Smaller");
        }
        else if(iNo > 50 && iNo < 100)
        {
            System.out.println("Medium");
        }
        else
        {
            System.out.println("Larger");
        }
    }
}

class Program36
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number");
        int iValue = sobj.nextInt();

        Arithematic aobj = new Arithematic();

        aobj.Number(iValue);
    }
}


