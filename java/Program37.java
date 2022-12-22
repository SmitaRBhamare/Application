//Problem statements : Write a program which accpets single digit from user and print it into word

import java.util.*;

class Arithematic
{
    public void Display(int iNo)
    {
         String Arr[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
            
        if(iNo < 0)
        {
            iNo = -iNo;
        }

        if(iNo > 9)
        {
            System.out.println("Invalide number ");    
        }
        else
        {
             System.out.println(Arr[iNo-1]); 
        }
         
    }
}

class Program37
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter single digit number");
        int iValue = sobj.nextInt();

        Arithematic aobj = new Arithematic();

        aobj.Display(iValue);
    }
}


