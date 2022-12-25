//Problem statements : Write a program which accept N numbers from user and display below pattern.
/*
5

1   *   2   *   3   *   4   *   5   *
*/
import java.util.*;

class Pattern
{
    public void Display(int iValue)
    {
        for(int iCnt = 1 ; iCnt <= iValue; iCnt++)
        {
            System.out.print(iCnt+" * ");  
        }
    }
}

class Program88
{
    public static void main(String arr[])
    {
        System.out.println("Enter the number");
        Scanner sobj = new Scanner(System.in);

        int iNo = sobj.nextInt();


        Pattern pobj = new Pattern();

        pobj.Display(iNo);
    }
}