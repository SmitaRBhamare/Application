//Problem statements : Write a program which accept N numbers from user and display below pattern.
/*
5

A   B   C   D   E
*/
import java.util.*;

class Pattern
{
    public void Display(int iValue)
    {
        char ch = 'A';
        for(int iCnt = 0; iCnt < iValue; iCnt++)
        {
            System.out.print(ch+"\t");
            ch++;
        }

    }


}

class Program86
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